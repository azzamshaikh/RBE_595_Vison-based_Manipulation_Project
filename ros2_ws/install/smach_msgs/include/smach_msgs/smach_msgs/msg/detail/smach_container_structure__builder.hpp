// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__BUILDER_HPP_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smach_msgs/msg/detail/smach_container_structure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smach_msgs
{

namespace msg
{

namespace builder
{

class Init_SmachContainerStructure_container_outcomes
{
public:
  explicit Init_SmachContainerStructure_container_outcomes(::smach_msgs::msg::SmachContainerStructure & msg)
  : msg_(msg)
  {}
  ::smach_msgs::msg::SmachContainerStructure container_outcomes(::smach_msgs::msg::SmachContainerStructure::_container_outcomes_type arg)
  {
    msg_.container_outcomes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStructure msg_;
};

class Init_SmachContainerStructure_outcomes_to
{
public:
  explicit Init_SmachContainerStructure_outcomes_to(::smach_msgs::msg::SmachContainerStructure & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStructure_container_outcomes outcomes_to(::smach_msgs::msg::SmachContainerStructure::_outcomes_to_type arg)
  {
    msg_.outcomes_to = std::move(arg);
    return Init_SmachContainerStructure_container_outcomes(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStructure msg_;
};

class Init_SmachContainerStructure_outcomes_from
{
public:
  explicit Init_SmachContainerStructure_outcomes_from(::smach_msgs::msg::SmachContainerStructure & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStructure_outcomes_to outcomes_from(::smach_msgs::msg::SmachContainerStructure::_outcomes_from_type arg)
  {
    msg_.outcomes_from = std::move(arg);
    return Init_SmachContainerStructure_outcomes_to(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStructure msg_;
};

class Init_SmachContainerStructure_internal_outcomes
{
public:
  explicit Init_SmachContainerStructure_internal_outcomes(::smach_msgs::msg::SmachContainerStructure & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStructure_outcomes_from internal_outcomes(::smach_msgs::msg::SmachContainerStructure::_internal_outcomes_type arg)
  {
    msg_.internal_outcomes = std::move(arg);
    return Init_SmachContainerStructure_outcomes_from(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStructure msg_;
};

class Init_SmachContainerStructure_children
{
public:
  explicit Init_SmachContainerStructure_children(::smach_msgs::msg::SmachContainerStructure & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStructure_internal_outcomes children(::smach_msgs::msg::SmachContainerStructure::_children_type arg)
  {
    msg_.children = std::move(arg);
    return Init_SmachContainerStructure_internal_outcomes(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStructure msg_;
};

class Init_SmachContainerStructure_path
{
public:
  explicit Init_SmachContainerStructure_path(::smach_msgs::msg::SmachContainerStructure & msg)
  : msg_(msg)
  {}
  Init_SmachContainerStructure_children path(::smach_msgs::msg::SmachContainerStructure::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_SmachContainerStructure_children(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStructure msg_;
};

class Init_SmachContainerStructure_header
{
public:
  Init_SmachContainerStructure_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SmachContainerStructure_path header(::smach_msgs::msg::SmachContainerStructure::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SmachContainerStructure_path(msg_);
  }

private:
  ::smach_msgs::msg::SmachContainerStructure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smach_msgs::msg::SmachContainerStructure>()
{
  return smach_msgs::msg::builder::Init_SmachContainerStructure_header();
}

}  // namespace smach_msgs

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__BUILDER_HPP_
