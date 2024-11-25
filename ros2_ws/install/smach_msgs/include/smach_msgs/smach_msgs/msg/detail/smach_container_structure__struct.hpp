// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__STRUCT_HPP_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__smach_msgs__msg__SmachContainerStructure __attribute__((deprecated))
#else
# define DEPRECATED__smach_msgs__msg__SmachContainerStructure __declspec(deprecated)
#endif

namespace smach_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SmachContainerStructure_
{
  using Type = SmachContainerStructure_<ContainerAllocator>;

  explicit SmachContainerStructure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
    }
  }

  explicit SmachContainerStructure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;
  using _children_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _children_type children;
  using _internal_outcomes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _internal_outcomes_type internal_outcomes;
  using _outcomes_from_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _outcomes_from_type outcomes_from;
  using _outcomes_to_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _outcomes_to_type outcomes_to;
  using _container_outcomes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _container_outcomes_type container_outcomes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__children(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->children = _arg;
    return *this;
  }
  Type & set__internal_outcomes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->internal_outcomes = _arg;
    return *this;
  }
  Type & set__outcomes_from(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->outcomes_from = _arg;
    return *this;
  }
  Type & set__outcomes_to(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->outcomes_to = _arg;
    return *this;
  }
  Type & set__container_outcomes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->container_outcomes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smach_msgs::msg::SmachContainerStructure_<ContainerAllocator> *;
  using ConstRawPtr =
    const smach_msgs::msg::SmachContainerStructure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smach_msgs::msg::SmachContainerStructure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smach_msgs::msg::SmachContainerStructure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smach_msgs::msg::SmachContainerStructure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smach_msgs::msg::SmachContainerStructure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smach_msgs::msg::SmachContainerStructure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smach_msgs::msg::SmachContainerStructure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smach_msgs::msg::SmachContainerStructure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smach_msgs::msg::SmachContainerStructure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smach_msgs__msg__SmachContainerStructure
    std::shared_ptr<smach_msgs::msg::SmachContainerStructure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smach_msgs__msg__SmachContainerStructure
    std::shared_ptr<smach_msgs::msg::SmachContainerStructure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SmachContainerStructure_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->children != other.children) {
      return false;
    }
    if (this->internal_outcomes != other.internal_outcomes) {
      return false;
    }
    if (this->outcomes_from != other.outcomes_from) {
      return false;
    }
    if (this->outcomes_to != other.outcomes_to) {
      return false;
    }
    if (this->container_outcomes != other.container_outcomes) {
      return false;
    }
    return true;
  }
  bool operator!=(const SmachContainerStructure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SmachContainerStructure_

// alias to use template instance with default allocator
using SmachContainerStructure =
  smach_msgs::msg::SmachContainerStructure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smach_msgs

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__STRUCT_HPP_
