import sys
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QHBoxLayout, QSlider, QLabel, QPushButton
from PyQt5.QtCore import Qt


class ROSPublisher(Node):
    def __init__(self):
        super().__init__('twist_command_publisher')
        self.publisher = self.create_publisher(Twist, '/garmi_base/twist_command', 10)
        self.twist_msg = Twist()
        self.is_publishing = False

    def publish_twist(self, linear_x, linear_y, linear_z, angular_x, angular_y, angular_z):
        self.twist_msg.linear.x = linear_x
        self.twist_msg.linear.y = linear_y
        self.twist_msg.linear.z = linear_z
        self.twist_msg.angular.x = angular_x
        self.twist_msg.angular.y = angular_y
        self.twist_msg.angular.z = angular_z

        while self.is_publishing:
            self.publisher.publish(self.twist_msg)
            self.get_logger().info(f'Publishing: {self.twist_msg}')

    def stop_publishing(self):
        self.is_publishing = False


class VelocityControlApp(QWidget):
    def __init__(self, ros_publisher):
        super().__init__()

        self.ros_publisher = ros_publisher
        self.init_ui()

    def init_ui(self):
        self.setWindowTitle("ROS2 Velocity Control with Sliders")
        self.setGeometry(100, 100, 500, 400)

        # Layout
        layout = QVBoxLayout()

        # Linear Velocity Sliders
        linear_layout = QVBoxLayout()
        
        self.linear_x_slider = self.create_slider("Linear X", -5, 5, 0)
        linear_layout.addLayout(self.linear_x_slider[0])

        self.linear_y_slider = self.create_slider("Linear Y", -5, 5, 0)
        linear_layout.addLayout(self.linear_y_slider[0])

        self.linear_z_slider = self.create_slider("Linear Z", -5, 5, 0)
        linear_layout.addLayout(self.linear_z_slider[0])

        layout.addLayout(linear_layout)

        # Angular Velocity Sliders
        angular_layout = QVBoxLayout()

        self.angular_x_slider = self.create_slider("Angular X", -5, 5, 0)
        angular_layout.addLayout(self.angular_x_slider[0])

        self.angular_y_slider = self.create_slider("Angular Y", -5, 5, 0)
        angular_layout.addLayout(self.angular_y_slider[0])

        self.angular_z_slider = self.create_slider("Angular Z", -5, 5, 0)
        angular_layout.addLayout(self.angular_z_slider[0])

        layout.addLayout(angular_layout)

        # Buttons
        self.submit_button = QPushButton('Submit', self)
        self.submit_button.clicked.connect(self.submit_command)
        self.stop_button = QPushButton('Stop', self)
        self.stop_button.clicked.connect(self.stop_command)

        layout.addWidget(self.submit_button)
        layout.addWidget(self.stop_button)

        self.setLayout(layout)

    def create_slider(self, label_text, min_value, max_value, initial_value):
        # Create horizontal layout for each slider
        layout = QHBoxLayout()

        # Label
        label = QLabel(f"{label_text}: {initial_value}")
        layout.addWidget(label)

        # Slider
        slider = QSlider(Qt.Horizontal, self)
        slider.setRange(min_value * 100, max_value * 100)  # Multiplied by 100 for better precision
        slider.setValue(initial_value * 100)
        slider.setTickInterval(1)
        slider.setTickPosition(QSlider.TicksBelow)
        slider.valueChanged.connect(lambda value: self.update_label(label, value))
        
        layout.addWidget(slider)

        return layout, slider, label

    def update_label(self, label, value):
        # Update the label with the current slider value (scaled back down)
        label.setText(f"Value: {value / 100.0:.2f}")

    def submit_command(self):
        # Get the values from sliders
        linear_x = self.linear_x_slider[1].value() / 100.0
        linear_y = self.linear_y_slider[1].value() / 100.0
        linear_z = self.linear_z_slider[1].value() / 100.0
        angular_x = self.angular_x_slider[1].value() / 100.0
        angular_y = self.angular_y_slider[1].value() / 100.0
        angular_z = self.angular_z_slider[1].value() / 100.0

        # Start publishing in a separate thread
        self.ros_publisher.is_publishing = True
        from threading import Thread
        publishing_thread = Thread(
            target=self.ros_publisher.publish_twist,
            args=(linear_x, linear_y, linear_z, angular_x, angular_y, angular_z)
        )
        publishing_thread.daemon = True
        publishing_thread.start()

    def stop_command(self):
        # Stop publishing
        self.ros_publisher.stop_publishing()
        print("Publishing stopped.")


if __name__ == "__main__":
    rclpy.init()

    # ROS2 Publisher
    ros_publisher = ROSPublisher()

    # PyQt Application
    app = QApplication(sys.argv)
    window = VelocityControlApp(ros_publisher)
    window.show()
    sys.exit(app.exec_())

    rclpy.shutdown()

