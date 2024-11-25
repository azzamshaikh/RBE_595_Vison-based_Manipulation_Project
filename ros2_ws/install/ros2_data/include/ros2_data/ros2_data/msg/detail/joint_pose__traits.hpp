// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_data:msg/JointPose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_
#define ROS2_DATA__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_data/msg/detail/joint_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_data
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint1
  {
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << ", ";
  }

  // member: joint2
  {
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << ", ";
  }

  // member: joint3
  {
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << ", ";
  }

  // member: joint4
  {
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << ", ";
  }

  // member: joint5
  {
    out << "joint5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5, out);
    out << ", ";
  }

  // member: joint6
  {
    out << "joint6: ";
    rosidl_generator_traits::value_to_yaml(msg.joint6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint1: ";
    rosidl_generator_traits::value_to_yaml(msg.joint1, out);
    out << "\n";
  }

  // member: joint2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint2: ";
    rosidl_generator_traits::value_to_yaml(msg.joint2, out);
    out << "\n";
  }

  // member: joint3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint3: ";
    rosidl_generator_traits::value_to_yaml(msg.joint3, out);
    out << "\n";
  }

  // member: joint4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint4: ";
    rosidl_generator_traits::value_to_yaml(msg.joint4, out);
    out << "\n";
  }

  // member: joint5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint5: ";
    rosidl_generator_traits::value_to_yaml(msg.joint5, out);
    out << "\n";
  }

  // member: joint6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint6: ";
    rosidl_generator_traits::value_to_yaml(msg.joint6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_data

namespace rosidl_generator_traits
{

[[deprecated("use ros2_data::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_data::msg::JointPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_data::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_data::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_data::msg::JointPose & msg)
{
  return ros2_data::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_data::msg::JointPose>()
{
  return "ros2_data::msg::JointPose";
}

template<>
inline const char * name<ros2_data::msg::JointPose>()
{
  return "ros2_data/msg/JointPose";
}

template<>
struct has_fixed_size<ros2_data::msg::JointPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_data::msg::JointPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_data::msg::JointPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_DATA__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_
