// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smach_msgs:msg/SmachContainerStatus.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__BUILDER_HPP_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smach_msgs/msg/detail/smach_container_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smach_msgs
{

namespace msg
{

namespace builder
{

class Init_SmachContainerStatus_info
{
public:
  explicit Init_SmachContainerStatus_info(::smach_msgs::msg::SmachContainerStatus & msg)
  : msg_(msg)
  {}
  ::smach_msgs::msg::SmachContainerStatus info(::smach_msgs::msg::SmachContainerStatus::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStatus msg_;
};

class Init_SmachContainerStatus_local_data
{
public:
  explicit Init_SmachContainerStatus_local_data(::smach_msgs::msg::SmachContainerStatus & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStatus_info local_data(::smach_msgs::msg::SmachContainerStatus::_local_data_type arg)
  {
    msg_.local_data = std::move(arg);
    return Init_SmachContainerStatus_info(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStatus msg_;
};

class Init_SmachContainerStatus_active_states
{
public:
  explicit Init_SmachContainerStatus_active_states(::smach_msgs::msg::SmachContainerStatus & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStatus_local_data active_states(::smach_msgs::msg::SmachContainerStatus::_active_states_type arg)
  {
    msg_.active_states = std::move(arg);
    return Init_SmachContainerStatus_local_data(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStatus msg_;
};

class Init_SmachContainerStatus_initial_states
{
public:
  explicit Init_SmachContainerStatus_initial_states(::smach_msgs::msg::SmachContainerStatus & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStatus_active_states initial_states(::smach_msgs::msg::SmachContainerStatus::_initial_states_type arg)
  {
    msg_.initial_states = std::move(arg);
    return Init_SmachContainerStatus_active_states(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStatus msg_;
};

class Init_SmachContainerStatus_path
{
public:
  explicit Init_SmachContainerStatus_path(::smach_msgs::msg::SmachContainerStatus & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStatus_initial_states path(::smach_msgs::msg::SmachContainerStatus::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_SmachContainerStatus_initial_states(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStatus msg_;
};

class Init_SmachContainerStatus_header
{
public:
  Init_SmachContainerStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmachContainerStatus_path header(::smach_msgs::msg::SmachContainerStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SmachContainerStatus_path(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smach_msgs::msg::SmachContainerStatus>()
{
  return smach_msgs::msg::builder::Init_SmachContainerStatus_header();
}

}  // namespace smach_msgs

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__BUILDER_HPP_
