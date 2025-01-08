# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_msgs:msg/FrankaState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'cartesian_collision'
# Member 'cartesian_contact'
# Member 'q'
# Member 'q_d'
# Member 'dq'
# Member 'dq_d'
# Member 'ddq_d'
# Member 'theta'
# Member 'dtheta'
# Member 'tau_j'
# Member 'dtau_j'
# Member 'tau_j_d'
# Member 'k_f_ext_hat_k'
# Member 'elbow'
# Member 'elbow_d'
# Member 'elbow_c'
# Member 'delbow_c'
# Member 'ddelbow_c'
# Member 'joint_collision'
# Member 'joint_contact'
# Member 'o_f_ext_hat_k'
# Member 'o_dp_ee_d'
# Member 'o_ddp_o'
# Member 'o_dp_ee_c'
# Member 'o_ddp_ee_c'
# Member 'tau_ext_hat_filtered'
# Member 'f_x_cee'
# Member 'i_ee'
# Member 'f_x_cload'
# Member 'i_load'
# Member 'f_x_ctotal'
# Member 'i_total'
# Member 'o_t_ee'
# Member 'o_t_ee_d'
# Member 'o_t_ee_c'
# Member 'f_t_ee'
# Member 'f_t_ne'
# Member 'ne_t_ee'
# Member 'ee_t_k'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FrankaState(type):
    """Metaclass of message 'FrankaState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROBOT_MODE_OTHER': 0,
        'ROBOT_MODE_IDLE': 1,
        'ROBOT_MODE_MOVE': 2,
        'ROBOT_MODE_GUIDING': 3,
        'ROBOT_MODE_REFLEX': 4,
        'ROBOT_MODE_USER_STOPPED': 5,
        'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franka_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_msgs.msg.FrankaState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__franka_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__franka_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__franka_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__franka_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__franka_state

            from franka_msgs.msg import Errors
            if Errors.__class__._TYPE_SUPPORT is None:
                Errors.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROBOT_MODE_OTHER': cls.__constants['ROBOT_MODE_OTHER'],
            'ROBOT_MODE_IDLE': cls.__constants['ROBOT_MODE_IDLE'],
            'ROBOT_MODE_MOVE': cls.__constants['ROBOT_MODE_MOVE'],
            'ROBOT_MODE_GUIDING': cls.__constants['ROBOT_MODE_GUIDING'],
            'ROBOT_MODE_REFLEX': cls.__constants['ROBOT_MODE_REFLEX'],
            'ROBOT_MODE_USER_STOPPED': cls.__constants['ROBOT_MODE_USER_STOPPED'],
            'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY': cls.__constants['ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY'],
        }

    @property
    def ROBOT_MODE_OTHER(self):
        """Message constant 'ROBOT_MODE_OTHER'."""
        return Metaclass_FrankaState.__constants['ROBOT_MODE_OTHER']

    @property
    def ROBOT_MODE_IDLE(self):
        """Message constant 'ROBOT_MODE_IDLE'."""
        return Metaclass_FrankaState.__constants['ROBOT_MODE_IDLE']

    @property
    def ROBOT_MODE_MOVE(self):
        """Message constant 'ROBOT_MODE_MOVE'."""
        return Metaclass_FrankaState.__constants['ROBOT_MODE_MOVE']

    @property
    def ROBOT_MODE_GUIDING(self):
        """Message constant 'ROBOT_MODE_GUIDING'."""
        return Metaclass_FrankaState.__constants['ROBOT_MODE_GUIDING']

    @property
    def ROBOT_MODE_REFLEX(self):
        """Message constant 'ROBOT_MODE_REFLEX'."""
        return Metaclass_FrankaState.__constants['ROBOT_MODE_REFLEX']

    @property
    def ROBOT_MODE_USER_STOPPED(self):
        """Message constant 'ROBOT_MODE_USER_STOPPED'."""
        return Metaclass_FrankaState.__constants['ROBOT_MODE_USER_STOPPED']

    @property
    def ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY(self):
        """Message constant 'ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY'."""
        return Metaclass_FrankaState.__constants['ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY']


class FrankaState(metaclass=Metaclass_FrankaState):
    """
    Message class 'FrankaState'.

    Constants:
      ROBOT_MODE_OTHER
      ROBOT_MODE_IDLE
      ROBOT_MODE_MOVE
      ROBOT_MODE_GUIDING
      ROBOT_MODE_REFLEX
      ROBOT_MODE_USER_STOPPED
      ROBOT_MODE_AUTOMATIC_ERROR_RECOVERY
    """

    __slots__ = [
        '_header',
        '_cartesian_collision',
        '_cartesian_contact',
        '_q',
        '_q_d',
        '_dq',
        '_dq_d',
        '_ddq_d',
        '_theta',
        '_dtheta',
        '_tau_j',
        '_dtau_j',
        '_tau_j_d',
        '_k_f_ext_hat_k',
        '_elbow',
        '_elbow_d',
        '_elbow_c',
        '_delbow_c',
        '_ddelbow_c',
        '_joint_collision',
        '_joint_contact',
        '_o_f_ext_hat_k',
        '_o_dp_ee_d',
        '_o_ddp_o',
        '_o_dp_ee_c',
        '_o_ddp_ee_c',
        '_tau_ext_hat_filtered',
        '_m_ee',
        '_f_x_cee',
        '_i_ee',
        '_m_load',
        '_f_x_cload',
        '_i_load',
        '_m_total',
        '_f_x_ctotal',
        '_i_total',
        '_o_t_ee',
        '_o_t_ee_d',
        '_o_t_ee_c',
        '_f_t_ee',
        '_f_t_ne',
        '_ne_t_ee',
        '_ee_t_k',
        '_time',
        '_control_command_success_rate',
        '_robot_mode',
        '_current_errors',
        '_last_motion_errors',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cartesian_collision': 'double[6]',
        'cartesian_contact': 'double[6]',
        'q': 'double[7]',
        'q_d': 'double[7]',
        'dq': 'double[7]',
        'dq_d': 'double[7]',
        'ddq_d': 'double[7]',
        'theta': 'double[7]',
        'dtheta': 'double[7]',
        'tau_j': 'double[7]',
        'dtau_j': 'double[7]',
        'tau_j_d': 'double[7]',
        'k_f_ext_hat_k': 'double[6]',
        'elbow': 'double[2]',
        'elbow_d': 'double[2]',
        'elbow_c': 'double[2]',
        'delbow_c': 'double[2]',
        'ddelbow_c': 'double[2]',
        'joint_collision': 'double[7]',
        'joint_contact': 'double[7]',
        'o_f_ext_hat_k': 'double[6]',
        'o_dp_ee_d': 'double[6]',
        'o_ddp_o': 'double[3]',
        'o_dp_ee_c': 'double[6]',
        'o_ddp_ee_c': 'double[6]',
        'tau_ext_hat_filtered': 'double[7]',
        'm_ee': 'double',
        'f_x_cee': 'double[3]',
        'i_ee': 'double[9]',
        'm_load': 'double',
        'f_x_cload': 'double[3]',
        'i_load': 'double[9]',
        'm_total': 'double',
        'f_x_ctotal': 'double[3]',
        'i_total': 'double[9]',
        'o_t_ee': 'double[16]',
        'o_t_ee_d': 'double[16]',
        'o_t_ee_c': 'double[16]',
        'f_t_ee': 'double[16]',
        'f_t_ne': 'double[16]',
        'ne_t_ee': 'double[16]',
        'ee_t_k': 'double[16]',
        'time': 'double',
        'control_command_success_rate': 'double',
        'robot_mode': 'uint8',
        'current_errors': 'franka_msgs/Errors',
        'last_motion_errors': 'franka_msgs/Errors',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_msgs', 'msg'], 'Errors'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['franka_msgs', 'msg'], 'Errors'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        if 'cartesian_collision' not in kwargs:
            self.cartesian_collision = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.cartesian_collision = numpy.array(kwargs.get('cartesian_collision'), dtype=numpy.float64)
            assert self.cartesian_collision.shape == (6, )
        if 'cartesian_contact' not in kwargs:
            self.cartesian_contact = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.cartesian_contact = numpy.array(kwargs.get('cartesian_contact'), dtype=numpy.float64)
            assert self.cartesian_contact.shape == (6, )
        if 'q' not in kwargs:
            self.q = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.q = numpy.array(kwargs.get('q'), dtype=numpy.float64)
            assert self.q.shape == (7, )
        if 'q_d' not in kwargs:
            self.q_d = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.q_d = numpy.array(kwargs.get('q_d'), dtype=numpy.float64)
            assert self.q_d.shape == (7, )
        if 'dq' not in kwargs:
            self.dq = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.dq = numpy.array(kwargs.get('dq'), dtype=numpy.float64)
            assert self.dq.shape == (7, )
        if 'dq_d' not in kwargs:
            self.dq_d = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.dq_d = numpy.array(kwargs.get('dq_d'), dtype=numpy.float64)
            assert self.dq_d.shape == (7, )
        if 'ddq_d' not in kwargs:
            self.ddq_d = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.ddq_d = numpy.array(kwargs.get('ddq_d'), dtype=numpy.float64)
            assert self.ddq_d.shape == (7, )
        if 'theta' not in kwargs:
            self.theta = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.theta = numpy.array(kwargs.get('theta'), dtype=numpy.float64)
            assert self.theta.shape == (7, )
        if 'dtheta' not in kwargs:
            self.dtheta = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.dtheta = numpy.array(kwargs.get('dtheta'), dtype=numpy.float64)
            assert self.dtheta.shape == (7, )
        if 'tau_j' not in kwargs:
            self.tau_j = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.tau_j = numpy.array(kwargs.get('tau_j'), dtype=numpy.float64)
            assert self.tau_j.shape == (7, )
        if 'dtau_j' not in kwargs:
            self.dtau_j = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.dtau_j = numpy.array(kwargs.get('dtau_j'), dtype=numpy.float64)
            assert self.dtau_j.shape == (7, )
        if 'tau_j_d' not in kwargs:
            self.tau_j_d = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.tau_j_d = numpy.array(kwargs.get('tau_j_d'), dtype=numpy.float64)
            assert self.tau_j_d.shape == (7, )
        if 'k_f_ext_hat_k' not in kwargs:
            self.k_f_ext_hat_k = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.k_f_ext_hat_k = numpy.array(kwargs.get('k_f_ext_hat_k'), dtype=numpy.float64)
            assert self.k_f_ext_hat_k.shape == (6, )
        if 'elbow' not in kwargs:
            self.elbow = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.elbow = numpy.array(kwargs.get('elbow'), dtype=numpy.float64)
            assert self.elbow.shape == (2, )
        if 'elbow_d' not in kwargs:
            self.elbow_d = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.elbow_d = numpy.array(kwargs.get('elbow_d'), dtype=numpy.float64)
            assert self.elbow_d.shape == (2, )
        if 'elbow_c' not in kwargs:
            self.elbow_c = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.elbow_c = numpy.array(kwargs.get('elbow_c'), dtype=numpy.float64)
            assert self.elbow_c.shape == (2, )
        if 'delbow_c' not in kwargs:
            self.delbow_c = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.delbow_c = numpy.array(kwargs.get('delbow_c'), dtype=numpy.float64)
            assert self.delbow_c.shape == (2, )
        if 'ddelbow_c' not in kwargs:
            self.ddelbow_c = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.ddelbow_c = numpy.array(kwargs.get('ddelbow_c'), dtype=numpy.float64)
            assert self.ddelbow_c.shape == (2, )
        if 'joint_collision' not in kwargs:
            self.joint_collision = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_collision = numpy.array(kwargs.get('joint_collision'), dtype=numpy.float64)
            assert self.joint_collision.shape == (7, )
        if 'joint_contact' not in kwargs:
            self.joint_contact = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.joint_contact = numpy.array(kwargs.get('joint_contact'), dtype=numpy.float64)
            assert self.joint_contact.shape == (7, )
        if 'o_f_ext_hat_k' not in kwargs:
            self.o_f_ext_hat_k = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.o_f_ext_hat_k = numpy.array(kwargs.get('o_f_ext_hat_k'), dtype=numpy.float64)
            assert self.o_f_ext_hat_k.shape == (6, )
        if 'o_dp_ee_d' not in kwargs:
            self.o_dp_ee_d = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.o_dp_ee_d = numpy.array(kwargs.get('o_dp_ee_d'), dtype=numpy.float64)
            assert self.o_dp_ee_d.shape == (6, )
        if 'o_ddp_o' not in kwargs:
            self.o_ddp_o = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.o_ddp_o = numpy.array(kwargs.get('o_ddp_o'), dtype=numpy.float64)
            assert self.o_ddp_o.shape == (3, )
        if 'o_dp_ee_c' not in kwargs:
            self.o_dp_ee_c = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.o_dp_ee_c = numpy.array(kwargs.get('o_dp_ee_c'), dtype=numpy.float64)
            assert self.o_dp_ee_c.shape == (6, )
        if 'o_ddp_ee_c' not in kwargs:
            self.o_ddp_ee_c = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.o_ddp_ee_c = numpy.array(kwargs.get('o_ddp_ee_c'), dtype=numpy.float64)
            assert self.o_ddp_ee_c.shape == (6, )
        if 'tau_ext_hat_filtered' not in kwargs:
            self.tau_ext_hat_filtered = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.tau_ext_hat_filtered = numpy.array(kwargs.get('tau_ext_hat_filtered'), dtype=numpy.float64)
            assert self.tau_ext_hat_filtered.shape == (7, )
        self.m_ee = kwargs.get('m_ee', float())
        if 'f_x_cee' not in kwargs:
            self.f_x_cee = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.f_x_cee = numpy.array(kwargs.get('f_x_cee'), dtype=numpy.float64)
            assert self.f_x_cee.shape == (3, )
        if 'i_ee' not in kwargs:
            self.i_ee = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.i_ee = numpy.array(kwargs.get('i_ee'), dtype=numpy.float64)
            assert self.i_ee.shape == (9, )
        self.m_load = kwargs.get('m_load', float())
        if 'f_x_cload' not in kwargs:
            self.f_x_cload = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.f_x_cload = numpy.array(kwargs.get('f_x_cload'), dtype=numpy.float64)
            assert self.f_x_cload.shape == (3, )
        if 'i_load' not in kwargs:
            self.i_load = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.i_load = numpy.array(kwargs.get('i_load'), dtype=numpy.float64)
            assert self.i_load.shape == (9, )
        self.m_total = kwargs.get('m_total', float())
        if 'f_x_ctotal' not in kwargs:
            self.f_x_ctotal = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.f_x_ctotal = numpy.array(kwargs.get('f_x_ctotal'), dtype=numpy.float64)
            assert self.f_x_ctotal.shape == (3, )
        if 'i_total' not in kwargs:
            self.i_total = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.i_total = numpy.array(kwargs.get('i_total'), dtype=numpy.float64)
            assert self.i_total.shape == (9, )
        if 'o_t_ee' not in kwargs:
            self.o_t_ee = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.o_t_ee = numpy.array(kwargs.get('o_t_ee'), dtype=numpy.float64)
            assert self.o_t_ee.shape == (16, )
        if 'o_t_ee_d' not in kwargs:
            self.o_t_ee_d = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.o_t_ee_d = numpy.array(kwargs.get('o_t_ee_d'), dtype=numpy.float64)
            assert self.o_t_ee_d.shape == (16, )
        if 'o_t_ee_c' not in kwargs:
            self.o_t_ee_c = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.o_t_ee_c = numpy.array(kwargs.get('o_t_ee_c'), dtype=numpy.float64)
            assert self.o_t_ee_c.shape == (16, )
        if 'f_t_ee' not in kwargs:
            self.f_t_ee = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.f_t_ee = numpy.array(kwargs.get('f_t_ee'), dtype=numpy.float64)
            assert self.f_t_ee.shape == (16, )
        if 'f_t_ne' not in kwargs:
            self.f_t_ne = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.f_t_ne = numpy.array(kwargs.get('f_t_ne'), dtype=numpy.float64)
            assert self.f_t_ne.shape == (16, )
        if 'ne_t_ee' not in kwargs:
            self.ne_t_ee = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.ne_t_ee = numpy.array(kwargs.get('ne_t_ee'), dtype=numpy.float64)
            assert self.ne_t_ee.shape == (16, )
        if 'ee_t_k' not in kwargs:
            self.ee_t_k = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.ee_t_k = numpy.array(kwargs.get('ee_t_k'), dtype=numpy.float64)
            assert self.ee_t_k.shape == (16, )
        self.time = kwargs.get('time', float())
        self.control_command_success_rate = kwargs.get('control_command_success_rate', float())
        self.robot_mode = kwargs.get('robot_mode', int())
        from franka_msgs.msg import Errors
        self.current_errors = kwargs.get('current_errors', Errors())
        from franka_msgs.msg import Errors
        self.last_motion_errors = kwargs.get('last_motion_errors', Errors())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if all(self.cartesian_collision != other.cartesian_collision):
            return False
        if all(self.cartesian_contact != other.cartesian_contact):
            return False
        if all(self.q != other.q):
            return False
        if all(self.q_d != other.q_d):
            return False
        if all(self.dq != other.dq):
            return False
        if all(self.dq_d != other.dq_d):
            return False
        if all(self.ddq_d != other.ddq_d):
            return False
        if all(self.theta != other.theta):
            return False
        if all(self.dtheta != other.dtheta):
            return False
        if all(self.tau_j != other.tau_j):
            return False
        if all(self.dtau_j != other.dtau_j):
            return False
        if all(self.tau_j_d != other.tau_j_d):
            return False
        if all(self.k_f_ext_hat_k != other.k_f_ext_hat_k):
            return False
        if all(self.elbow != other.elbow):
            return False
        if all(self.elbow_d != other.elbow_d):
            return False
        if all(self.elbow_c != other.elbow_c):
            return False
        if all(self.delbow_c != other.delbow_c):
            return False
        if all(self.ddelbow_c != other.ddelbow_c):
            return False
        if all(self.joint_collision != other.joint_collision):
            return False
        if all(self.joint_contact != other.joint_contact):
            return False
        if all(self.o_f_ext_hat_k != other.o_f_ext_hat_k):
            return False
        if all(self.o_dp_ee_d != other.o_dp_ee_d):
            return False
        if all(self.o_ddp_o != other.o_ddp_o):
            return False
        if all(self.o_dp_ee_c != other.o_dp_ee_c):
            return False
        if all(self.o_ddp_ee_c != other.o_ddp_ee_c):
            return False
        if all(self.tau_ext_hat_filtered != other.tau_ext_hat_filtered):
            return False
        if self.m_ee != other.m_ee:
            return False
        if all(self.f_x_cee != other.f_x_cee):
            return False
        if all(self.i_ee != other.i_ee):
            return False
        if self.m_load != other.m_load:
            return False
        if all(self.f_x_cload != other.f_x_cload):
            return False
        if all(self.i_load != other.i_load):
            return False
        if self.m_total != other.m_total:
            return False
        if all(self.f_x_ctotal != other.f_x_ctotal):
            return False
        if all(self.i_total != other.i_total):
            return False
        if all(self.o_t_ee != other.o_t_ee):
            return False
        if all(self.o_t_ee_d != other.o_t_ee_d):
            return False
        if all(self.o_t_ee_c != other.o_t_ee_c):
            return False
        if all(self.f_t_ee != other.f_t_ee):
            return False
        if all(self.f_t_ne != other.f_t_ne):
            return False
        if all(self.ne_t_ee != other.ne_t_ee):
            return False
        if all(self.ee_t_k != other.ee_t_k):
            return False
        if self.time != other.time:
            return False
        if self.control_command_success_rate != other.control_command_success_rate:
            return False
        if self.robot_mode != other.robot_mode:
            return False
        if self.current_errors != other.current_errors:
            return False
        if self.last_motion_errors != other.last_motion_errors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def cartesian_collision(self):
        """Message field 'cartesian_collision'."""
        return self._cartesian_collision

    @cartesian_collision.setter
    def cartesian_collision(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cartesian_collision' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'cartesian_collision' numpy.ndarray() must have a size of 6"
            self._cartesian_collision = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cartesian_collision' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cartesian_collision = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def cartesian_contact(self):
        """Message field 'cartesian_contact'."""
        return self._cartesian_contact

    @cartesian_contact.setter
    def cartesian_contact(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'cartesian_contact' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'cartesian_contact' numpy.ndarray() must have a size of 6"
            self._cartesian_contact = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'cartesian_contact' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._cartesian_contact = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'q' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'q' numpy.ndarray() must have a size of 7"
            self._q = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'q' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._q = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def q_d(self):
        """Message field 'q_d'."""
        return self._q_d

    @q_d.setter
    def q_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'q_d' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'q_d' numpy.ndarray() must have a size of 7"
            self._q_d = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'q_d' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._q_d = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def dq(self):
        """Message field 'dq'."""
        return self._dq

    @dq.setter
    def dq(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'dq' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'dq' numpy.ndarray() must have a size of 7"
            self._dq = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dq' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dq = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def dq_d(self):
        """Message field 'dq_d'."""
        return self._dq_d

    @dq_d.setter
    def dq_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'dq_d' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'dq_d' numpy.ndarray() must have a size of 7"
            self._dq_d = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dq_d' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dq_d = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ddq_d(self):
        """Message field 'ddq_d'."""
        return self._ddq_d

    @ddq_d.setter
    def ddq_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ddq_d' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'ddq_d' numpy.ndarray() must have a size of 7"
            self._ddq_d = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ddq_d' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ddq_d = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'theta' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'theta' numpy.ndarray() must have a size of 7"
            self._theta = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'theta' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._theta = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def dtheta(self):
        """Message field 'dtheta'."""
        return self._dtheta

    @dtheta.setter
    def dtheta(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'dtheta' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'dtheta' numpy.ndarray() must have a size of 7"
            self._dtheta = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dtheta' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dtheta = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def tau_j(self):
        """Message field 'tau_j'."""
        return self._tau_j

    @tau_j.setter
    def tau_j(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'tau_j' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'tau_j' numpy.ndarray() must have a size of 7"
            self._tau_j = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'tau_j' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._tau_j = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def dtau_j(self):
        """Message field 'dtau_j'."""
        return self._dtau_j

    @dtau_j.setter
    def dtau_j(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'dtau_j' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'dtau_j' numpy.ndarray() must have a size of 7"
            self._dtau_j = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dtau_j' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dtau_j = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def tau_j_d(self):
        """Message field 'tau_j_d'."""
        return self._tau_j_d

    @tau_j_d.setter
    def tau_j_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'tau_j_d' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'tau_j_d' numpy.ndarray() must have a size of 7"
            self._tau_j_d = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'tau_j_d' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._tau_j_d = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def k_f_ext_hat_k(self):
        """Message field 'k_f_ext_hat_k'."""
        return self._k_f_ext_hat_k

    @k_f_ext_hat_k.setter
    def k_f_ext_hat_k(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'k_f_ext_hat_k' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'k_f_ext_hat_k' numpy.ndarray() must have a size of 6"
            self._k_f_ext_hat_k = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'k_f_ext_hat_k' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._k_f_ext_hat_k = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def elbow(self):
        """Message field 'elbow'."""
        return self._elbow

    @elbow.setter
    def elbow(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'elbow' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'elbow' numpy.ndarray() must have a size of 2"
            self._elbow = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'elbow' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._elbow = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def elbow_d(self):
        """Message field 'elbow_d'."""
        return self._elbow_d

    @elbow_d.setter
    def elbow_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'elbow_d' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'elbow_d' numpy.ndarray() must have a size of 2"
            self._elbow_d = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'elbow_d' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._elbow_d = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def elbow_c(self):
        """Message field 'elbow_c'."""
        return self._elbow_c

    @elbow_c.setter
    def elbow_c(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'elbow_c' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'elbow_c' numpy.ndarray() must have a size of 2"
            self._elbow_c = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'elbow_c' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._elbow_c = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def delbow_c(self):
        """Message field 'delbow_c'."""
        return self._delbow_c

    @delbow_c.setter
    def delbow_c(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'delbow_c' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'delbow_c' numpy.ndarray() must have a size of 2"
            self._delbow_c = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'delbow_c' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._delbow_c = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ddelbow_c(self):
        """Message field 'ddelbow_c'."""
        return self._ddelbow_c

    @ddelbow_c.setter
    def ddelbow_c(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ddelbow_c' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'ddelbow_c' numpy.ndarray() must have a size of 2"
            self._ddelbow_c = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ddelbow_c' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ddelbow_c = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_collision(self):
        """Message field 'joint_collision'."""
        return self._joint_collision

    @joint_collision.setter
    def joint_collision(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_collision' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_collision' numpy.ndarray() must have a size of 7"
            self._joint_collision = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_collision' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_collision = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def joint_contact(self):
        """Message field 'joint_contact'."""
        return self._joint_contact

    @joint_contact.setter
    def joint_contact(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'joint_contact' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'joint_contact' numpy.ndarray() must have a size of 7"
            self._joint_contact = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_contact' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_contact = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def o_f_ext_hat_k(self):
        """Message field 'o_f_ext_hat_k'."""
        return self._o_f_ext_hat_k

    @o_f_ext_hat_k.setter
    def o_f_ext_hat_k(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'o_f_ext_hat_k' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'o_f_ext_hat_k' numpy.ndarray() must have a size of 6"
            self._o_f_ext_hat_k = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'o_f_ext_hat_k' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._o_f_ext_hat_k = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def o_dp_ee_d(self):
        """Message field 'o_dp_ee_d'."""
        return self._o_dp_ee_d

    @o_dp_ee_d.setter
    def o_dp_ee_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'o_dp_ee_d' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'o_dp_ee_d' numpy.ndarray() must have a size of 6"
            self._o_dp_ee_d = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'o_dp_ee_d' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._o_dp_ee_d = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def o_ddp_o(self):
        """Message field 'o_ddp_o'."""
        return self._o_ddp_o

    @o_ddp_o.setter
    def o_ddp_o(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'o_ddp_o' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'o_ddp_o' numpy.ndarray() must have a size of 3"
            self._o_ddp_o = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'o_ddp_o' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._o_ddp_o = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def o_dp_ee_c(self):
        """Message field 'o_dp_ee_c'."""
        return self._o_dp_ee_c

    @o_dp_ee_c.setter
    def o_dp_ee_c(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'o_dp_ee_c' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'o_dp_ee_c' numpy.ndarray() must have a size of 6"
            self._o_dp_ee_c = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'o_dp_ee_c' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._o_dp_ee_c = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def o_ddp_ee_c(self):
        """Message field 'o_ddp_ee_c'."""
        return self._o_ddp_ee_c

    @o_ddp_ee_c.setter
    def o_ddp_ee_c(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'o_ddp_ee_c' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'o_ddp_ee_c' numpy.ndarray() must have a size of 6"
            self._o_ddp_ee_c = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'o_ddp_ee_c' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._o_ddp_ee_c = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def tau_ext_hat_filtered(self):
        """Message field 'tau_ext_hat_filtered'."""
        return self._tau_ext_hat_filtered

    @tau_ext_hat_filtered.setter
    def tau_ext_hat_filtered(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'tau_ext_hat_filtered' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'tau_ext_hat_filtered' numpy.ndarray() must have a size of 7"
            self._tau_ext_hat_filtered = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'tau_ext_hat_filtered' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._tau_ext_hat_filtered = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def m_ee(self):
        """Message field 'm_ee'."""
        return self._m_ee

    @m_ee.setter
    def m_ee(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_ee' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_ee' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_ee = value

    @builtins.property
    def f_x_cee(self):
        """Message field 'f_x_cee'."""
        return self._f_x_cee

    @f_x_cee.setter
    def f_x_cee(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'f_x_cee' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'f_x_cee' numpy.ndarray() must have a size of 3"
            self._f_x_cee = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'f_x_cee' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._f_x_cee = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def i_ee(self):
        """Message field 'i_ee'."""
        return self._i_ee

    @i_ee.setter
    def i_ee(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'i_ee' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'i_ee' numpy.ndarray() must have a size of 9"
            self._i_ee = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'i_ee' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._i_ee = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def m_load(self):
        """Message field 'm_load'."""
        return self._m_load

    @m_load.setter
    def m_load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_load' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_load' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_load = value

    @builtins.property
    def f_x_cload(self):
        """Message field 'f_x_cload'."""
        return self._f_x_cload

    @f_x_cload.setter
    def f_x_cload(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'f_x_cload' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'f_x_cload' numpy.ndarray() must have a size of 3"
            self._f_x_cload = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'f_x_cload' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._f_x_cload = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def i_load(self):
        """Message field 'i_load'."""
        return self._i_load

    @i_load.setter
    def i_load(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'i_load' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'i_load' numpy.ndarray() must have a size of 9"
            self._i_load = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'i_load' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._i_load = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def m_total(self):
        """Message field 'm_total'."""
        return self._m_total

    @m_total.setter
    def m_total(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm_total' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm_total' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m_total = value

    @builtins.property
    def f_x_ctotal(self):
        """Message field 'f_x_ctotal'."""
        return self._f_x_ctotal

    @f_x_ctotal.setter
    def f_x_ctotal(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'f_x_ctotal' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'f_x_ctotal' numpy.ndarray() must have a size of 3"
            self._f_x_ctotal = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'f_x_ctotal' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._f_x_ctotal = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def i_total(self):
        """Message field 'i_total'."""
        return self._i_total

    @i_total.setter
    def i_total(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'i_total' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'i_total' numpy.ndarray() must have a size of 9"
            self._i_total = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'i_total' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._i_total = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def o_t_ee(self):
        """Message field 'o_t_ee'."""
        return self._o_t_ee

    @o_t_ee.setter
    def o_t_ee(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'o_t_ee' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'o_t_ee' numpy.ndarray() must have a size of 16"
            self._o_t_ee = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'o_t_ee' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._o_t_ee = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def o_t_ee_d(self):
        """Message field 'o_t_ee_d'."""
        return self._o_t_ee_d

    @o_t_ee_d.setter
    def o_t_ee_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'o_t_ee_d' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'o_t_ee_d' numpy.ndarray() must have a size of 16"
            self._o_t_ee_d = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'o_t_ee_d' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._o_t_ee_d = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def o_t_ee_c(self):
        """Message field 'o_t_ee_c'."""
        return self._o_t_ee_c

    @o_t_ee_c.setter
    def o_t_ee_c(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'o_t_ee_c' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'o_t_ee_c' numpy.ndarray() must have a size of 16"
            self._o_t_ee_c = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'o_t_ee_c' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._o_t_ee_c = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def f_t_ee(self):
        """Message field 'f_t_ee'."""
        return self._f_t_ee

    @f_t_ee.setter
    def f_t_ee(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'f_t_ee' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'f_t_ee' numpy.ndarray() must have a size of 16"
            self._f_t_ee = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'f_t_ee' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._f_t_ee = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def f_t_ne(self):
        """Message field 'f_t_ne'."""
        return self._f_t_ne

    @f_t_ne.setter
    def f_t_ne(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'f_t_ne' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'f_t_ne' numpy.ndarray() must have a size of 16"
            self._f_t_ne = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'f_t_ne' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._f_t_ne = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ne_t_ee(self):
        """Message field 'ne_t_ee'."""
        return self._ne_t_ee

    @ne_t_ee.setter
    def ne_t_ee(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ne_t_ee' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'ne_t_ee' numpy.ndarray() must have a size of 16"
            self._ne_t_ee = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ne_t_ee' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ne_t_ee = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def ee_t_k(self):
        """Message field 'ee_t_k'."""
        return self._ee_t_k

    @ee_t_k.setter
    def ee_t_k(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'ee_t_k' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'ee_t_k' numpy.ndarray() must have a size of 16"
            self._ee_t_k = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ee_t_k' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ee_t_k = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def control_command_success_rate(self):
        """Message field 'control_command_success_rate'."""
        return self._control_command_success_rate

    @control_command_success_rate.setter
    def control_command_success_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_command_success_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'control_command_success_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._control_command_success_rate = value

    @builtins.property
    def robot_mode(self):
        """Message field 'robot_mode'."""
        return self._robot_mode

    @robot_mode.setter
    def robot_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_mode' field must be an unsigned integer in [0, 255]"
        self._robot_mode = value

    @builtins.property
    def current_errors(self):
        """Message field 'current_errors'."""
        return self._current_errors

    @current_errors.setter
    def current_errors(self, value):
        if __debug__:
            from franka_msgs.msg import Errors
            assert \
                isinstance(value, Errors), \
                "The 'current_errors' field must be a sub message of type 'Errors'"
        self._current_errors = value

    @builtins.property
    def last_motion_errors(self):
        """Message field 'last_motion_errors'."""
        return self._last_motion_errors

    @last_motion_errors.setter
    def last_motion_errors(self, value):
        if __debug__:
            from franka_msgs.msg import Errors
            assert \
                isinstance(value, Errors), \
                "The 'last_motion_errors' field must be a sub message of type 'Errors'"
        self._last_motion_errors = value
