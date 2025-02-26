// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from franka_msgs:msg/PoseStampedArray.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__POSE_STAMPED_ARRAY__STRUCT_HPP_
#define FRANKA_MSGS__MSG__DETAIL__POSE_STAMPED_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stampedposes'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__franka_msgs__msg__PoseStampedArray __attribute__((deprecated))
#else
# define DEPRECATED__franka_msgs__msg__PoseStampedArray __declspec(deprecated)
#endif

namespace franka_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseStampedArray_
{
  using Type = PoseStampedArray_<ContainerAllocator>;

  explicit PoseStampedArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PoseStampedArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _stampedposes_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _stampedposes_type stampedposes;

  // setters for named parameter idiom
  Type & set__stampedposes(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->stampedposes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    franka_msgs::msg::PoseStampedArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const franka_msgs::msg::PoseStampedArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<franka_msgs::msg::PoseStampedArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<franka_msgs::msg::PoseStampedArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::PoseStampedArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::PoseStampedArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      franka_msgs::msg::PoseStampedArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<franka_msgs::msg::PoseStampedArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<franka_msgs::msg::PoseStampedArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<franka_msgs::msg::PoseStampedArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__franka_msgs__msg__PoseStampedArray
    std::shared_ptr<franka_msgs::msg::PoseStampedArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__franka_msgs__msg__PoseStampedArray
    std::shared_ptr<franka_msgs::msg::PoseStampedArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseStampedArray_ & other) const
  {
    if (this->stampedposes != other.stampedposes) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseStampedArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseStampedArray_

// alias to use template instance with default allocator
using PoseStampedArray =
  franka_msgs::msg::PoseStampedArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__POSE_STAMPED_ARRAY__STRUCT_HPP_
