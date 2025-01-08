// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panda_motion_generator_msgs:action/CartesianViaMotion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
#include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__functions.h"
#include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__struct.h"


// Include directives for member types
// Member `via_poses`
#include "geometry_msgs/msg/pose.h"
// Member `via_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_motion_generator_msgs__action__CartesianViaMotion_Goal__init(message_memory);
}

void panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_fini_function(void * message_memory)
{
  panda_motion_generator_msgs__action__CartesianViaMotion_Goal__fini(message_memory);
}

size_t panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__size_function__CartesianViaMotion_Goal__via_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__get_const_function__CartesianViaMotion_Goal__via_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__get_function__CartesianViaMotion_Goal__via_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__fetch_function__CartesianViaMotion_Goal__via_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__get_const_function__CartesianViaMotion_Goal__via_poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__assign_function__CartesianViaMotion_Goal__via_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__get_function__CartesianViaMotion_Goal__via_poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__resize_function__CartesianViaMotion_Goal__via_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_member_array[2] = {
  {
    "via_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_Goal, via_poses),  // bytes offset in struct
    NULL,  // default value
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__size_function__CartesianViaMotion_Goal__via_poses,  // size() function pointer
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__get_const_function__CartesianViaMotion_Goal__via_poses,  // get_const(index) function pointer
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__get_function__CartesianViaMotion_Goal__via_poses,  // get(index) function pointer
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__fetch_function__CartesianViaMotion_Goal__via_poses,  // fetch(index, &value) function pointer
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__assign_function__CartesianViaMotion_Goal__via_poses,  // assign(index, value) function pointer
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__resize_function__CartesianViaMotion_Goal__via_poses  // resize(index) function pointer
  },
  {
    "v_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_Goal, v_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_members = {
  "panda_motion_generator_msgs__action",  // message namespace
  "CartesianViaMotion_Goal",  // message name
  2,  // number of fields
  sizeof(panda_motion_generator_msgs__action__CartesianViaMotion_Goal),
  panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_member_array,  // message members
  panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_Goal)() {
  panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_motion_generator_msgs__action__CartesianViaMotion_Goal__rosidl_typesupport_introspection_c__CartesianViaMotion_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__functions.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__struct.h"


// Include directives for member types
// Member `result`
#include "panda_motion_generator_msgs/msg/simple_action_result.h"
// Member `result`
#include "panda_motion_generator_msgs/msg/detail/simple_action_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_motion_generator_msgs__action__CartesianViaMotion_Result__init(message_memory);
}

void panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_fini_function(void * message_memory)
{
  panda_motion_generator_msgs__action__CartesianViaMotion_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_members = {
  "panda_motion_generator_msgs__action",  // message namespace
  "CartesianViaMotion_Result",  // message name
  1,  // number of fields
  sizeof(panda_motion_generator_msgs__action__CartesianViaMotion_Result),
  panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_member_array,  // message members
  panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_Result)() {
  panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, msg, SimpleActionResult)();
  if (!panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_motion_generator_msgs__action__CartesianViaMotion_Result__rosidl_typesupport_introspection_c__CartesianViaMotion_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__functions.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__init(message_memory);
}

void panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_fini_function(void * message_memory)
{
  panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_message_member_array[2] = {
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_Feedback, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_to_completion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_Feedback, time_to_completion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_message_members = {
  "panda_motion_generator_msgs__action",  // message namespace
  "CartesianViaMotion_Feedback",  // message name
  2,  // number of fields
  sizeof(panda_motion_generator_msgs__action__CartesianViaMotion_Feedback),
  panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_message_member_array,  // message members
  panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_message_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_Feedback)() {
  if (!panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_message_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_motion_generator_msgs__action__CartesianViaMotion_Feedback__rosidl_typesupport_introspection_c__CartesianViaMotion_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__functions.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "panda_motion_generator_msgs/action/cartesian_via_motion.h"
// Member `goal`
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__init(message_memory);
}

void panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_fini_function(void * message_memory)
{
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_members = {
  "panda_motion_generator_msgs__action",  // message namespace
  "CartesianViaMotion_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request),
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_member_array,  // message members
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_SendGoal_Request)() {
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_Goal)();
  if (!panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__functions.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__init(message_memory);
}

void panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_fini_function(void * message_memory)
{
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_members = {
  "panda_motion_generator_msgs__action",  // message namespace
  "CartesianViaMotion_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response),
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_member_array,  // message members
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_SendGoal_Response)() {
  panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_motion_generator_msgs__action__CartesianViaMotion_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_service_members = {
  "panda_motion_generator_msgs__action",  // service namespace
  "CartesianViaMotion_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_service_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_SendGoal)() {
  if (!panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_service_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_SendGoal_Response)()->data;
  }

  return &panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__functions.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__init(message_memory);
}

void panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_fini_function(void * message_memory)
{
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_members = {
  "panda_motion_generator_msgs__action",  // message namespace
  "CartesianViaMotion_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request),
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_member_array,  // message members
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_GetResult_Request)() {
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Request__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__functions.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "panda_motion_generator_msgs/action/cartesian_via_motion.h"
// Member `result`
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__init(message_memory);
}

void panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_fini_function(void * message_memory)
{
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_members = {
  "panda_motion_generator_msgs__action",  // message namespace
  "CartesianViaMotion_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response),
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_member_array,  // message members
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_GetResult_Response)() {
  panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_Result)();
  if (!panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_motion_generator_msgs__action__CartesianViaMotion_GetResult_Response__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_service_members = {
  "panda_motion_generator_msgs__action",  // service namespace
  "CartesianViaMotion_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_service_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_GetResult)() {
  if (!panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_service_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_GetResult_Response)()->data;
  }

  return &panda_motion_generator_msgs__action__detail__cartesian_via_motion__rosidl_typesupport_introspection_c__CartesianViaMotion_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "panda_motion_generator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__functions.h"
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "panda_motion_generator_msgs/action/cartesian_via_motion.h"
// Member `feedback`
// already included above
// #include "panda_motion_generator_msgs/action/detail/cartesian_via_motion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__init(message_memory);
}

void panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_fini_function(void * message_memory)
{
  panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_members = {
  "panda_motion_generator_msgs__action",  // message namespace
  "CartesianViaMotion_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage),
  panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_member_array,  // message members
  panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_type_support_handle = {
  0,
  &panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_motion_generator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_FeedbackMessage)() {
  panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_motion_generator_msgs, action, CartesianViaMotion_Feedback)();
  if (!panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_motion_generator_msgs__action__CartesianViaMotion_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianViaMotion_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
