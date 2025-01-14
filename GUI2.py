import sys
import rclpy
from rclpy.node import Node
from PyQt5.QtWidgets import (
    QApplication, QWidget, QVBoxLayout, QLabel, QPushButton, QSlider, QStackedWidget, QHBoxLayout
)
from PyQt5.QtCore import Qt


#class ROSPublisher(Node):
#    def __init__(self):
#        super().__init__('robot_control_publisher')

#    def publish_twist(self, linear, angular):
#        self.get_logger().info(f"Publishing Twist: Linear={linear}, Angular={angular}")

#    def publish_pose(self, head_pose, arm_pose, gripper_pose):
#        self.get_logger().info(f"Publishing Pose: Head={head_pose}, Arm={arm_pose}, Gripper={gripper_pose}")
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Vector3

class ROSPublisher(Node):
    def __init__(self):
        super().__init__('robot_control_publisher')
        self.twist_publisher = self.create_publisher(Twist, '/garmi_base/twist_command', 10)

    def publish_twist(self, linear_x, linear_y, linear_z, angular_x, angular_y, angular_z):
        # Create a Twist message
        twist_msg = Twist()
        
        # Set linear velocities (using Vector3)
        twist_msg.linear = Vector3(x=linear_x, y=linear_y, z=linear_z)
        
        # Set angular velocities (using Vector3)
        twist_msg.angular = Vector3(x=angular_x, y=angular_y, z=angular_z)
        
        # Publish the message
        self.twist_publisher.publish(twist_msg)
        
        # Logging the message (for debugging purposes)
        self.get_logger().info(f"Publishing Twist: linear({linear_x}, {linear_y}, {linear_z}), angular({angular_x}, {angular_y}, {angular_z})")


class BaseControl(QWidget):
    def __init__(self, ros_publisher, stacked_widget):
        super().__init__()
        self.ros_publisher = ros_publisher
        self.stacked_widget = stacked_widget
        self.init_ui()

    def init_ui(self):
        layout = QVBoxLayout()

        title = QLabel("Base Control")
        title.setStyleSheet("font-size: 24px; font-weight: bold; color: #28a745;")
        title.setAlignment(Qt.AlignCenter)
        layout.addWidget(title)

        self.sliders = {}
        for label, axis in [
            ("Linear X", "linear_x"), ("Linear Y", "linear_y"), ("Linear Z", "linear_z"),
            ("Angular X", "angular_x"), ("Angular Y", "angular_y"), ("Angular Z", "angular_z")
        ]:
            slider_layout, slider = self.create_slider(label, -100, 100, 0)
            layout.addLayout(slider_layout)
            self.sliders[axis] = slider

        button_layout = QHBoxLayout()

        submit_button = QPushButton("Submit")
        submit_button.setStyleSheet("background-color: #007bff; color: white; padding: 10px; border-radius: 5px;")
        submit_button.clicked.connect(self.submit_command)
        button_layout.addWidget(submit_button)

        home_button = QPushButton("Home")
        home_button.setStyleSheet("background-color: #6c757d; color: white; padding: 10px; border-radius: 5px;")
        home_button.clicked.connect(lambda: self.stacked_widget.setCurrentIndex(0))
        button_layout.addWidget(home_button)

        layout.addLayout(button_layout)
        self.setLayout(layout)

    def create_slider(self, label_text, min_value, max_value, initial_value):
        layout = QHBoxLayout()
        label = QLabel(f"{label_text}: {initial_value}")
#        label.setStyleSheet("font-size: 16px; color: #333;")
        layout.addWidget(label)

        slider = QSlider(Qt.Horizontal)
        slider.setRange(min_value, max_value)
        slider.setValue(initial_value)
        slider.setTickInterval(10)
        slider.setTickPosition(QSlider.TicksBelow)
#        slider.setStyleSheet("""
#            QSlider::handle:horizontal {
#                background-color: #28a745;
#                border: 1px solid #1e7e34;
#                width: 15px;
#                margin: -5px 0;
#            }
#        """)
        slider.valueChanged.connect( lambda value: self.update_label(label, value))
#lambda value: label.setText(f"{label_text}: {value}"))
        layout.addWidget(slider)

        return layout, slider
    def update_label(self, label, value):
        # Update the label with the current slider value (scaled back down)
        label.setText(f"Value: {value / 100.0:.2f}")

#    def submit_command(self):
#        linear = {
#            "x": self.sliders["linear_x"].value(),
#            "y": self.sliders["linear_y"].value(),
#            "z": self.sliders["linear_z"].value()
#        }
#        angular = {
#            "x": self.sliders["angular_x"].value(),
#            "y": self.sliders["angular_y"].value(),
#            "z": self.sliders["angular_z"].value()
#        }
#        self.ros_publisher.publish_twist(linear, angular)

    def submit_command(self):
    # Accessing the sliders from the dictionary by their keys
        linear_x = self.sliders["linear_x"].value() / 100.0
        linear_y = self.sliders["linear_y"].value() / 100.0
        linear_z = self.sliders["linear_z"].value() / 100.0
        angular_x = self.sliders["angular_x"].value() / 100.0
        angular_y = self.sliders["angular_y"].value() / 100.0
        angular_z = self.sliders["angular_z"].value() / 100.0

    # Setting publishing flag and starting a new thread for publishing
        self.ros_publisher.is_publishing = True
        from threading import Thread
        publishing_thread = Thread(
        target=self.ros_publisher.publish_twist,
        args=(linear_x, linear_y, linear_z, angular_x, angular_y, angular_z)
        )
        publishing_thread.daemon = True
        publishing_thread.start()

class PoseStep(QWidget):
    def __init__(self, title, stacked_widget, on_next, data_storage, part_name, is_final_step=False):
        super().__init__()
        self.stacked_widget = stacked_widget
        self.on_next = on_next
        self.data_storage = data_storage
        self.part_name = part_name
        self.is_final_step = is_final_step
        self.init_ui(title)

    def init_ui(self, title):
        layout = QVBoxLayout()

        title_label = QLabel(title)
        title_label.setStyleSheet("font-size: 20px; font-weight: bold; color: #28a745;")
        title_label.setAlignment(Qt.AlignCenter)
        layout.addWidget(title_label)

        self.sliders = {}
#        for axis in ['X position', 'Y position', 'Z position','Angular X', 'Angular Y', 'Angular Z' ]:
#            slider_layout, slider = self.create_slider(f"{axis} Position", -100, 100, 0)
#            layout.addLayout(slider_layout)
#            self.sliders[axis] = slider

        button_layout = QHBoxLayout()

        if self.is_final_step:
            for axis in ['Force', 'Speed', 'width' ]:
              slider_layout, slider = self.create_slider(f"{axis}", -100, 100, 0)
              layout.addLayout(slider_layout)
              self.sliders[axis] = slider
            submit_button = QPushButton("Submit")
            submit_button.setStyleSheet("background-color: #28a745; color: white; padding: 10px; border-radius: 5px;")
            submit_button.clicked.connect(self.next_step)
            button_layout.addWidget(submit_button)
        else:
            for axis in ['X position', 'Y position', 'Z position','Angular X', 'Angular Y', 'Angular Z' ]:
              slider_layout, slider = self.create_slider(f"{axis}", -100, 100, 0)
              layout.addLayout(slider_layout)
              self.sliders[axis] = slider
            next_button = QPushButton("Next")
            next_button.setStyleSheet("background-color: #28a745; color: white; padding: 10px; border-radius: 5px;")
            next_button.clicked.connect(self.next_step)
            button_layout.addWidget(next_button)

        home_button = QPushButton("Home")
        home_button.setStyleSheet("background-color: #6c757d; color: white; padding: 10px; border-radius: 5px;")
        home_button.clicked.connect(lambda: self.stacked_widget.setCurrentIndex(0))
        button_layout.addWidget(home_button)

        layout.addLayout(button_layout)
        self.setLayout(layout)

    def create_slider(self, label_text, min_value, max_value, initial_value):
        layout = QVBoxLayout()
        label = QLabel(f"{label_text}: {initial_value}")
#        label.setStyleSheet("font-size: 16px; color: #333;")
        layout.addWidget(label)

        slider = QSlider(Qt.Horizontal)
        slider.setRange(min_value, max_value)
        slider.setValue(initial_value)
        slider.setTickInterval(10)
        slider.setTickPosition(QSlider.TicksBelow)
#        slider.setStyleSheet("""
#            QSlider::handle:horizontal {
#                background-color: #28a745;
#                border: 1px solid #1e7e34;
#                width: 15px;
#                margin: -5px 0;
#            }
#        """)
#        slider.valueChanged.connect(lambda value: label.setText(f"{label_text}: {value}"))'
        slider.valueChanged.connect( lambda value: self.update_label(label, value))

        layout.addWidget(slider)

        return layout, slider
    def update_label(self, label, value):
        # Update the label with the current slider value (scaled back down)
        label.setText(f"Value: {value / 100.0:.2f}")

    def next_step(self):
        pose = {axis: slider.value() for axis, slider in self.sliders.items()}
        self.data_storage[self.part_name] = pose
        if self.is_final_step:
            self.stacked_widget.ros_publisher.publish_pose(
                self.stacked_widget.pose_data.get("Head", {}),
                self.stacked_widget.pose_data.get("Arm", {}),
                self.stacked_widget.pose_data.get("Gripper", {})
            )
            self.stacked_widget.setCurrentIndex(0)  # Return to Main Menu
        else:
            self.on_next()


class PoseControlWorkflow(QStackedWidget):
    def __init__(self, ros_publisher):
        super().__init__()
        self.ros_publisher = ros_publisher
        self.pose_data = {}

        self.init_ui()

    def init_ui(self):
        self.addWidget(PoseStep("Set Head Pose", self, lambda: self.setCurrentIndex(1), self.pose_data, "Head"))
        self.addWidget(PoseStep("Set Arm Pose", self, lambda: self.setCurrentIndex(2), self.pose_data, "Arm"))
        self.addWidget(PoseStep("Set Gripper Pose", self, None, self.pose_data, "Gripper", is_final_step=True))


class MainMenu(QWidget):
    def __init__(self, stacked_widget):
        super().__init__()
        self.stacked_widget = stacked_widget
        self.init_ui()

    def init_ui(self):
        layout = QVBoxLayout()

        title = QLabel("Robot Control System")
        title.setStyleSheet("font-size: 28px; font-weight: bold; color: #007bff;")
        title.setAlignment(Qt.AlignCenter)
        layout.addWidget(title)

        base_control_button = QPushButton("Base Control")
        base_control_button.setStyleSheet("background-color: #28a745; color: white; padding: 15px; border-radius: 10px;")
        base_control_button.clicked.connect(lambda: self.stacked_widget.setCurrentIndex(1))
        layout.addWidget(base_control_button)

        pose_control_button = QPushButton("Pose Control")
        pose_control_button.setStyleSheet("background-color: #007bff; color: white; padding: 15px; border-radius: 10px;")
        pose_control_button.clicked.connect(lambda: self.stacked_widget.setCurrentIndex(2))
        layout.addWidget(pose_control_button)

        self.setLayout(layout)


class RobotControlApp(QStackedWidget):
    def __init__(self):
        super().__init__()
        ros_publisher = ROSPublisher()

        self.main_menu = MainMenu(self)
        self.base_control = BaseControl(ros_publisher, self)
        self.pose_control_workflow = PoseControlWorkflow(ros_publisher)

        self.addWidget(self.main_menu)
        self.addWidget(self.base_control)
        self.addWidget(self.pose_control_workflow)


if __name__ == "__main__":
    rclpy.init()
    app = QApplication(sys.argv)
    window = RobotControlApp()
    window.show()
    sys.exit(app.exec_())
    rclpy.shutdown()
