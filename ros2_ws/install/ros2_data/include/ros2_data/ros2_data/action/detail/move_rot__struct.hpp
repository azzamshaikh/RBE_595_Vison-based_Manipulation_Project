// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_data:action/MoveROT.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__ACTION__DETAIL__MOVE_ROT__STRUCT_HPP_
#define ROS2_DATA__ACTION__DETAIL__MOVE_ROT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_data__action__MoveROT_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__action__MoveROT_Goal __declspec(deprecated)
#endif

namespace ros2_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveROT_Goal_
{
  using Type = MoveROT_Goal_<ContainerAllocator>;

  explicit MoveROT_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->speed = 0.0;
    }
  }

  explicit MoveROT_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->speed = 0.0;
    }
  }

  // field types and members
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _speed_type =
    double;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::action::MoveROT_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::action::MoveROT_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__action__MoveROT_Goal
    std::shared_ptr<ros2_data::action::MoveROT_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__action__MoveROT_Goal
    std::shared_ptr<ros2_data::action::MoveROT_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveROT_Goal_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveROT_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveROT_Goal_

// alias to use template instance with default allocator
using MoveROT_Goal =
  ros2_data::action::MoveROT_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_data


#ifndef _WIN32
# define DEPRECATED__ros2_data__action__MoveROT_Result __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__action__MoveROT_Result __declspec(deprecated)
#endif

namespace ros2_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveROT_Result_
{
  using Type = MoveROT_Result_<ContainerAllocator>;

  explicit MoveROT_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit MoveROT_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::action::MoveROT_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::action::MoveROT_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__action__MoveROT_Result
    std::shared_ptr<ros2_data::action::MoveROT_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__action__MoveROT_Result
    std::shared_ptr<ros2_data::action::MoveROT_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveROT_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveROT_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveROT_Result_

// alias to use template instance with default allocator
using MoveROT_Result =
  ros2_data::action::MoveROT_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_data


#ifndef _WIN32
# define DEPRECATED__ros2_data__action__MoveROT_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__action__MoveROT_Feedback __declspec(deprecated)
#endif

namespace ros2_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveROT_Feedback_
{
  using Type = MoveROT_Feedback_<ContainerAllocator>;

  explicit MoveROT_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  explicit MoveROT_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  // field types and members
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::action::MoveROT_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::action::MoveROT_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__action__MoveROT_Feedback
    std::shared_ptr<ros2_data::action::MoveROT_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__action__MoveROT_Feedback
    std::shared_ptr<ros2_data::action::MoveROT_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveROT_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveROT_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveROT_Feedback_

// alias to use template instance with default allocator
using MoveROT_Feedback =
  ros2_data::action::MoveROT_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_data


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ros2_data/action/detail/move_rot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_data__action__MoveROT_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__action__MoveROT_SendGoal_Request __declspec(deprecated)
#endif

namespace ros2_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveROT_SendGoal_Request_
{
  using Type = MoveROT_SendGoal_Request_<ContainerAllocator>;

  explicit MoveROT_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveROT_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ros2_data::action::MoveROT_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ros2_data::action::MoveROT_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__action__MoveROT_SendGoal_Request
    std::shared_ptr<ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__action__MoveROT_SendGoal_Request
    std::shared_ptr<ros2_data::action::MoveROT_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveROT_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveROT_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveROT_SendGoal_Request_

// alias to use template instance with default allocator
using MoveROT_SendGoal_Request =
  ros2_data::action::MoveROT_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_data


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_data__action__MoveROT_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__action__MoveROT_SendGoal_Response __declspec(deprecated)
#endif

namespace ros2_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveROT_SendGoal_Response_
{
  using Type = MoveROT_SendGoal_Response_<ContainerAllocator>;

  explicit MoveROT_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveROT_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__action__MoveROT_SendGoal_Response
    std::shared_ptr<ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__action__MoveROT_SendGoal_Response
    std::shared_ptr<ros2_data::action::MoveROT_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveROT_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveROT_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveROT_SendGoal_Response_

// alias to use template instance with default allocator
using MoveROT_SendGoal_Response =
  ros2_data::action::MoveROT_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_data

namespace ros2_data
{

namespace action
{

struct MoveROT_SendGoal
{
  using Request = ros2_data::action::MoveROT_SendGoal_Request;
  using Response = ros2_data::action::MoveROT_SendGoal_Response;
};

}  // namespace action

}  // namespace ros2_data


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_data__action__MoveROT_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__action__MoveROT_GetResult_Request __declspec(deprecated)
#endif

namespace ros2_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveROT_GetResult_Request_
{
  using Type = MoveROT_GetResult_Request_<ContainerAllocator>;

  explicit MoveROT_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveROT_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__action__MoveROT_GetResult_Request
    std::shared_ptr<ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__action__MoveROT_GetResult_Request
    std::shared_ptr<ros2_data::action::MoveROT_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveROT_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveROT_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveROT_GetResult_Request_

// alias to use template instance with default allocator
using MoveROT_GetResult_Request =
  ros2_data::action::MoveROT_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_data


// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_data/action/detail/move_rot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_data__action__MoveROT_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__action__MoveROT_GetResult_Response __declspec(deprecated)
#endif

namespace ros2_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveROT_GetResult_Response_
{
  using Type = MoveROT_GetResult_Response_<ContainerAllocator>;

  explicit MoveROT_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveROT_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ros2_data::action::MoveROT_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ros2_data::action::MoveROT_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__action__MoveROT_GetResult_Response
    std::shared_ptr<ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__action__MoveROT_GetResult_Response
    std::shared_ptr<ros2_data::action::MoveROT_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveROT_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveROT_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveROT_GetResult_Response_

// alias to use template instance with default allocator
using MoveROT_GetResult_Response =
  ros2_data::action::MoveROT_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_data

namespace ros2_data
{

namespace action
{

struct MoveROT_GetResult
{
  using Request = ros2_data::action::MoveROT_GetResult_Request;
  using Response = ros2_data::action::MoveROT_GetResult_Response;
};

}  // namespace action

}  // namespace ros2_data


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ros2_data/action/detail/move_rot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_data__action__MoveROT_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__action__MoveROT_FeedbackMessage __declspec(deprecated)
#endif

namespace ros2_data
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveROT_FeedbackMessage_
{
  using Type = MoveROT_FeedbackMessage_<ContainerAllocator>;

  explicit MoveROT_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveROT_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ros2_data::action::MoveROT_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ros2_data::action::MoveROT_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__action__MoveROT_FeedbackMessage
    std::shared_ptr<ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__action__MoveROT_FeedbackMessage
    std::shared_ptr<ros2_data::action::MoveROT_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveROT_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveROT_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveROT_FeedbackMessage_

// alias to use template instance with default allocator
using MoveROT_FeedbackMessage =
  ros2_data::action::MoveROT_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_data

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ros2_data
{

namespace action
{

struct MoveROT
{
  /// The goal message defined in the action definition.
  using Goal = ros2_data::action::MoveROT_Goal;
  /// The result message defined in the action definition.
  using Result = ros2_data::action::MoveROT_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ros2_data::action::MoveROT_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ros2_data::action::MoveROT_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ros2_data::action::MoveROT_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ros2_data::action::MoveROT_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveROT MoveROT;

}  // namespace action

}  // namespace ros2_data

#endif  // ROS2_DATA__ACTION__DETAIL__MOVE_ROT__STRUCT_HPP_
