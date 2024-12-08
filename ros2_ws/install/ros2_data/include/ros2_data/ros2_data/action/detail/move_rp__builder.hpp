// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_data:action/MoveRP.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__ACTION__DETAIL__MOVE_RP__BUILDER_HPP_
#define ROS2_DATA__ACTION__DETAIL__MOVE_RP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_data/action/detail/move_rp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveRP_Goal_speed
{
public:
  explicit Init_MoveRP_Goal_speed(::ros2_data::action::MoveRP_Goal & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveRP_Goal speed(::ros2_data::action::MoveRP_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Goal msg_;
};

class Init_MoveRP_Goal_z
{
public:
  explicit Init_MoveRP_Goal_z(::ros2_data::action::MoveRP_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveRP_Goal_speed z(::ros2_data::action::MoveRP_Goal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MoveRP_Goal_speed(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Goal msg_;
};

class Init_MoveRP_Goal_y
{
public:
  explicit Init_MoveRP_Goal_y(::ros2_data::action::MoveRP_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveRP_Goal_z y(::ros2_data::action::MoveRP_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MoveRP_Goal_z(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Goal msg_;
};

class Init_MoveRP_Goal_x
{
public:
  explicit Init_MoveRP_Goal_x(::ros2_data::action::MoveRP_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveRP_Goal_y x(::ros2_data::action::MoveRP_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MoveRP_Goal_y(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Goal msg_;
};

class Init_MoveRP_Goal_yaw
{
public:
  explicit Init_MoveRP_Goal_yaw(::ros2_data::action::MoveRP_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveRP_Goal_x yaw(::ros2_data::action::MoveRP_Goal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_MoveRP_Goal_x(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Goal msg_;
};

class Init_MoveRP_Goal_pitch
{
public:
  explicit Init_MoveRP_Goal_pitch(::ros2_data::action::MoveRP_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveRP_Goal_yaw pitch(::ros2_data::action::MoveRP_Goal::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_MoveRP_Goal_yaw(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Goal msg_;
};

class Init_MoveRP_Goal_roll
{
public:
  Init_MoveRP_Goal_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRP_Goal_pitch roll(::ros2_data::action::MoveRP_Goal::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_MoveRP_Goal_pitch(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveRP_Goal>()
{
  return ros2_data::action::builder::Init_MoveRP_Goal_roll();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveRP_Result_result
{
public:
  Init_MoveRP_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::action::MoveRP_Result result(::ros2_data::action::MoveRP_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveRP_Result>()
{
  return ros2_data::action::builder::Init_MoveRP_Result_result();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveRP_Feedback_feedback
{
public:
  Init_MoveRP_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::action::MoveRP_Feedback feedback(::ros2_data::action::MoveRP_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveRP_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveRP_Feedback>()
{
  return ros2_data::action::builder::Init_MoveRP_Feedback_feedback();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveRP_SendGoal_Request_goal
{
public:
  explicit Init_MoveRP_SendGoal_Request_goal(::ros2_data::action::MoveRP_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveRP_SendGoal_Request goal(::ros2_data::action::MoveRP_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveRP_SendGoal_Request msg_;
};

class Init_MoveRP_SendGoal_Request_goal_id
{
public:
  Init_MoveRP_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRP_SendGoal_Request_goal goal_id(::ros2_data::action::MoveRP_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRP_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2_data::action::MoveRP_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveRP_SendGoal_Request>()
{
  return ros2_data::action::builder::Init_MoveRP_SendGoal_Request_goal_id();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveRP_SendGoal_Response_stamp
{
public:
  explicit Init_MoveRP_SendGoal_Response_stamp(::ros2_data::action::MoveRP_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveRP_SendGoal_Response stamp(::ros2_data::action::MoveRP_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveRP_SendGoal_Response msg_;
};

class Init_MoveRP_SendGoal_Response_accepted
{
public:
  Init_MoveRP_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRP_SendGoal_Response_stamp accepted(::ros2_data::action::MoveRP_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveRP_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2_data::action::MoveRP_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveRP_SendGoal_Response>()
{
  return ros2_data::action::builder::Init_MoveRP_SendGoal_Response_accepted();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveRP_GetResult_Request_goal_id
{
public:
  Init_MoveRP_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::action::MoveRP_GetResult_Request goal_id(::ros2_data::action::MoveRP_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveRP_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveRP_GetResult_Request>()
{
  return ros2_data::action::builder::Init_MoveRP_GetResult_Request_goal_id();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveRP_GetResult_Response_result
{
public:
  explicit Init_MoveRP_GetResult_Response_result(::ros2_data::action::MoveRP_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveRP_GetResult_Response result(::ros2_data::action::MoveRP_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveRP_GetResult_Response msg_;
};

class Init_MoveRP_GetResult_Response_status
{
public:
  Init_MoveRP_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRP_GetResult_Response_result status(::ros2_data::action::MoveRP_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveRP_GetResult_Response_result(msg_);
  }

private:
  ::ros2_data::action::MoveRP_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveRP_GetResult_Response>()
{
  return ros2_data::action::builder::Init_MoveRP_GetResult_Response_status();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveRP_FeedbackMessage_feedback
{
public:
  explicit Init_MoveRP_FeedbackMessage_feedback(::ros2_data::action::MoveRP_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveRP_FeedbackMessage feedback(::ros2_data::action::MoveRP_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveRP_FeedbackMessage msg_;
};

class Init_MoveRP_FeedbackMessage_goal_id
{
public:
  Init_MoveRP_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRP_FeedbackMessage_feedback goal_id(::ros2_data::action::MoveRP_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRP_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2_data::action::MoveRP_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveRP_FeedbackMessage>()
{
  return ros2_data::action::builder::Init_MoveRP_FeedbackMessage_goal_id();
}

}  // namespace ros2_data

#endif  // ROS2_DATA__ACTION__DETAIL__MOVE_RP__BUILDER_HPP_
