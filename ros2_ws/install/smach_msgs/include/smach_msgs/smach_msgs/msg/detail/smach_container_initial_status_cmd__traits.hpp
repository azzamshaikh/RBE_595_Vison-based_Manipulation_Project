// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__TRAITS_HPP_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smach_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SmachContainerInitialStatusCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << ", ";
  }

  // member: initial_states
  {
    if (msg.initial_states.size() == 0) {
      out << "initial_states: []";
    } else {
      out << "initial_states: [";
      size_t pending_items = msg.initial_states.size();
      for (auto item : msg.initial_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: local_data
  {
    if (msg.local_data.size() == 0) {
      out << "local_data: []";
    } else {
      out << "local_data: [";
      size_t pending_items = msg.local_data.size();
      for (auto item : msg.local_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SmachContainerInitialStatusCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << "\n";
  }

  // member: initial_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.initial_states.size() == 0) {
      out << "initial_states: []\n";
    } else {
      out << "initial_states:\n";
      for (auto item : msg.initial_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: local_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.local_data.size() == 0) {
      out << "local_data: []\n";
    } else {
      out << "local_data:\n";
      for (auto item : msg.local_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SmachContainerInitialStatusCmd & msg, bool use_flow_style = false)
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

}  // namespace smach_msgs

namespace rosidl_generator_traits
{

[[deprecated("use smach_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smach_msgs::msg::SmachContainerInitialStatusCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  smach_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smach_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const smach_msgs::msg::SmachContainerInitialStatusCmd & msg)
{
  return smach_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smach_msgs::msg::SmachContainerInitialStatusCmd>()
{
  return "smach_msgs::msg::SmachContainerInitialStatusCmd";
}

template<>
inline const char * name<smach_msgs::msg::SmachContainerInitialStatusCmd>()
{
  return "smach_msgs/msg/SmachContainerInitialStatusCmd";
}

template<>
struct has_fixed_size<smach_msgs::msg::SmachContainerInitialStatusCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smach_msgs::msg::SmachContainerInitialStatusCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smach_msgs::msg::SmachContainerInitialStatusCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__TRAITS_HPP_
