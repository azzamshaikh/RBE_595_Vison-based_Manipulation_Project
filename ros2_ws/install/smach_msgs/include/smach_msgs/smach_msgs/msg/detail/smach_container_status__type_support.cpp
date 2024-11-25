// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from smach_msgs:msg/SmachContainerStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "smach_msgs/msg/detail/smach_container_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace smach_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SmachContainerStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) smach_msgs::msg::SmachContainerStatus(_init);
}

void SmachContainerStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<smach_msgs::msg::SmachContainerStatus *>(message_memory);
  typed_message->~SmachContainerStatus();
}

size_t size_function__SmachContainerStatus__initial_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SmachContainerStatus__initial_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SmachContainerStatus__initial_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SmachContainerStatus__initial_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SmachContainerStatus__initial_states(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SmachContainerStatus__initial_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SmachContainerStatus__initial_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SmachContainerStatus__initial_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SmachContainerStatus__active_states(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SmachContainerStatus__active_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SmachContainerStatus__active_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SmachContainerStatus__active_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SmachContainerStatus__active_states(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SmachContainerStatus__active_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SmachContainerStatus__active_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SmachContainerStatus__active_states(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SmachContainerStatus__local_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SmachContainerStatus__local_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SmachContainerStatus__local_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SmachContainerStatus__local_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SmachContainerStatus__local_data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SmachContainerStatus__local_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SmachContainerStatus__local_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SmachContainerStatus__local_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SmachContainerStatus_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStatus, path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "initial_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStatus, initial_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__SmachContainerStatus__initial_states,  // size() function pointer
    get_const_function__SmachContainerStatus__initial_states,  // get_const(index) function pointer
    get_function__SmachContainerStatus__initial_states,  // get(index) function pointer
    fetch_function__SmachContainerStatus__initial_states,  // fetch(index, &value) function pointer
    assign_function__SmachContainerStatus__initial_states,  // assign(index, value) function pointer
    resize_function__SmachContainerStatus__initial_states  // resize(index) function pointer
  },
  {
    "active_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStatus, active_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__SmachContainerStatus__active_states,  // size() function pointer
    get_const_function__SmachContainerStatus__active_states,  // get_const(index) function pointer
    get_function__SmachContainerStatus__active_states,  // get(index) function pointer
    fetch_function__SmachContainerStatus__active_states,  // fetch(index, &value) function pointer
    assign_function__SmachContainerStatus__active_states,  // assign(index, value) function pointer
    resize_function__SmachContainerStatus__active_states  // resize(index) function pointer
  },
  {
    "local_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStatus, local_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__SmachContainerStatus__local_data,  // size() function pointer
    get_const_function__SmachContainerStatus__local_data,  // get_const(index) function pointer
    get_function__SmachContainerStatus__local_data,  // get(index) function pointer
    fetch_function__SmachContainerStatus__local_data,  // fetch(index, &value) function pointer
    assign_function__SmachContainerStatus__local_data,  // assign(index, value) function pointer
    resize_function__SmachContainerStatus__local_data  // resize(index) function pointer
  },
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStatus, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SmachContainerStatus_message_members = {
  "smach_msgs::msg",  // message namespace
  "SmachContainerStatus",  // message name
  6,  // number of fields
  sizeof(smach_msgs::msg::SmachContainerStatus),
  SmachContainerStatus_message_member_array,  // message members
  SmachContainerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SmachContainerStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SmachContainerStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SmachContainerStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace smach_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<smach_msgs::msg::SmachContainerStatus>()
{
  return &::smach_msgs::msg::rosidl_typesupport_introspection_cpp::SmachContainerStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, smach_msgs, msg, SmachContainerStatus)() {
  return &::smach_msgs::msg::rosidl_typesupport_introspection_cpp::SmachContainerStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
