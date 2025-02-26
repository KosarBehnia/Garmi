// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multi_mode_control_msgs:srv/SetWorldState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multi_mode_control_msgs/srv/detail/set_world_state__rosidl_typesupport_introspection_c.h"
#include "multi_mode_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multi_mode_control_msgs/srv/detail/set_world_state__functions.h"
#include "multi_mode_control_msgs/srv/detail/set_world_state__struct.h"


// Include directives for member types
// Member `items`
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_mode_control_msgs__srv__SetWorldState_Request__init(message_memory);
}

void multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_fini_function(void * message_memory)
{
  multi_mode_control_msgs__srv__SetWorldState_Request__fini(message_memory);
}

size_t multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__size_function__SetWorldState_Request__items(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_const_function__SetWorldState_Request__items(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_function__SetWorldState_Request__items(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__fetch_function__SetWorldState_Request__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_const_function__SetWorldState_Request__items(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__assign_function__SetWorldState_Request__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_function__SetWorldState_Request__items(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__resize_function__SetWorldState_Request__items(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__size_function__SetWorldState_Request__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_const_function__SetWorldState_Request__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_function__SetWorldState_Request__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__fetch_function__SetWorldState_Request__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_const_function__SetWorldState_Request__values(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__assign_function__SetWorldState_Request__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_function__SetWorldState_Request__values(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__resize_function__SetWorldState_Request__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_message_member_array[2] = {
  {
    "items",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_mode_control_msgs__srv__SetWorldState_Request, items),  // bytes offset in struct
    NULL,  // default value
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__size_function__SetWorldState_Request__items,  // size() function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_const_function__SetWorldState_Request__items,  // get_const(index) function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_function__SetWorldState_Request__items,  // get(index) function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__fetch_function__SetWorldState_Request__items,  // fetch(index, &value) function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__assign_function__SetWorldState_Request__items,  // assign(index, value) function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__resize_function__SetWorldState_Request__items  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_mode_control_msgs__srv__SetWorldState_Request, values),  // bytes offset in struct
    NULL,  // default value
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__size_function__SetWorldState_Request__values,  // size() function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_const_function__SetWorldState_Request__values,  // get_const(index) function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__get_function__SetWorldState_Request__values,  // get(index) function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__fetch_function__SetWorldState_Request__values,  // fetch(index, &value) function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__assign_function__SetWorldState_Request__values,  // assign(index, value) function pointer
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__resize_function__SetWorldState_Request__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_message_members = {
  "multi_mode_control_msgs__srv",  // message namespace
  "SetWorldState_Request",  // message name
  2,  // number of fields
  sizeof(multi_mode_control_msgs__srv__SetWorldState_Request),
  multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_message_member_array,  // message members
  multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_message_type_support_handle = {
  0,
  &multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_mode_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_mode_control_msgs, srv, SetWorldState_Request)() {
  if (!multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_message_type_support_handle.typesupport_identifier) {
    multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_mode_control_msgs__srv__SetWorldState_Request__rosidl_typesupport_introspection_c__SetWorldState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "multi_mode_control_msgs/srv/detail/set_world_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "multi_mode_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "multi_mode_control_msgs/srv/detail/set_world_state__functions.h"
// already included above
// #include "multi_mode_control_msgs/srv/detail/set_world_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_mode_control_msgs__srv__SetWorldState_Response__init(message_memory);
}

void multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_fini_function(void * message_memory)
{
  multi_mode_control_msgs__srv__SetWorldState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_mode_control_msgs__srv__SetWorldState_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_message_members = {
  "multi_mode_control_msgs__srv",  // message namespace
  "SetWorldState_Response",  // message name
  1,  // number of fields
  sizeof(multi_mode_control_msgs__srv__SetWorldState_Response),
  multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_message_member_array,  // message members
  multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_message_type_support_handle = {
  0,
  &multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_mode_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_mode_control_msgs, srv, SetWorldState_Response)() {
  if (!multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_message_type_support_handle.typesupport_identifier) {
    multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_mode_control_msgs__srv__SetWorldState_Response__rosidl_typesupport_introspection_c__SetWorldState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "multi_mode_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "multi_mode_control_msgs/srv/detail/set_world_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_service_members = {
  "multi_mode_control_msgs__srv",  // service namespace
  "SetWorldState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_Request_message_type_support_handle,
  NULL  // response message
  // multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_Response_message_type_support_handle
};

static rosidl_service_type_support_t multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_service_type_support_handle = {
  0,
  &multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_mode_control_msgs, srv, SetWorldState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_mode_control_msgs, srv, SetWorldState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_mode_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_mode_control_msgs, srv, SetWorldState)() {
  if (!multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_service_type_support_handle.typesupport_identifier) {
    multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_mode_control_msgs, srv, SetWorldState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_mode_control_msgs, srv, SetWorldState_Response)()->data;
  }

  return &multi_mode_control_msgs__srv__detail__set_world_state__rosidl_typesupport_introspection_c__SetWorldState_service_type_support_handle;
}
