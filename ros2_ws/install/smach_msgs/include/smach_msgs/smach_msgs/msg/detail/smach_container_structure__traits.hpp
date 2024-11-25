// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__TRAITS_HPP_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smach_msgs/msg/detail/smach_container_structure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace smach_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SmachContainerStructure & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << ", ";
  }

  // member: children
  {
    if (msg.children.size() == 0) {
      out << "children: []";
    } else {
      out << "children: [";
      size_t pending_items = msg.children.size();
      for (auto item : msg.children) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: internal_outcomes
  {
    if (msg.internal_outcomes.size() == 0) {
      out << "internal_outcomes: []";
    } else {
      out << "internal_outcomes: [";
      size_t pending_items = msg.internal_outcomes.size();
      for (auto item : msg.internal_outcomes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: outcomes_from
  {
    if (msg.outcomes_from.size() == 0) {
      out << "outcomes_from: []";
    } else {
      out << "outcomes_from: [";
      size_t pending_items = msg.outcomes_from.size();
      for (auto item : msg.outcomes_from) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: outcomes_to
  {
    if (msg.outcomes_to.size() == 0) {
      out << "outcomes_to: []";
    } else {
      out << "outcomes_to: [";
      size_t pending_items = msg.outcomes_to.size();
      for (auto item : msg.outcomes_to) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: container_outcomes
  {
    if (msg.container_outcomes.size() == 0) {
      out << "container_outcomes: []";
    } else {
      out << "container_outcomes: [";
      size_t pending_items = msg.container_outcomes.size();
      for (auto item : msg.container_outcomes) {
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
  const SmachContainerStructure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << "\n";
  }

  // member: children
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.children.size() == 0) {
      out << "children: []\n";
    } else {
      out << "children:\n";
      for (auto item : msg.children) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: internal_outcomes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.internal_outcomes.size() == 0) {
      out << "internal_outcomes: []\n";
    } else {
      out << "internal_outcomes:\n";
      for (auto item : msg.internal_outcomes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: outcomes_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outcomes_from.size() == 0) {
      out << "outcomes_from: []\n";
    } else {
      out << "outcomes_from:\n";
      for (auto item : msg.outcomes_from) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: outcomes_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outcomes_to.size() == 0) {
      out << "outcomes_to: []\n";
    } else {
      out << "outcomes_to:\n";
      for (auto item : msg.outcomes_to) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: container_outcomes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.container_outcomes.size() == 0) {
      out << "container_outcomes: []\n";
    } else {
      out << "container_outcomes:\n";
      for (auto item : msg.container_outcomes) {
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

inline std::string to_yaml(const SmachContainerStructure & msg, bool use_flow_style = false)
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
  const smach_msgs::msg::SmachContainerStructure & msg,
  std::ostream & out, size_t indentation = 0)
{
  smach_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smach_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const smach_msgs::msg::SmachContainerStructure & msg)
{
  return smach_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smach_msgs::msg::SmachContainerStructure>()
{
  return "smach_msgs::msg::SmachContainerStructure";
}

template<>
inline const char * name<smach_msgs::msg::SmachContainerStructure>()
{
  return "smach_msgs/msg/SmachContainerStructure";
}

template<>
struct has_fixed_size<smach_msgs::msg::SmachContainerStructure>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smach_msgs::msg::SmachContainerStructure>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smach_msgs::msg::SmachContainerStructure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__TRAITS_HPP_
