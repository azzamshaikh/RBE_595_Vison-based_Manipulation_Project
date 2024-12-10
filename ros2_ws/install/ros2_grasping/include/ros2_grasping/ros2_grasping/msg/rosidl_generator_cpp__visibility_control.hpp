// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef ROS2_GRASPING__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define ROS2_GRASPING__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_ros2_grasping __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_ros2_grasping __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_ros2_grasping __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_ros2_grasping __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_ros2_grasping
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ros2_grasping ROSIDL_GENERATOR_CPP_EXPORT_ros2_grasping
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ros2_grasping ROSIDL_GENERATOR_CPP_IMPORT_ros2_grasping
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_ros2_grasping __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_ros2_grasping
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ros2_grasping __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ros2_grasping
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ROS2_GRASPING__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
