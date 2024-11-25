// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__BUILDER_HPP_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smach_msgs
{

namespace msg
{

namespace builder
{

class Init_SmachContainerInitialStatusCmd_local_data
{
public:
  explicit Init_SmachContainerInitialStatusCmd_local_data(::smach_msgs::msg::SmachContainerInitialStatusCmd & msg)
  : msg_(msg)
  {}
  ::smach_msgs::msg::SmachContainerInitialStatusCmd local_data(::smach_msgs::msg::SmachContainerInitialStatusCmd::_local_data_type arg)
  {
    msg_.local_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerInitialStatusCmd msg_;
};

class Init_SmachContainerInitialStatusCmd_initial_states
{
public:
  explicit Init_SmachContainerInitialStatusCmd_initial_states(::smach_msgs::msg::SmachContainerInitialStatusCmd & msg)
  : msg_(msg)
  {}
  Init_SmachContainerInitialStatusCmd_local_data initial_states(::smach_msgs::msg::SmachContainerInitialStatusCmd::_initial_states_type arg)
  {
    msg_.initial_states = std::move(arg);
    return Init_SmachContainerInitialStatusCmd_local_data(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerInitialStatusCmd msg_;
};

class Init_SmachContainerInitialStatusCmd_path
{
public:
  Init_SmachContainerInitialStatusCmd_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmachContainerInitialStatusCmd_initial_states path(::smach_msgs::msg::SmachContainerInitialStatusCmd::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_SmachContainerInitialStatusCmd_initial_states(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerInitialStatusCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smach_msgs::msg::SmachContainerInitialStatusCmd>()
{
  return smach_msgs::msg::builder::Init_SmachContainerInitialStatusCmd_path();
}

}  // namespace smach_msgs

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__BUILDER_HPP_
