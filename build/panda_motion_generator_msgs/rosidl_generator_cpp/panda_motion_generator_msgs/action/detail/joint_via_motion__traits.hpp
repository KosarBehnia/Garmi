// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_motion_generator_msgs:action/JointViaMotion.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOTION_GENERATOR_MSGS__ACTION__DETAIL__JOINT_VIA_MOTION__TRAITS_HPP_
#define PANDA_MOTION_GENERATOR_MSGS__ACTION__DETAIL__JOINT_VIA_MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_motion_generator_msgs/action/detail/joint_via_motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'via_poses'
#include "panda_motion_generator_msgs/msg/detail/joint_pose__traits.hpp"

namespace panda_motion_generator_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const JointViaMotion_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: via_poses
  {
    if (msg.via_poses.size() == 0) {
      out << "via_poses: []";
    } else {
      out << "via_poses: [";
      size_t pending_items = msg.via_poses.size();
      for (auto item : msg.via_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: v_scale
  {
    out << "v_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.v_scale, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointViaMotion_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: via_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.via_poses.size() == 0) {
      out << "via_poses: []\n";
    } else {
      out << "via_poses:\n";
      for (auto item : msg.via_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: v_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.v_scale, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointViaMotion_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace panda_motion_generator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use panda_motion_generator_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_motion_generator_msgs::action::JointViaMotion_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_motion_generator_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_motion_generator_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const panda_motion_generator_msgs::action::JointViaMotion_Goal & msg)
{
  return panda_motion_generator_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_Goal>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_Goal";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_Goal>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_Goal";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panda_motion_generator_msgs::action::JointViaMotion_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "panda_motion_generator_msgs/msg/detail/simple_action_result__traits.hpp"

namespace panda_motion_generator_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const JointViaMotion_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointViaMotion_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointViaMotion_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace panda_motion_generator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use panda_motion_generator_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_motion_generator_msgs::action::JointViaMotion_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_motion_generator_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_motion_generator_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const panda_motion_generator_msgs::action::JointViaMotion_Result & msg)
{
  return panda_motion_generator_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_Result>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_Result";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_Result>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_Result";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_Result>
  : std::integral_constant<bool, has_fixed_size<panda_motion_generator_msgs::msg::SimpleActionResult>::value> {};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_Result>
  : std::integral_constant<bool, has_bounded_size<panda_motion_generator_msgs::msg::SimpleActionResult>::value> {};

template<>
struct is_message<panda_motion_generator_msgs::action::JointViaMotion_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace panda_motion_generator_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const JointViaMotion_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: time_to_completion
  {
    out << "time_to_completion: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_completion, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointViaMotion_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: time_to_completion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_completion: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_completion, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointViaMotion_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace panda_motion_generator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use panda_motion_generator_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_motion_generator_msgs::action::JointViaMotion_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_motion_generator_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_motion_generator_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const panda_motion_generator_msgs::action::JointViaMotion_Feedback & msg)
{
  return panda_motion_generator_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_Feedback>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_Feedback";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_Feedback>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_Feedback";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_motion_generator_msgs::action::JointViaMotion_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "panda_motion_generator_msgs/action/detail/joint_via_motion__traits.hpp"

namespace panda_motion_generator_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const JointViaMotion_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointViaMotion_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointViaMotion_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace panda_motion_generator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use panda_motion_generator_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_motion_generator_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_motion_generator_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request & msg)
{
  return panda_motion_generator_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_SendGoal_Request";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace panda_motion_generator_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const JointViaMotion_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointViaMotion_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointViaMotion_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace panda_motion_generator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use panda_motion_generator_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_motion_generator_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_motion_generator_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response & msg)
{
  return panda_motion_generator_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_SendGoal_Response";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_SendGoal>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_SendGoal";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_SendGoal>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_SendGoal";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request>::value &&
    has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request>::value &&
    has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<panda_motion_generator_msgs::action::JointViaMotion_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panda_motion_generator_msgs::action::JointViaMotion_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace panda_motion_generator_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const JointViaMotion_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointViaMotion_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointViaMotion_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace panda_motion_generator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use panda_motion_generator_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_motion_generator_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_motion_generator_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request & msg)
{
  return panda_motion_generator_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_GetResult_Request";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "panda_motion_generator_msgs/action/detail/joint_via_motion__traits.hpp"

namespace panda_motion_generator_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const JointViaMotion_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointViaMotion_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointViaMotion_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace panda_motion_generator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use panda_motion_generator_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_motion_generator_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_motion_generator_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response & msg)
{
  return panda_motion_generator_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_GetResult_Response";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_Result>::value> {};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_Result>::value> {};

template<>
struct is_message<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_GetResult>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_GetResult";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_GetResult>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_GetResult";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request>::value &&
    has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request>::value &&
    has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response>::value
  >
{
};

template<>
struct is_service<panda_motion_generator_msgs::action::JointViaMotion_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panda_motion_generator_msgs::action::JointViaMotion_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "panda_motion_generator_msgs/action/detail/joint_via_motion__traits.hpp"

namespace panda_motion_generator_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const JointViaMotion_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointViaMotion_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointViaMotion_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace panda_motion_generator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use panda_motion_generator_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_motion_generator_msgs::action::JointViaMotion_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_motion_generator_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_motion_generator_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const panda_motion_generator_msgs::action::JointViaMotion_FeedbackMessage & msg)
{
  return panda_motion_generator_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<panda_motion_generator_msgs::action::JointViaMotion_FeedbackMessage>()
{
  return "panda_motion_generator_msgs::action::JointViaMotion_FeedbackMessage";
}

template<>
inline const char * name<panda_motion_generator_msgs::action::JointViaMotion_FeedbackMessage>()
{
  return "panda_motion_generator_msgs/action/JointViaMotion_FeedbackMessage";
}

template<>
struct has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<panda_motion_generator_msgs::action::JointViaMotion_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<panda_motion_generator_msgs::action::JointViaMotion_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<panda_motion_generator_msgs::action::JointViaMotion_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<panda_motion_generator_msgs::action::JointViaMotion>
  : std::true_type
{
};

template<>
struct is_action_goal<panda_motion_generator_msgs::action::JointViaMotion_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<panda_motion_generator_msgs::action::JointViaMotion_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<panda_motion_generator_msgs::action::JointViaMotion_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PANDA_MOTION_GENERATOR_MSGS__ACTION__DETAIL__JOINT_VIA_MOTION__TRAITS_HPP_
