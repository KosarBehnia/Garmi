// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from multi_mode_control_msgs:srv/SetCartesianImpedance.idl
// generated code does not contain a copyright notice
#include "multi_mode_control_msgs/srv/detail/set_cartesian_impedance__rosidl_typesupport_fastrtps_cpp.hpp"
#include "multi_mode_control_msgs/srv/detail/set_cartesian_impedance__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace multi_mode_control_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_mode_control_msgs
cdr_serialize(
  const multi_mode_control_msgs::srv::SetCartesianImpedance_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stiffness
  {
    cdr << ros_message.stiffness;
  }
  // Member: damping_ratio
  {
    cdr << ros_message.damping_ratio;
  }
  // Member: nullspace_stiffness
  cdr << ros_message.nullspace_stiffness;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_mode_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multi_mode_control_msgs::srv::SetCartesianImpedance_Request & ros_message)
{
  // Member: stiffness
  {
    cdr >> ros_message.stiffness;
  }

  // Member: damping_ratio
  {
    cdr >> ros_message.damping_ratio;
  }

  // Member: nullspace_stiffness
  cdr >> ros_message.nullspace_stiffness;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_mode_control_msgs
get_serialized_size(
  const multi_mode_control_msgs::srv::SetCartesianImpedance_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stiffness
  {
    size_t array_size = 36;
    size_t item_size = sizeof(ros_message.stiffness[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: damping_ratio
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.damping_ratio[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nullspace_stiffness
  {
    size_t item_size = sizeof(ros_message.nullspace_stiffness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_mode_control_msgs
max_serialized_size_SetCartesianImpedance_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: stiffness
  {
    size_t array_size = 36;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: damping_ratio
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nullspace_stiffness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = multi_mode_control_msgs::srv::SetCartesianImpedance_Request;
    is_plain =
      (
      offsetof(DataType, nullspace_stiffness) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetCartesianImpedance_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const multi_mode_control_msgs::srv::SetCartesianImpedance_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetCartesianImpedance_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<multi_mode_control_msgs::srv::SetCartesianImpedance_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetCartesianImpedance_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const multi_mode_control_msgs::srv::SetCartesianImpedance_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetCartesianImpedance_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetCartesianImpedance_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetCartesianImpedance_Request__callbacks = {
  "multi_mode_control_msgs::srv",
  "SetCartesianImpedance_Request",
  _SetCartesianImpedance_Request__cdr_serialize,
  _SetCartesianImpedance_Request__cdr_deserialize,
  _SetCartesianImpedance_Request__get_serialized_size,
  _SetCartesianImpedance_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetCartesianImpedance_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetCartesianImpedance_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace multi_mode_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_multi_mode_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_mode_control_msgs::srv::SetCartesianImpedance_Request>()
{
  return &multi_mode_control_msgs::srv::typesupport_fastrtps_cpp::_SetCartesianImpedance_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_mode_control_msgs, srv, SetCartesianImpedance_Request)() {
  return &multi_mode_control_msgs::srv::typesupport_fastrtps_cpp::_SetCartesianImpedance_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace multi_mode_control_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_mode_control_msgs
cdr_serialize(
  const multi_mode_control_msgs::srv::SetCartesianImpedance_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_mode_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multi_mode_control_msgs::srv::SetCartesianImpedance_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_mode_control_msgs
get_serialized_size(
  const multi_mode_control_msgs::srv::SetCartesianImpedance_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_mode_control_msgs
max_serialized_size_SetCartesianImpedance_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = multi_mode_control_msgs::srv::SetCartesianImpedance_Response;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetCartesianImpedance_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const multi_mode_control_msgs::srv::SetCartesianImpedance_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetCartesianImpedance_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<multi_mode_control_msgs::srv::SetCartesianImpedance_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetCartesianImpedance_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const multi_mode_control_msgs::srv::SetCartesianImpedance_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetCartesianImpedance_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetCartesianImpedance_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetCartesianImpedance_Response__callbacks = {
  "multi_mode_control_msgs::srv",
  "SetCartesianImpedance_Response",
  _SetCartesianImpedance_Response__cdr_serialize,
  _SetCartesianImpedance_Response__cdr_deserialize,
  _SetCartesianImpedance_Response__get_serialized_size,
  _SetCartesianImpedance_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetCartesianImpedance_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetCartesianImpedance_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace multi_mode_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_multi_mode_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<multi_mode_control_msgs::srv::SetCartesianImpedance_Response>()
{
  return &multi_mode_control_msgs::srv::typesupport_fastrtps_cpp::_SetCartesianImpedance_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_mode_control_msgs, srv, SetCartesianImpedance_Response)() {
  return &multi_mode_control_msgs::srv::typesupport_fastrtps_cpp::_SetCartesianImpedance_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace multi_mode_control_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetCartesianImpedance__callbacks = {
  "multi_mode_control_msgs::srv",
  "SetCartesianImpedance",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_mode_control_msgs, srv, SetCartesianImpedance_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_mode_control_msgs, srv, SetCartesianImpedance_Response)(),
};

static rosidl_service_type_support_t _SetCartesianImpedance__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetCartesianImpedance__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace multi_mode_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_multi_mode_control_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<multi_mode_control_msgs::srv::SetCartesianImpedance>()
{
  return &multi_mode_control_msgs::srv::typesupport_fastrtps_cpp::_SetCartesianImpedance__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_mode_control_msgs, srv, SetCartesianImpedance)() {
  return &multi_mode_control_msgs::srv::typesupport_fastrtps_cpp::_SetCartesianImpedance__handle;
}

#ifdef __cplusplus
}
#endif
