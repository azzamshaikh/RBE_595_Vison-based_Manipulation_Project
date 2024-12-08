// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_grasping:action/Attacher.idl
// generated code does not contain a copyright notice

#ifndef ROS2_GRASPING__ACTION__DETAIL__ATTACHER__BUILDER_HPP_
#define ROS2_GRASPING__ACTION__DETAIL__ATTACHER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_grasping/action/detail/attacher__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_grasping
{

namespace action
{

namespace builder
{

class Init_Attacher_Goal_endeffector
{
public:
  explicit Init_Attacher_Goal_endeffector(::ros2_grasping::action::Attacher_Goal & msg)
  : msg_(msg)
  {}
  ::ros2_grasping::action::Attacher_Goal endeffector(::ros2_grasping::action::Attacher_Goal::_endeffector_type arg)
  {
    msg_.endeffector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_Goal msg_;
};

class Init_Attacher_Goal_object
{
public:
  Init_Attacher_Goal_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attacher_Goal_endeffector object(::ros2_grasping::action::Attacher_Goal::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_Attacher_Goal_endeffector(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_grasping::action::Attacher_Goal>()
{
  return ros2_grasping::action::builder::Init_Attacher_Goal_object();
}

}  // namespace ros2_grasping


namespace ros2_grasping
{

namespace action
{

namespace builder
{

class Init_Attacher_Result_result
{
public:
  Init_Attacher_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_grasping::action::Attacher_Result result(::ros2_grasping::action::Attacher_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_grasping::action::Attacher_Result>()
{
  return ros2_grasping::action::builder::Init_Attacher_Result_result();
}

}  // namespace ros2_grasping


namespace ros2_grasping
{

namespace action
{

namespace builder
{

class Init_Attacher_Feedback_feedback
{
public:
  Init_Attacher_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_grasping::action::Attacher_Feedback feedback(::ros2_grasping::action::Attacher_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_grasping::action::Attacher_Feedback>()
{
  return ros2_grasping::action::builder::Init_Attacher_Feedback_feedback();
}

}  // namespace ros2_grasping


namespace ros2_grasping
{

namespace action
{

namespace builder
{

class Init_Attacher_SendGoal_Request_goal
{
public:
  explicit Init_Attacher_SendGoal_Request_goal(::ros2_grasping::action::Attacher_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2_grasping::action::Attacher_SendGoal_Request goal(::ros2_grasping::action::Attacher_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_SendGoal_Request msg_;
};

class Init_Attacher_SendGoal_Request_goal_id
{
public:
  Init_Attacher_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attacher_SendGoal_Request_goal goal_id(::ros2_grasping::action::Attacher_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Attacher_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_grasping::action::Attacher_SendGoal_Request>()
{
  return ros2_grasping::action::builder::Init_Attacher_SendGoal_Request_goal_id();
}

}  // namespace ros2_grasping


namespace ros2_grasping
{

namespace action
{

namespace builder
{

class Init_Attacher_SendGoal_Response_stamp
{
public:
  explicit Init_Attacher_SendGoal_Response_stamp(::ros2_grasping::action::Attacher_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2_grasping::action::Attacher_SendGoal_Response stamp(::ros2_grasping::action::Attacher_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_SendGoal_Response msg_;
};

class Init_Attacher_SendGoal_Response_accepted
{
public:
  Init_Attacher_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attacher_SendGoal_Response_stamp accepted(::ros2_grasping::action::Attacher_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Attacher_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_grasping::action::Attacher_SendGoal_Response>()
{
  return ros2_grasping::action::builder::Init_Attacher_SendGoal_Response_accepted();
}

}  // namespace ros2_grasping


namespace ros2_grasping
{

namespace action
{

namespace builder
{

class Init_Attacher_GetResult_Request_goal_id
{
public:
  Init_Attacher_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_grasping::action::Attacher_GetResult_Request goal_id(::ros2_grasping::action::Attacher_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_grasping::action::Attacher_GetResult_Request>()
{
  return ros2_grasping::action::builder::Init_Attacher_GetResult_Request_goal_id();
}

}  // namespace ros2_grasping


namespace ros2_grasping
{

namespace action
{

namespace builder
{

class Init_Attacher_GetResult_Response_result
{
public:
  explicit Init_Attacher_GetResult_Response_result(::ros2_grasping::action::Attacher_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2_grasping::action::Attacher_GetResult_Response result(::ros2_grasping::action::Attacher_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_GetResult_Response msg_;
};

class Init_Attacher_GetResult_Response_status
{
public:
  Init_Attacher_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attacher_GetResult_Response_result status(::ros2_grasping::action::Attacher_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Attacher_GetResult_Response_result(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_grasping::action::Attacher_GetResult_Response>()
{
  return ros2_grasping::action::builder::Init_Attacher_GetResult_Response_status();
}

}  // namespace ros2_grasping


namespace ros2_grasping
{

namespace action
{

namespace builder
{

class Init_Attacher_FeedbackMessage_feedback
{
public:
  explicit Init_Attacher_FeedbackMessage_feedback(::ros2_grasping::action::Attacher_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2_grasping::action::Attacher_FeedbackMessage feedback(::ros2_grasping::action::Attacher_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_FeedbackMessage msg_;
};

class Init_Attacher_FeedbackMessage_goal_id
{
public:
  Init_Attacher_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attacher_FeedbackMessage_feedback goal_id(::ros2_grasping::action::Attacher_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Attacher_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2_grasping::action::Attacher_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_grasping::action::Attacher_FeedbackMessage>()
{
  return ros2_grasping::action::builder::Init_Attacher_FeedbackMessage_goal_id();
}

}  // namespace ros2_grasping

#endif  // ROS2_GRASPING__ACTION__DETAIL__ATTACHER__BUILDER_HPP_
