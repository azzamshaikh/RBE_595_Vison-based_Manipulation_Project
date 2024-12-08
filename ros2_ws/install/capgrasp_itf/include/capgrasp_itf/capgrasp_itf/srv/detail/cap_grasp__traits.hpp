// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from capgrasp_itf:srv/CAPGrasp.idl
// generated code does not contain a copyright notice

#ifndef CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__TRAITS_HPP_
#define CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "capgrasp_itf/srv/detail/cap_grasp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace capgrasp_itf
{

namespace srv
{

inline void to_flow_style_yaml(
  const CAPGrasp_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CAPGrasp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CAPGrasp_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace capgrasp_itf

namespace rosidl_generator_traits
{

[[deprecated("use capgrasp_itf::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capgrasp_itf::srv::CAPGrasp_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  capgrasp_itf::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capgrasp_itf::srv::to_yaml() instead")]]
inline std::string to_yaml(const capgrasp_itf::srv::CAPGrasp_Request & msg)
{
  return capgrasp_itf::srv::to_yaml(msg);
}

template<>
inline const char * data_type<capgrasp_itf::srv::CAPGrasp_Request>()
{
  return "capgrasp_itf::srv::CAPGrasp_Request";
}

template<>
inline const char * name<capgrasp_itf::srv::CAPGrasp_Request>()
{
  return "capgrasp_itf/srv/CAPGrasp_Request";
}

template<>
struct has_fixed_size<capgrasp_itf::srv::CAPGrasp_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<capgrasp_itf::srv::CAPGrasp_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<capgrasp_itf::srv::CAPGrasp_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace capgrasp_itf
{

namespace srv
{

inline void to_flow_style_yaml(
  const CAPGrasp_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: xyz
  {
    if (msg.xyz.size() == 0) {
      out << "xyz: []";
    } else {
      out << "xyz: [";
      size_t pending_items = msg.xyz.size();
      for (auto item : msg.xyz) {
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
  const CAPGrasp_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xyz.size() == 0) {
      out << "xyz: []\n";
    } else {
      out << "xyz:\n";
      for (auto item : msg.xyz) {
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

inline std::string to_yaml(const CAPGrasp_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace capgrasp_itf

namespace rosidl_generator_traits
{

[[deprecated("use capgrasp_itf::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const capgrasp_itf::srv::CAPGrasp_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  capgrasp_itf::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use capgrasp_itf::srv::to_yaml() instead")]]
inline std::string to_yaml(const capgrasp_itf::srv::CAPGrasp_Response & msg)
{
  return capgrasp_itf::srv::to_yaml(msg);
}

template<>
inline const char * data_type<capgrasp_itf::srv::CAPGrasp_Response>()
{
  return "capgrasp_itf::srv::CAPGrasp_Response";
}

template<>
inline const char * name<capgrasp_itf::srv::CAPGrasp_Response>()
{
  return "capgrasp_itf/srv/CAPGrasp_Response";
}

template<>
struct has_fixed_size<capgrasp_itf::srv::CAPGrasp_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<capgrasp_itf::srv::CAPGrasp_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<capgrasp_itf::srv::CAPGrasp_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<capgrasp_itf::srv::CAPGrasp>()
{
  return "capgrasp_itf::srv::CAPGrasp";
}

template<>
inline const char * name<capgrasp_itf::srv::CAPGrasp>()
{
  return "capgrasp_itf/srv/CAPGrasp";
}

template<>
struct has_fixed_size<capgrasp_itf::srv::CAPGrasp>
  : std::integral_constant<
    bool,
    has_fixed_size<capgrasp_itf::srv::CAPGrasp_Request>::value &&
    has_fixed_size<capgrasp_itf::srv::CAPGrasp_Response>::value
  >
{
};

template<>
struct has_bounded_size<capgrasp_itf::srv::CAPGrasp>
  : std::integral_constant<
    bool,
    has_bounded_size<capgrasp_itf::srv::CAPGrasp_Request>::value &&
    has_bounded_size<capgrasp_itf::srv::CAPGrasp_Response>::value
  >
{
};

template<>
struct is_service<capgrasp_itf::srv::CAPGrasp>
  : std::true_type
{
};

template<>
struct is_service_request<capgrasp_itf::srv::CAPGrasp_Request>
  : std::true_type
{
};

template<>
struct is_service_response<capgrasp_itf::srv::CAPGrasp_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__TRAITS_HPP_
