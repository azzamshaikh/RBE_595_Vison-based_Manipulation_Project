// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_grasping:action/Attacher.idl
// generated code does not contain a copyright notice

#ifndef ROS2_GRASPING__ACTION__DETAIL__ATTACHER__STRUCT_HPP_
#define ROS2_GRASPING__ACTION__DETAIL__ATTACHER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_grasping__action__Attacher_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ros2_grasping__action__Attacher_Goal __declspec(deprecated)
#endif

namespace ros2_grasping
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Attacher_Goal_
{
  using Type = Attacher_Goal_<ContainerAllocator>;

  explicit Attacher_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object = "";
      this->endeffector = "";
    }
  }

  explicit Attacher_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_alloc),
    endeffector(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object = "";
      this->endeffector = "";
    }
  }

  // field types and members
  using _object_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_type object;
  using _endeffector_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _endeffector_type endeffector;

  // setters for named parameter idiom
  Type & set__object(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__endeffector(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->endeffector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_grasping::action::Attacher_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_grasping::action::Attacher_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_grasping__action__Attacher_Goal
    std::shared_ptr<ros2_grasping::action::Attacher_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_grasping__action__Attacher_Goal
    std::shared_ptr<ros2_grasping::action::Attacher_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacher_Goal_ & other) const
  {
    if (this->object != other.object) {
      return false;
    }
    if (this->endeffector != other.endeffector) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacher_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacher_Goal_

// alias to use template instance with default allocator
using Attacher_Goal =
  ros2_grasping::action::Attacher_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_grasping


#ifndef _WIN32
# define DEPRECATED__ros2_grasping__action__Attacher_Result __attribute__((deprecated))
#else
# define DEPRECATED__ros2_grasping__action__Attacher_Result __declspec(deprecated)
#endif

namespace ros2_grasping
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Attacher_Result_
{
  using Type = Attacher_Result_<ContainerAllocator>;

  explicit Attacher_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit Attacher_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ros2_grasping::action::Attacher_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_grasping::action::Attacher_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_grasping__action__Attacher_Result
    std::shared_ptr<ros2_grasping::action::Attacher_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_grasping__action__Attacher_Result
    std::shared_ptr<ros2_grasping::action::Attacher_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacher_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacher_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacher_Result_

// alias to use template instance with default allocator
using Attacher_Result =
  ros2_grasping::action::Attacher_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_grasping


#ifndef _WIN32
# define DEPRECATED__ros2_grasping__action__Attacher_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ros2_grasping__action__Attacher_Feedback __declspec(deprecated)
#endif

namespace ros2_grasping
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Attacher_Feedback_
{
  using Type = Attacher_Feedback_<ContainerAllocator>;

  explicit Attacher_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  explicit Attacher_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ros2_grasping::action::Attacher_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_grasping::action::Attacher_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_grasping__action__Attacher_Feedback
    std::shared_ptr<ros2_grasping::action::Attacher_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_grasping__action__Attacher_Feedback
    std::shared_ptr<ros2_grasping::action::Attacher_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacher_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacher_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacher_Feedback_

// alias to use template instance with default allocator
using Attacher_Feedback =
  ros2_grasping::action::Attacher_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_grasping


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ros2_grasping/action/detail/attacher__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_grasping__action__Attacher_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_grasping__action__Attacher_SendGoal_Request __declspec(deprecated)
#endif

namespace ros2_grasping
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Attacher_SendGoal_Request_
{
  using Type = Attacher_SendGoal_Request_<ContainerAllocator>;

  explicit Attacher_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Attacher_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ros2_grasping::action::Attacher_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ros2_grasping::action::Attacher_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_grasping__action__Attacher_SendGoal_Request
    std::shared_ptr<ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_grasping__action__Attacher_SendGoal_Request
    std::shared_ptr<ros2_grasping::action::Attacher_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacher_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacher_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacher_SendGoal_Request_

// alias to use template instance with default allocator
using Attacher_SendGoal_Request =
  ros2_grasping::action::Attacher_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_grasping


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_grasping__action__Attacher_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_grasping__action__Attacher_SendGoal_Response __declspec(deprecated)
#endif

namespace ros2_grasping
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Attacher_SendGoal_Response_
{
  using Type = Attacher_SendGoal_Response_<ContainerAllocator>;

  explicit Attacher_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Attacher_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_grasping__action__Attacher_SendGoal_Response
    std::shared_ptr<ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_grasping__action__Attacher_SendGoal_Response
    std::shared_ptr<ros2_grasping::action::Attacher_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacher_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacher_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacher_SendGoal_Response_

// alias to use template instance with default allocator
using Attacher_SendGoal_Response =
  ros2_grasping::action::Attacher_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_grasping

namespace ros2_grasping
{

namespace action
{

struct Attacher_SendGoal
{
  using Request = ros2_grasping::action::Attacher_SendGoal_Request;
  using Response = ros2_grasping::action::Attacher_SendGoal_Response;
};

}  // namespace action

}  // namespace ros2_grasping


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_grasping__action__Attacher_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_grasping__action__Attacher_GetResult_Request __declspec(deprecated)
#endif

namespace ros2_grasping
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Attacher_GetResult_Request_
{
  using Type = Attacher_GetResult_Request_<ContainerAllocator>;

  explicit Attacher_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Attacher_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_grasping__action__Attacher_GetResult_Request
    std::shared_ptr<ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_grasping__action__Attacher_GetResult_Request
    std::shared_ptr<ros2_grasping::action::Attacher_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacher_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacher_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacher_GetResult_Request_

// alias to use template instance with default allocator
using Attacher_GetResult_Request =
  ros2_grasping::action::Attacher_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_grasping


// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_grasping/action/detail/attacher__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_grasping__action__Attacher_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_grasping__action__Attacher_GetResult_Response __declspec(deprecated)
#endif

namespace ros2_grasping
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Attacher_GetResult_Response_
{
  using Type = Attacher_GetResult_Response_<ContainerAllocator>;

  explicit Attacher_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Attacher_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ros2_grasping::action::Attacher_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ros2_grasping::action::Attacher_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_grasping__action__Attacher_GetResult_Response
    std::shared_ptr<ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_grasping__action__Attacher_GetResult_Response
    std::shared_ptr<ros2_grasping::action::Attacher_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacher_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacher_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacher_GetResult_Response_

// alias to use template instance with default allocator
using Attacher_GetResult_Response =
  ros2_grasping::action::Attacher_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_grasping

namespace ros2_grasping
{

namespace action
{

struct Attacher_GetResult
{
  using Request = ros2_grasping::action::Attacher_GetResult_Request;
  using Response = ros2_grasping::action::Attacher_GetResult_Response;
};

}  // namespace action

}  // namespace ros2_grasping


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ros2_grasping/action/detail/attacher__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_grasping__action__Attacher_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ros2_grasping__action__Attacher_FeedbackMessage __declspec(deprecated)
#endif

namespace ros2_grasping
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Attacher_FeedbackMessage_
{
  using Type = Attacher_FeedbackMessage_<ContainerAllocator>;

  explicit Attacher_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Attacher_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ros2_grasping::action::Attacher_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ros2_grasping::action::Attacher_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_grasping__action__Attacher_FeedbackMessage
    std::shared_ptr<ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_grasping__action__Attacher_FeedbackMessage
    std::shared_ptr<ros2_grasping::action::Attacher_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacher_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacher_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacher_FeedbackMessage_

// alias to use template instance with default allocator
using Attacher_FeedbackMessage =
  ros2_grasping::action::Attacher_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ros2_grasping

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ros2_grasping
{

namespace action
{

struct Attacher
{
  /// The goal message defined in the action definition.
  using Goal = ros2_grasping::action::Attacher_Goal;
  /// The result message defined in the action definition.
  using Result = ros2_grasping::action::Attacher_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ros2_grasping::action::Attacher_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ros2_grasping::action::Attacher_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ros2_grasping::action::Attacher_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ros2_grasping::action::Attacher_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Attacher Attacher;

}  // namespace action

}  // namespace ros2_grasping

#endif  // ROS2_GRASPING__ACTION__DETAIL__ATTACHER__STRUCT_HPP_
