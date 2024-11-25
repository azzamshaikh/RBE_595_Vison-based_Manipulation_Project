// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smach_msgs:msg/SmachContainerStatus.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__STRUCT_HPP_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__STRUCT_HPP_

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
# define DEPRECATED__smach_msgs__msg__SmachContainerStatus __attribute__((deprecated))
#else
# define DEPRECATED__smach_msgs__msg__SmachContainerStatus __declspec(deprecated)
#endif

namespace smach_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SmachContainerStatus_
{
  using Type = SmachContainerStatus_<ContainerAllocator>;

  explicit SmachContainerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
      this->info = "";
    }
  }

  explicit SmachContainerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    path(_alloc),
    info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
      this->info = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;
  using _initial_states_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _initial_states_type initial_states;
  using _active_states_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_states_type active_states;
  using _local_data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _local_data_type local_data;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

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
  Type & set__initial_states(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->initial_states = _arg;
    return *this;
  }
  Type & set__active_states(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_states = _arg;
    return *this;
  }
  Type & set__local_data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->local_data = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smach_msgs::msg::SmachContainerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const smach_msgs::msg::SmachContainerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smach_msgs::msg::SmachContainerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smach_msgs::msg::SmachContainerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smach_msgs::msg::SmachContainerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smach_msgs::msg::SmachContainerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smach_msgs::msg::SmachContainerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smach_msgs::msg::SmachContainerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smach_msgs::msg::SmachContainerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smach_msgs::msg::SmachContainerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smach_msgs__msg__SmachContainerStatus
    std::shared_ptr<smach_msgs::msg::SmachContainerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smach_msgs__msg__SmachContainerStatus
    std::shared_ptr<smach_msgs::msg::SmachContainerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SmachContainerStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->initial_states != other.initial_states) {
      return false;
    }
    if (this->active_states != other.active_states) {
      return false;
    }
    if (this->local_data != other.local_data) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const SmachContainerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SmachContainerStatus_

// alias to use template instance with default allocator
using SmachContainerStatus =
  smach_msgs::msg::SmachContainerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smach_msgs

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__STRUCT_HPP_
