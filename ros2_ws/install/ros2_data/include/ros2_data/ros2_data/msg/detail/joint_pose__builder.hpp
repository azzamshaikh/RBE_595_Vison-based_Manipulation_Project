// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_data:msg/JointPose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__MSG__DETAIL__JOINT_POSE__BUILDER_HPP_
#define ROS2_DATA__MSG__DETAIL__JOINT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_data/msg/detail/joint_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_data
{

namespace msg
{

namespace builder
{

class Init_JointPose_joint6
{
public:
  explicit Init_JointPose_joint6(::ros2_data::msg::JointPose & msg)
  : msg_(msg)
  {}
  ::ros2_data::msg::JointPose joint6(::ros2_data::msg::JointPose::_joint6_type arg)
  {
    msg_.joint6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::msg::JointPose msg_;
};

class Init_JointPose_joint5
{
public:
  explicit Init_JointPose_joint5(::ros2_data::msg::JointPose & msg)
  : msg_(msg)
  {}
  Init_JointPose_joint6 joint5(::ros2_data::msg::JointPose::_joint5_type arg)
  {
    msg_.joint5 = std::move(arg);
    return Init_JointPose_joint6(msg_);
  }

private:
  ::ros2_data::msg::JointPose msg_;
};

class Init_JointPose_joint4
{
public:
  explicit Init_JointPose_joint4(::ros2_data::msg::JointPose & msg)
  : msg_(msg)
  {}
  Init_JointPose_joint5 joint4(::ros2_data::msg::JointPose::_joint4_type arg)
  {
    msg_.joint4 = std::move(arg);
    return Init_JointPose_joint5(msg_);
  }

private:
  ::ros2_data::msg::JointPose msg_;
};

class Init_JointPose_joint3
{
public:
  explicit Init_JointPose_joint3(::ros2_data::msg::JointPose & msg)
  : msg_(msg)
  {}
  Init_JointPose_joint4 joint3(::ros2_data::msg::JointPose::_joint3_type arg)
  {
    msg_.joint3 = std::move(arg);
    return Init_JointPose_joint4(msg_);
  }

private:
  ::ros2_data::msg::JointPose msg_;
};

class Init_JointPose_joint2
{
public:
  explicit Init_JointPose_joint2(::ros2_data::msg::JointPose & msg)
  : msg_(msg)
  {}
  Init_JointPose_joint3 joint2(::ros2_data::msg::JointPose::_joint2_type arg)
  {
    msg_.joint2 = std::move(arg);
    return Init_JointPose_joint3(msg_);
  }

private:
  ::ros2_data::msg::JointPose msg_;
};

class Init_JointPose_joint1
{
public:
  Init_JointPose_joint1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPose_joint2 joint1(::ros2_data::msg::JointPose::_joint1_type arg)
  {
    msg_.joint1 = std::move(arg);
    return Init_JointPose_joint2(msg_);
  }

private:
  ::ros2_data::msg::JointPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::msg::JointPose>()
{
  return ros2_data::msg::builder::Init_JointPose_joint1();
}

}  // namespace ros2_data

#endif  // ROS2_DATA__MSG__DETAIL__JOINT_POSE__BUILDER_HPP_
