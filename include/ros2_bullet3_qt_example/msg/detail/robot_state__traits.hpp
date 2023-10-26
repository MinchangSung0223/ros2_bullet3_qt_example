// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_bullet3_qt_example:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROS2_BULLET3_QT_EXAMPLE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define ROS2_BULLET3_QT_EXAMPLE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include "ros2_bullet3_qt_example/msg/detail/robot_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_bullet3_qt_example::msg::RobotState>()
{
  return "ros2_bullet3_qt_example::msg::RobotState";
}

template<>
inline const char * name<ros2_bullet3_qt_example::msg::RobotState>()
{
  return "ros2_bullet3_qt_example/msg/RobotState";
}

template<>
struct has_fixed_size<ros2_bullet3_qt_example::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_bullet3_qt_example::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_bullet3_qt_example::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_BULLET3_QT_EXAMPLE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
