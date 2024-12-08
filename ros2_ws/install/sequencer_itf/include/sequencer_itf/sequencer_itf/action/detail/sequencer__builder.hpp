// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sequencer_itf:action/Sequencer.idl
// generated code does not contain a copyright notice

#ifndef SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__BUILDER_HPP_
#define SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sequencer_itf/action/detail/sequencer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sequencer_itf
{

namespace action
{

namespace builder
{

class Init_Sequencer_Goal_commands
{
public:
  Init_Sequencer_Goal_commands()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sequencer_itf::action::Sequencer_Goal commands(::sequencer_itf::action::Sequencer_Goal::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sequencer_itf::action::Sequencer_Goal>()
{
  return sequencer_itf::action::builder::Init_Sequencer_Goal_commands();
}

}  // namespace sequencer_itf


namespace sequencer_itf
{

namespace action
{

namespace builder
{

class Init_Sequencer_Result_result
{
public:
  Init_Sequencer_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sequencer_itf::action::Sequencer_Result result(::sequencer_itf::action::Sequencer_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sequencer_itf::action::Sequencer_Result>()
{
  return sequencer_itf::action::builder::Init_Sequencer_Result_result();
}

}  // namespace sequencer_itf


namespace sequencer_itf
{

namespace action
{

namespace builder
{

class Init_Sequencer_Feedback_feedback
{
public:
  Init_Sequencer_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sequencer_itf::action::Sequencer_Feedback feedback(::sequencer_itf::action::Sequencer_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sequencer_itf::action::Sequencer_Feedback>()
{
  return sequencer_itf::action::builder::Init_Sequencer_Feedback_feedback();
}

}  // namespace sequencer_itf


namespace sequencer_itf
{

namespace action
{

namespace builder
{

class Init_Sequencer_SendGoal_Request_goal
{
public:
  explicit Init_Sequencer_SendGoal_Request_goal(::sequencer_itf::action::Sequencer_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::sequencer_itf::action::Sequencer_SendGoal_Request goal(::sequencer_itf::action::Sequencer_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_SendGoal_Request msg_;
};

class Init_Sequencer_SendGoal_Request_goal_id
{
public:
  Init_Sequencer_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequencer_SendGoal_Request_goal goal_id(::sequencer_itf::action::Sequencer_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Sequencer_SendGoal_Request_goal(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sequencer_itf::action::Sequencer_SendGoal_Request>()
{
  return sequencer_itf::action::builder::Init_Sequencer_SendGoal_Request_goal_id();
}

}  // namespace sequencer_itf


namespace sequencer_itf
{

namespace action
{

namespace builder
{

class Init_Sequencer_SendGoal_Response_stamp
{
public:
  explicit Init_Sequencer_SendGoal_Response_stamp(::sequencer_itf::action::Sequencer_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::sequencer_itf::action::Sequencer_SendGoal_Response stamp(::sequencer_itf::action::Sequencer_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_SendGoal_Response msg_;
};

class Init_Sequencer_SendGoal_Response_accepted
{
public:
  Init_Sequencer_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequencer_SendGoal_Response_stamp accepted(::sequencer_itf::action::Sequencer_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Sequencer_SendGoal_Response_stamp(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sequencer_itf::action::Sequencer_SendGoal_Response>()
{
  return sequencer_itf::action::builder::Init_Sequencer_SendGoal_Response_accepted();
}

}  // namespace sequencer_itf


namespace sequencer_itf
{

namespace action
{

namespace builder
{

class Init_Sequencer_GetResult_Request_goal_id
{
public:
  Init_Sequencer_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sequencer_itf::action::Sequencer_GetResult_Request goal_id(::sequencer_itf::action::Sequencer_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sequencer_itf::action::Sequencer_GetResult_Request>()
{
  return sequencer_itf::action::builder::Init_Sequencer_GetResult_Request_goal_id();
}

}  // namespace sequencer_itf


namespace sequencer_itf
{

namespace action
{

namespace builder
{

class Init_Sequencer_GetResult_Response_result
{
public:
  explicit Init_Sequencer_GetResult_Response_result(::sequencer_itf::action::Sequencer_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::sequencer_itf::action::Sequencer_GetResult_Response result(::sequencer_itf::action::Sequencer_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_GetResult_Response msg_;
};

class Init_Sequencer_GetResult_Response_status
{
public:
  Init_Sequencer_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequencer_GetResult_Response_result status(::sequencer_itf::action::Sequencer_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Sequencer_GetResult_Response_result(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sequencer_itf::action::Sequencer_GetResult_Response>()
{
  return sequencer_itf::action::builder::Init_Sequencer_GetResult_Response_status();
}

}  // namespace sequencer_itf


namespace sequencer_itf
{

namespace action
{

namespace builder
{

class Init_Sequencer_FeedbackMessage_feedback
{
public:
  explicit Init_Sequencer_FeedbackMessage_feedback(::sequencer_itf::action::Sequencer_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::sequencer_itf::action::Sequencer_FeedbackMessage feedback(::sequencer_itf::action::Sequencer_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_FeedbackMessage msg_;
};

class Init_Sequencer_FeedbackMessage_goal_id
{
public:
  Init_Sequencer_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequencer_FeedbackMessage_feedback goal_id(::sequencer_itf::action::Sequencer_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Sequencer_FeedbackMessage_feedback(msg_);
  }

private:
  ::sequencer_itf::action::Sequencer_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sequencer_itf::action::Sequencer_FeedbackMessage>()
{
  return sequencer_itf::action::builder::Init_Sequencer_FeedbackMessage_goal_id();
}

}  // namespace sequencer_itf

#endif  // SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__BUILDER_HPP_
