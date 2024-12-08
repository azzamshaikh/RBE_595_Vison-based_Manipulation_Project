// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from capgrasp_itf:srv/CAPGrasp.idl
// generated code does not contain a copyright notice

#ifndef CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__STRUCT_HPP_
#define CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__capgrasp_itf__srv__CAPGrasp_Request __attribute__((deprecated))
#else
# define DEPRECATED__capgrasp_itf__srv__CAPGrasp_Request __declspec(deprecated)
#endif

namespace capgrasp_itf
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CAPGrasp_Request_
{
  using Type = CAPGrasp_Request_<ContainerAllocator>;

  explicit CAPGrasp_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = false;
    }
  }

  explicit CAPGrasp_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = false;
    }
  }

  // field types and members
  using _start_type =
    bool;
  _start_type start;

  // setters for named parameter idiom
  Type & set__start(
    const bool & _arg)
  {
    this->start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capgrasp_itf__srv__CAPGrasp_Request
    std::shared_ptr<capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capgrasp_itf__srv__CAPGrasp_Request
    std::shared_ptr<capgrasp_itf::srv::CAPGrasp_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CAPGrasp_Request_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    return true;
  }
  bool operator!=(const CAPGrasp_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CAPGrasp_Request_

// alias to use template instance with default allocator
using CAPGrasp_Request =
  capgrasp_itf::srv::CAPGrasp_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace capgrasp_itf


#ifndef _WIN32
# define DEPRECATED__capgrasp_itf__srv__CAPGrasp_Response __attribute__((deprecated))
#else
# define DEPRECATED__capgrasp_itf__srv__CAPGrasp_Response __declspec(deprecated)
#endif

namespace capgrasp_itf
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CAPGrasp_Response_
{
  using Type = CAPGrasp_Response_<ContainerAllocator>;

  explicit CAPGrasp_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CAPGrasp_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _xyz_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _xyz_type xyz;

  // setters for named parameter idiom
  Type & set__xyz(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->xyz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__capgrasp_itf__srv__CAPGrasp_Response
    std::shared_ptr<capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__capgrasp_itf__srv__CAPGrasp_Response
    std::shared_ptr<capgrasp_itf::srv::CAPGrasp_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CAPGrasp_Response_ & other) const
  {
    if (this->xyz != other.xyz) {
      return false;
    }
    return true;
  }
  bool operator!=(const CAPGrasp_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CAPGrasp_Response_

// alias to use template instance with default allocator
using CAPGrasp_Response =
  capgrasp_itf::srv::CAPGrasp_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace capgrasp_itf

namespace capgrasp_itf
{

namespace srv
{

struct CAPGrasp
{
  using Request = capgrasp_itf::srv::CAPGrasp_Request;
  using Response = capgrasp_itf::srv::CAPGrasp_Response;
};

}  // namespace srv

}  // namespace capgrasp_itf

#endif  // CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__STRUCT_HPP_
