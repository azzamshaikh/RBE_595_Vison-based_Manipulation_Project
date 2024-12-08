// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from capgrasp_itf:srv/CAPGrasp.idl
// generated code does not contain a copyright notice

#ifndef CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__BUILDER_HPP_
#define CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "capgrasp_itf/srv/detail/cap_grasp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace capgrasp_itf
{

namespace srv
{

namespace builder
{

class Init_CAPGrasp_Request_start
{
public:
  Init_CAPGrasp_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capgrasp_itf::srv::CAPGrasp_Request start(::capgrasp_itf::srv::CAPGrasp_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capgrasp_itf::srv::CAPGrasp_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capgrasp_itf::srv::CAPGrasp_Request>()
{
  return capgrasp_itf::srv::builder::Init_CAPGrasp_Request_start();
}

}  // namespace capgrasp_itf


namespace capgrasp_itf
{

namespace srv
{

namespace builder
{

class Init_CAPGrasp_Response_xyz
{
public:
  Init_CAPGrasp_Response_xyz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::capgrasp_itf::srv::CAPGrasp_Response xyz(::capgrasp_itf::srv::CAPGrasp_Response::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::capgrasp_itf::srv::CAPGrasp_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::capgrasp_itf::srv::CAPGrasp_Response>()
{
  return capgrasp_itf::srv::builder::Init_CAPGrasp_Response_xyz();
}

}  // namespace capgrasp_itf

#endif  // CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__BUILDER_HPP_
