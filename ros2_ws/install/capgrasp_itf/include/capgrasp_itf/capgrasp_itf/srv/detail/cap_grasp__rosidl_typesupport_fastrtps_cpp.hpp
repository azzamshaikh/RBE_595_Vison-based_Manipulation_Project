// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from capgrasp_itf:srv/CAPGrasp.idl
// generated code does not contain a copyright notice

#ifndef CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "capgrasp_itf/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "capgrasp_itf/srv/detail/cap_grasp__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace capgrasp_itf
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
cdr_serialize(
  const capgrasp_itf::srv::CAPGrasp_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  capgrasp_itf::srv::CAPGrasp_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
get_serialized_size(
  const capgrasp_itf::srv::CAPGrasp_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
max_serialized_size_CAPGrasp_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace capgrasp_itf

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, capgrasp_itf, srv, CAPGrasp_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "capgrasp_itf/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "capgrasp_itf/srv/detail/cap_grasp__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace capgrasp_itf
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
cdr_serialize(
  const capgrasp_itf::srv::CAPGrasp_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  capgrasp_itf::srv::CAPGrasp_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
get_serialized_size(
  const capgrasp_itf::srv::CAPGrasp_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
max_serialized_size_CAPGrasp_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace capgrasp_itf

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, capgrasp_itf, srv, CAPGrasp_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "capgrasp_itf/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_capgrasp_itf
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, capgrasp_itf, srv, CAPGrasp)();

#ifdef __cplusplus
}
#endif

#endif  // CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
