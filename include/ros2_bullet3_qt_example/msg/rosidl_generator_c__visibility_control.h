// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ROS2_BULLET3_QT_EXAMPLE__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define ROS2_BULLET3_QT_EXAMPLE__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_ros2_bullet3_qt_example __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_ros2_bullet3_qt_example __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_ros2_bullet3_qt_example __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_ros2_bullet3_qt_example __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_ros2_bullet3_qt_example
    #define ROSIDL_GENERATOR_C_PUBLIC_ros2_bullet3_qt_example ROSIDL_GENERATOR_C_EXPORT_ros2_bullet3_qt_example
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_ros2_bullet3_qt_example ROSIDL_GENERATOR_C_IMPORT_ros2_bullet3_qt_example
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_ros2_bullet3_qt_example __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_ros2_bullet3_qt_example
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_ros2_bullet3_qt_example __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_ros2_bullet3_qt_example
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ROS2_BULLET3_QT_EXAMPLE__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
