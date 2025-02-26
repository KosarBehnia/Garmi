// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:srv/SetMujocoPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/srv/detail/set_mujoco_poses__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/srv/detail/set_mujoco_poses__functions.h"
#include "franka_msgs/srv/detail/set_mujoco_poses__struct.h"


// Include directives for member types
// Member `objects`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `objects`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__srv__SetMujocoPoses_Request__init(message_memory);
}

void franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_fini_function(void * message_memory)
{
  franka_msgs__srv__SetMujocoPoses_Request__fini(message_memory);
}

size_t franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__size_function__SetMujocoPoses_Request__objects(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__get_const_function__SetMujocoPoses_Request__objects(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__get_function__SetMujocoPoses_Request__objects(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__fetch_function__SetMujocoPoses_Request__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__get_const_function__SetMujocoPoses_Request__objects(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__assign_function__SetMujocoPoses_Request__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__get_function__SetMujocoPoses_Request__objects(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__resize_function__SetMujocoPoses_Request__objects(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_member_array[1] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetMujocoPoses_Request, objects),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__size_function__SetMujocoPoses_Request__objects,  // size() function pointer
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__get_const_function__SetMujocoPoses_Request__objects,  // get_const(index) function pointer
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__get_function__SetMujocoPoses_Request__objects,  // get(index) function pointer
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__fetch_function__SetMujocoPoses_Request__objects,  // fetch(index, &value) function pointer
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__assign_function__SetMujocoPoses_Request__objects,  // assign(index, value) function pointer
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__resize_function__SetMujocoPoses_Request__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_members = {
  "franka_msgs__srv",  // message namespace
  "SetMujocoPoses_Request",  // message name
  1,  // number of fields
  sizeof(franka_msgs__srv__SetMujocoPoses_Request),
  franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_member_array,  // message members
  franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_type_support_handle = {
  0,
  &franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetMujocoPoses_Request)() {
  franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_type_support_handle.typesupport_identifier) {
    franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_msgs__srv__SetMujocoPoses_Request__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "franka_msgs/srv/detail/set_mujoco_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "franka_msgs/srv/detail/set_mujoco_poses__functions.h"
// already included above
// #include "franka_msgs/srv/detail/set_mujoco_poses__struct.h"


// Include directives for member types
// Member `valid`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__srv__SetMujocoPoses_Response__init(message_memory);
}

void franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_fini_function(void * message_memory)
{
  franka_msgs__srv__SetMujocoPoses_Response__fini(message_memory);
}

size_t franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__size_function__SetMujocoPoses_Response__valid(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__get_const_function__SetMujocoPoses_Response__valid(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__get_function__SetMujocoPoses_Response__valid(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__fetch_function__SetMujocoPoses_Response__valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__get_const_function__SetMujocoPoses_Response__valid(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__assign_function__SetMujocoPoses_Response__valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__get_function__SetMujocoPoses_Response__valid(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__resize_function__SetMujocoPoses_Response__valid(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_member_array[1] = {
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetMujocoPoses_Response, valid),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__size_function__SetMujocoPoses_Response__valid,  // size() function pointer
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__get_const_function__SetMujocoPoses_Response__valid,  // get_const(index) function pointer
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__get_function__SetMujocoPoses_Response__valid,  // get(index) function pointer
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__fetch_function__SetMujocoPoses_Response__valid,  // fetch(index, &value) function pointer
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__assign_function__SetMujocoPoses_Response__valid,  // assign(index, value) function pointer
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__resize_function__SetMujocoPoses_Response__valid  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_members = {
  "franka_msgs__srv",  // message namespace
  "SetMujocoPoses_Response",  // message name
  1,  // number of fields
  sizeof(franka_msgs__srv__SetMujocoPoses_Response),
  franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_member_array,  // message members
  franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_type_support_handle = {
  0,
  &franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetMujocoPoses_Response)() {
  if (!franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_type_support_handle.typesupport_identifier) {
    franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_msgs__srv__SetMujocoPoses_Response__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "franka_msgs/srv/detail/set_mujoco_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_service_members = {
  "franka_msgs__srv",  // service namespace
  "SetMujocoPoses",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_Request_message_type_support_handle,
  NULL  // response message
  // franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_Response_message_type_support_handle
};

static rosidl_service_type_support_t franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_service_type_support_handle = {
  0,
  &franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetMujocoPoses_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetMujocoPoses_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetMujocoPoses)() {
  if (!franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_service_type_support_handle.typesupport_identifier) {
    franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetMujocoPoses_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetMujocoPoses_Response)()->data;
  }

  return &franka_msgs__srv__detail__set_mujoco_poses__rosidl_typesupport_introspection_c__SetMujocoPoses_service_type_support_handle;
}
