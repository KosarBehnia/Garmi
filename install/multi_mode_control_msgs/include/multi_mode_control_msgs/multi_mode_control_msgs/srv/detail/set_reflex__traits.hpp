// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_mode_control_msgs:srv/SetReflex.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MODE_CONTROL_MSGS__SRV__DETAIL__SET_REFLEX__TRAITS_HPP_
#define MULTI_MODE_CONTROL_MSGS__SRV__DETAIL__SET_REFLEX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multi_mode_control_msgs/srv/detail/set_reflex__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multi_mode_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetReflex_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: level1
  {
    out << "level1: ";
    rosidl_generator_traits::value_to_yaml(msg.level1, out);
    out << ", ";
  }

  // member: level2
  {
    out << "level2: ";
    rosidl_generator_traits::value_to_yaml(msg.level2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetReflex_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: level1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level1: ";
    rosidl_generator_traits::value_to_yaml(msg.level1, out);
    out << "\n";
  }

  // member: level2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level2: ";
    rosidl_generator_traits::value_to_yaml(msg.level2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetReflex_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace multi_mode_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use multi_mode_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_mode_control_msgs::srv::SetReflex_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_mode_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_mode_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const multi_mode_control_msgs::srv::SetReflex_Request & msg)
{
  return multi_mode_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<multi_mode_control_msgs::srv::SetReflex_Request>()
{
  return "multi_mode_control_msgs::srv::SetReflex_Request";
}

template<>
inline const char * name<multi_mode_control_msgs::srv::SetReflex_Request>()
{
  return "multi_mode_control_msgs/srv/SetReflex_Request";
}

template<>
struct has_fixed_size<multi_mode_control_msgs::srv::SetReflex_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_mode_control_msgs::srv::SetReflex_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_mode_control_msgs::srv::SetReflex_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace multi_mode_control_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetReflex_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetReflex_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetReflex_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace multi_mode_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use multi_mode_control_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_mode_control_msgs::srv::SetReflex_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_mode_control_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_mode_control_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const multi_mode_control_msgs::srv::SetReflex_Response & msg)
{
  return multi_mode_control_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<multi_mode_control_msgs::srv::SetReflex_Response>()
{
  return "multi_mode_control_msgs::srv::SetReflex_Response";
}

template<>
inline const char * name<multi_mode_control_msgs::srv::SetReflex_Response>()
{
  return "multi_mode_control_msgs/srv/SetReflex_Response";
}

template<>
struct has_fixed_size<multi_mode_control_msgs::srv::SetReflex_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<multi_mode_control_msgs::srv::SetReflex_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<multi_mode_control_msgs::srv::SetReflex_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<multi_mode_control_msgs::srv::SetReflex>()
{
  return "multi_mode_control_msgs::srv::SetReflex";
}

template<>
inline const char * name<multi_mode_control_msgs::srv::SetReflex>()
{
  return "multi_mode_control_msgs/srv/SetReflex";
}

template<>
struct has_fixed_size<multi_mode_control_msgs::srv::SetReflex>
  : std::integral_constant<
    bool,
    has_fixed_size<multi_mode_control_msgs::srv::SetReflex_Request>::value &&
    has_fixed_size<multi_mode_control_msgs::srv::SetReflex_Response>::value
  >
{
};

template<>
struct has_bounded_size<multi_mode_control_msgs::srv::SetReflex>
  : std::integral_constant<
    bool,
    has_bounded_size<multi_mode_control_msgs::srv::SetReflex_Request>::value &&
    has_bounded_size<multi_mode_control_msgs::srv::SetReflex_Response>::value
  >
{
};

template<>
struct is_service<multi_mode_control_msgs::srv::SetReflex>
  : std::true_type
{
};

template<>
struct is_service_request<multi_mode_control_msgs::srv::SetReflex_Request>
  : std::true_type
{
};

template<>
struct is_service_response<multi_mode_control_msgs::srv::SetReflex_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MULTI_MODE_CONTROL_MSGS__SRV__DETAIL__SET_REFLEX__TRAITS_HPP_
