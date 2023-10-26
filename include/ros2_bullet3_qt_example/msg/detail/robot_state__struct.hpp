// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_bullet3_qt_example:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_BULLET3_QT_EXAMPLE__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define ROS2_BULLET3_QT_EXAMPLE__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_bullet3_qt_example__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__ros2_bullet3_qt_example__msg__RobotState __declspec(deprecated)
#endif

namespace ros2_bullet3_qt_example
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_bullet3_qt_example__msg__RobotState
    std::shared_ptr<ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_bullet3_qt_example__msg__RobotState
    std::shared_ptr<ros2_bullet3_qt_example::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  ros2_bullet3_qt_example::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_bullet3_qt_example

#endif  // ROS2_BULLET3_QT_EXAMPLE__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
