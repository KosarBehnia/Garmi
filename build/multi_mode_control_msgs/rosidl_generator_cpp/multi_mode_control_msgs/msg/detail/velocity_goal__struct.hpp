// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_mode_control_msgs:msg/VelocityGoal.idl
// generated code does not contain a copyright notice

#ifndef MULTI_MODE_CONTROL_MSGS__MSG__DETAIL__VELOCITY_GOAL__STRUCT_HPP_
#define MULTI_MODE_CONTROL_MSGS__MSG__DETAIL__VELOCITY_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__multi_mode_control_msgs__msg__VelocityGoal __attribute__((deprecated))
#else
# define DEPRECATED__multi_mode_control_msgs__msg__VelocityGoal __declspec(deprecated)
#endif

namespace multi_mode_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityGoal_
{
  using Type = VelocityGoal_<ContainerAllocator>;

  explicit VelocityGoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->qd.begin(), this->qd.end(), 0.0);
    }
  }

  explicit VelocityGoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : qd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->qd.begin(), this->qd.end(), 0.0);
    }
  }

  // field types and members
  using _qd_type =
    std::array<double, 7>;
  _qd_type qd;

  // setters for named parameter idiom
  Type & set__qd(
    const std::array<double, 7> & _arg)
  {
    this->qd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_mode_control_msgs__msg__VelocityGoal
    std::shared_ptr<multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_mode_control_msgs__msg__VelocityGoal
    std::shared_ptr<multi_mode_control_msgs::msg::VelocityGoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityGoal_ & other) const
  {
    if (this->qd != other.qd) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityGoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityGoal_

// alias to use template instance with default allocator
using VelocityGoal =
  multi_mode_control_msgs::msg::VelocityGoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multi_mode_control_msgs

#endif  // MULTI_MODE_CONTROL_MSGS__MSG__DETAIL__VELOCITY_GOAL__STRUCT_HPP_
