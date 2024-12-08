// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sequencer_itf:action/Sequencer.idl
// generated code does not contain a copyright notice

#ifndef SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__TRAITS_HPP_
#define SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sequencer_itf/action/detail/sequencer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sequencer_itf
{

namespace action
{

inline void to_flow_style_yaml(
  const Sequencer_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: commands
  {
    if (msg.commands.size() == 0) {
      out << "commands: []";
    } else {
      out << "commands: [";
      size_t pending_items = msg.commands.size();
      for (auto item : msg.commands) {
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
  const Sequencer_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.commands.size() == 0) {
      out << "commands: []\n";
    } else {
      out << "commands:\n";
      for (auto item : msg.commands) {
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

inline std::string to_yaml(const Sequencer_Goal & msg, bool use_flow_style = false)
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

}  // namespace sequencer_itf

namespace rosidl_generator_traits
{

[[deprecated("use sequencer_itf::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sequencer_itf::action::Sequencer_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  sequencer_itf::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sequencer_itf::action::to_yaml() instead")]]
inline std::string to_yaml(const sequencer_itf::action::Sequencer_Goal & msg)
{
  return sequencer_itf::action::to_yaml(msg);
}

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_Goal>()
{
  return "sequencer_itf::action::Sequencer_Goal";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_Goal>()
{
  return "sequencer_itf/action/Sequencer_Goal";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sequencer_itf::action::Sequencer_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sequencer_itf
{

namespace action
{

inline void to_flow_style_yaml(
  const Sequencer_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sequencer_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sequencer_Result & msg, bool use_flow_style = false)
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

}  // namespace sequencer_itf

namespace rosidl_generator_traits
{

[[deprecated("use sequencer_itf::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sequencer_itf::action::Sequencer_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  sequencer_itf::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sequencer_itf::action::to_yaml() instead")]]
inline std::string to_yaml(const sequencer_itf::action::Sequencer_Result & msg)
{
  return sequencer_itf::action::to_yaml(msg);
}

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_Result>()
{
  return "sequencer_itf::action::Sequencer_Result";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_Result>()
{
  return "sequencer_itf/action/Sequencer_Result";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sequencer_itf::action::Sequencer_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sequencer_itf
{

namespace action
{

inline void to_flow_style_yaml(
  const Sequencer_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sequencer_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sequencer_Feedback & msg, bool use_flow_style = false)
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

}  // namespace sequencer_itf

namespace rosidl_generator_traits
{

[[deprecated("use sequencer_itf::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sequencer_itf::action::Sequencer_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  sequencer_itf::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sequencer_itf::action::to_yaml() instead")]]
inline std::string to_yaml(const sequencer_itf::action::Sequencer_Feedback & msg)
{
  return sequencer_itf::action::to_yaml(msg);
}

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_Feedback>()
{
  return "sequencer_itf::action::Sequencer_Feedback";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_Feedback>()
{
  return "sequencer_itf/action/Sequencer_Feedback";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sequencer_itf::action::Sequencer_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "sequencer_itf/action/detail/sequencer__traits.hpp"

namespace sequencer_itf
{

namespace action
{

inline void to_flow_style_yaml(
  const Sequencer_SendGoal_Request & msg,
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
  const Sequencer_SendGoal_Request & msg,
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

inline std::string to_yaml(const Sequencer_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace sequencer_itf

namespace rosidl_generator_traits
{

[[deprecated("use sequencer_itf::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sequencer_itf::action::Sequencer_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sequencer_itf::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sequencer_itf::action::to_yaml() instead")]]
inline std::string to_yaml(const sequencer_itf::action::Sequencer_SendGoal_Request & msg)
{
  return sequencer_itf::action::to_yaml(msg);
}

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_SendGoal_Request>()
{
  return "sequencer_itf::action::Sequencer_SendGoal_Request";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_SendGoal_Request>()
{
  return "sequencer_itf/action/Sequencer_SendGoal_Request";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<sequencer_itf::action::Sequencer_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<sequencer_itf::action::Sequencer_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sequencer_itf::action::Sequencer_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace sequencer_itf
{

namespace action
{

inline void to_flow_style_yaml(
  const Sequencer_SendGoal_Response & msg,
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
  const Sequencer_SendGoal_Response & msg,
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

inline std::string to_yaml(const Sequencer_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace sequencer_itf

namespace rosidl_generator_traits
{

[[deprecated("use sequencer_itf::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sequencer_itf::action::Sequencer_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sequencer_itf::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sequencer_itf::action::to_yaml() instead")]]
inline std::string to_yaml(const sequencer_itf::action::Sequencer_SendGoal_Response & msg)
{
  return sequencer_itf::action::to_yaml(msg);
}

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_SendGoal_Response>()
{
  return "sequencer_itf::action::Sequencer_SendGoal_Response";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_SendGoal_Response>()
{
  return "sequencer_itf/action/Sequencer_SendGoal_Response";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<sequencer_itf::action::Sequencer_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_SendGoal>()
{
  return "sequencer_itf::action::Sequencer_SendGoal";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_SendGoal>()
{
  return "sequencer_itf/action/Sequencer_SendGoal";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<sequencer_itf::action::Sequencer_SendGoal_Request>::value &&
    has_fixed_size<sequencer_itf::action::Sequencer_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<sequencer_itf::action::Sequencer_SendGoal_Request>::value &&
    has_bounded_size<sequencer_itf::action::Sequencer_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<sequencer_itf::action::Sequencer_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<sequencer_itf::action::Sequencer_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sequencer_itf::action::Sequencer_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace sequencer_itf
{

namespace action
{

inline void to_flow_style_yaml(
  const Sequencer_GetResult_Request & msg,
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
  const Sequencer_GetResult_Request & msg,
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

inline std::string to_yaml(const Sequencer_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace sequencer_itf

namespace rosidl_generator_traits
{

[[deprecated("use sequencer_itf::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sequencer_itf::action::Sequencer_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sequencer_itf::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sequencer_itf::action::to_yaml() instead")]]
inline std::string to_yaml(const sequencer_itf::action::Sequencer_GetResult_Request & msg)
{
  return sequencer_itf::action::to_yaml(msg);
}

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_GetResult_Request>()
{
  return "sequencer_itf::action::Sequencer_GetResult_Request";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_GetResult_Request>()
{
  return "sequencer_itf/action/Sequencer_GetResult_Request";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sequencer_itf::action::Sequencer_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "sequencer_itf/action/detail/sequencer__traits.hpp"

namespace sequencer_itf
{

namespace action
{

inline void to_flow_style_yaml(
  const Sequencer_GetResult_Response & msg,
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
  const Sequencer_GetResult_Response & msg,
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

inline std::string to_yaml(const Sequencer_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace sequencer_itf

namespace rosidl_generator_traits
{

[[deprecated("use sequencer_itf::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sequencer_itf::action::Sequencer_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sequencer_itf::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sequencer_itf::action::to_yaml() instead")]]
inline std::string to_yaml(const sequencer_itf::action::Sequencer_GetResult_Response & msg)
{
  return sequencer_itf::action::to_yaml(msg);
}

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_GetResult_Response>()
{
  return "sequencer_itf::action::Sequencer_GetResult_Response";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_GetResult_Response>()
{
  return "sequencer_itf/action/Sequencer_GetResult_Response";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<sequencer_itf::action::Sequencer_Result>::value> {};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<sequencer_itf::action::Sequencer_Result>::value> {};

template<>
struct is_message<sequencer_itf::action::Sequencer_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_GetResult>()
{
  return "sequencer_itf::action::Sequencer_GetResult";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_GetResult>()
{
  return "sequencer_itf/action/Sequencer_GetResult";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<sequencer_itf::action::Sequencer_GetResult_Request>::value &&
    has_fixed_size<sequencer_itf::action::Sequencer_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<sequencer_itf::action::Sequencer_GetResult_Request>::value &&
    has_bounded_size<sequencer_itf::action::Sequencer_GetResult_Response>::value
  >
{
};

template<>
struct is_service<sequencer_itf::action::Sequencer_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<sequencer_itf::action::Sequencer_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sequencer_itf::action::Sequencer_GetResult_Response>
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
// #include "sequencer_itf/action/detail/sequencer__traits.hpp"

namespace sequencer_itf
{

namespace action
{

inline void to_flow_style_yaml(
  const Sequencer_FeedbackMessage & msg,
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
  const Sequencer_FeedbackMessage & msg,
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

inline std::string to_yaml(const Sequencer_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace sequencer_itf

namespace rosidl_generator_traits
{

[[deprecated("use sequencer_itf::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sequencer_itf::action::Sequencer_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  sequencer_itf::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sequencer_itf::action::to_yaml() instead")]]
inline std::string to_yaml(const sequencer_itf::action::Sequencer_FeedbackMessage & msg)
{
  return sequencer_itf::action::to_yaml(msg);
}

template<>
inline const char * data_type<sequencer_itf::action::Sequencer_FeedbackMessage>()
{
  return "sequencer_itf::action::Sequencer_FeedbackMessage";
}

template<>
inline const char * name<sequencer_itf::action::Sequencer_FeedbackMessage>()
{
  return "sequencer_itf/action/Sequencer_FeedbackMessage";
}

template<>
struct has_fixed_size<sequencer_itf::action::Sequencer_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<sequencer_itf::action::Sequencer_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sequencer_itf::action::Sequencer_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<sequencer_itf::action::Sequencer_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sequencer_itf::action::Sequencer_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<sequencer_itf::action::Sequencer>
  : std::true_type
{
};

template<>
struct is_action_goal<sequencer_itf::action::Sequencer_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<sequencer_itf::action::Sequencer_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<sequencer_itf::action::Sequencer_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__TRAITS_HPP_
