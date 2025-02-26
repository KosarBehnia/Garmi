// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multi_mode_control_msgs:msg/DualCartesianImpedanceGoal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multi_mode_control_msgs/msg/detail/dual_cartesian_impedance_goal__rosidl_typesupport_introspection_c.h"
#include "multi_mode_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multi_mode_control_msgs/msg/detail/dual_cartesian_impedance_goal__functions.h"
#include "multi_mode_control_msgs/msg/detail/dual_cartesian_impedance_goal__struct.h"


// Include directives for member types
// Member `l_pose`
// Member `r_pose`
#include "geometry_msgs/msg/pose.h"
// Member `l_pose`
// Member `r_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__init(message_memory);
}

void multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_fini_function(void * message_memory)
{
  multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__fini(message_memory);
}

size_t multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__size_function__DualCartesianImpedanceGoal__l_q_n(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_const_function__DualCartesianImpedanceGoal__l_q_n(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_function__DualCartesianImpedanceGoal__l_q_n(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__fetch_function__DualCartesianImpedanceGoal__l_q_n(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_const_function__DualCartesianImpedanceGoal__l_q_n(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__assign_function__DualCartesianImpedanceGoal__l_q_n(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_function__DualCartesianImpedanceGoal__l_q_n(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__size_function__DualCartesianImpedanceGoal__r_q_n(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_const_function__DualCartesianImpedanceGoal__r_q_n(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_function__DualCartesianImpedanceGoal__r_q_n(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__fetch_function__DualCartesianImpedanceGoal__r_q_n(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_const_function__DualCartesianImpedanceGoal__r_q_n(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__assign_function__DualCartesianImpedanceGoal__r_q_n(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_function__DualCartesianImpedanceGoal__r_q_n(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_member_array[4] = {
  {
    "l_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_mode_control_msgs__msg__DualCartesianImpedanceGoal, l_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_mode_control_msgs__msg__DualCartesianImpedanceGoal, r_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l_q_n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(multi_mode_control_msgs__msg__DualCartesianImpedanceGoal, l_q_n),  // bytes offset in struct
    NULL,  // default value
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__size_function__DualCartesianImpedanceGoal__l_q_n,  // size() function pointer
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_const_function__DualCartesianImpedanceGoal__l_q_n,  // get_const(index) function pointer
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_function__DualCartesianImpedanceGoal__l_q_n,  // get(index) function pointer
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__fetch_function__DualCartesianImpedanceGoal__l_q_n,  // fetch(index, &value) function pointer
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__assign_function__DualCartesianImpedanceGoal__l_q_n,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r_q_n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(multi_mode_control_msgs__msg__DualCartesianImpedanceGoal, r_q_n),  // bytes offset in struct
    NULL,  // default value
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__size_function__DualCartesianImpedanceGoal__r_q_n,  // size() function pointer
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_const_function__DualCartesianImpedanceGoal__r_q_n,  // get_const(index) function pointer
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__get_function__DualCartesianImpedanceGoal__r_q_n,  // get(index) function pointer
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__fetch_function__DualCartesianImpedanceGoal__r_q_n,  // fetch(index, &value) function pointer
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__assign_function__DualCartesianImpedanceGoal__r_q_n,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_members = {
  "multi_mode_control_msgs__msg",  // message namespace
  "DualCartesianImpedanceGoal",  // message name
  4,  // number of fields
  sizeof(multi_mode_control_msgs__msg__DualCartesianImpedanceGoal),
  multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_member_array,  // message members
  multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_type_support_handle = {
  0,
  &multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_mode_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_mode_control_msgs, msg, DualCartesianImpedanceGoal)() {
  multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_type_support_handle.typesupport_identifier) {
    multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_mode_control_msgs__msg__DualCartesianImpedanceGoal__rosidl_typesupport_introspection_c__DualCartesianImpedanceGoal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
