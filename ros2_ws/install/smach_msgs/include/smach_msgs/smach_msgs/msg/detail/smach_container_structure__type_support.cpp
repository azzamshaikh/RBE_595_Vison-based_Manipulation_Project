// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "smach_msgs/msg/detail/smach_container_structure__struct.hpp"
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

void SmachContainerStructure_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) smach_msgs::msg::SmachContainerStructure(_init);
}

void SmachContainerStructure_fini_function(void * message_memory)
{
  auto typed_message = static_cast<smach_msgs::msg::SmachContainerStructure *>(message_memory);
  typed_message->~SmachContainerStructure();
}

size_t size_function__SmachContainerStructure__children(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SmachContainerStructure__children(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SmachContainerStructure__children(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SmachContainerStructure__children(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SmachContainerStructure__children(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SmachContainerStructure__children(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SmachContainerStructure__children(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SmachContainerStructure__children(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SmachContainerStructure__internal_outcomes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SmachContainerStructure__internal_outcomes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SmachContainerStructure__internal_outcomes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SmachContainerStructure__internal_outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SmachContainerStructure__internal_outcomes(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SmachContainerStructure__internal_outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SmachContainerStructure__internal_outcomes(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SmachContainerStructure__internal_outcomes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SmachContainerStructure__outcomes_from(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SmachContainerStructure__outcomes_from(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SmachContainerStructure__outcomes_from(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SmachContainerStructure__outcomes_from(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SmachContainerStructure__outcomes_from(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SmachContainerStructure__outcomes_from(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SmachContainerStructure__outcomes_from(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SmachContainerStructure__outcomes_from(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SmachContainerStructure__outcomes_to(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SmachContainerStructure__outcomes_to(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SmachContainerStructure__outcomes_to(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SmachContainerStructure__outcomes_to(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SmachContainerStructure__outcomes_to(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SmachContainerStructure__outcomes_to(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SmachContainerStructure__outcomes_to(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SmachContainerStructure__outcomes_to(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SmachContainerStructure__container_outcomes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SmachContainerStructure__container_outcomes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SmachContainerStructure__container_outcomes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SmachContainerStructure__container_outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SmachContainerStructure__container_outcomes(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SmachContainerStructure__container_outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SmachContainerStructure__container_outcomes(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SmachContainerStructure__container_outcomes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SmachContainerStructure_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStructure, header),  // bytes offset in struct
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
    offsetof(smach_msgs::msg::SmachContainerStructure, path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "children",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStructure, children),  // bytes offset in struct
    nullptr,  // default value
    size_function__SmachContainerStructure__children,  // size() function pointer
    get_const_function__SmachContainerStructure__children,  // get_const(index) function pointer
    get_function__SmachContainerStructure__children,  // get(index) function pointer
    fetch_function__SmachContainerStructure__children,  // fetch(index, &value) function pointer
    assign_function__SmachContainerStructure__children,  // assign(index, value) function pointer
    resize_function__SmachContainerStructure__children  // resize(index) function pointer
  },
  {
    "internal_outcomes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStructure, internal_outcomes),  // bytes offset in struct
    nullptr,  // default value
    size_function__SmachContainerStructure__internal_outcomes,  // size() function pointer
    get_const_function__SmachContainerStructure__internal_outcomes,  // get_const(index) function pointer
    get_function__SmachContainerStructure__internal_outcomes,  // get(index) function pointer
    fetch_function__SmachContainerStructure__internal_outcomes,  // fetch(index, &value) function pointer
    assign_function__SmachContainerStructure__internal_outcomes,  // assign(index, value) function pointer
    resize_function__SmachContainerStructure__internal_outcomes  // resize(index) function pointer
  },
  {
    "outcomes_from",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStructure, outcomes_from),  // bytes offset in struct
    nullptr,  // default value
    size_function__SmachContainerStructure__outcomes_from,  // size() function pointer
    get_const_function__SmachContainerStructure__outcomes_from,  // get_const(index) function pointer
    get_function__SmachContainerStructure__outcomes_from,  // get(index) function pointer
    fetch_function__SmachContainerStructure__outcomes_from,  // fetch(index, &value) function pointer
    assign_function__SmachContainerStructure__outcomes_from,  // assign(index, value) function pointer
    resize_function__SmachContainerStructure__outcomes_from  // resize(index) function pointer
  },
  {
    "outcomes_to",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStructure, outcomes_to),  // bytes offset in struct
    nullptr,  // default value
    size_function__SmachContainerStructure__outcomes_to,  // size() function pointer
    get_const_function__SmachContainerStructure__outcomes_to,  // get_const(index) function pointer
    get_function__SmachContainerStructure__outcomes_to,  // get(index) function pointer
    fetch_function__SmachContainerStructure__outcomes_to,  // fetch(index, &value) function pointer
    assign_function__SmachContainerStructure__outcomes_to,  // assign(index, value) function pointer
    resize_function__SmachContainerStructure__outcomes_to  // resize(index) function pointer
  },
  {
    "container_outcomes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs::msg::SmachContainerStructure, container_outcomes),  // bytes offset in struct
    nullptr,  // default value
    size_function__SmachContainerStructure__container_outcomes,  // size() function pointer
    get_const_function__SmachContainerStructure__container_outcomes,  // get_const(index) function pointer
    get_function__SmachContainerStructure__container_outcomes,  // get(index) function pointer
    fetch_function__SmachContainerStructure__container_outcomes,  // fetch(index, &value) function pointer
    assign_function__SmachContainerStructure__container_outcomes,  // assign(index, value) function pointer
    resize_function__SmachContainerStructure__container_outcomes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SmachContainerStructure_message_members = {
  "smach_msgs::msg",  // message namespace
  "SmachContainerStructure",  // message name
  7,  // number of fields
  sizeof(smach_msgs::msg::SmachContainerStructure),
  SmachContainerStructure_message_member_array,  // message members
  SmachContainerStructure_init_function,  // function to initialize message memory (memory has to be allocated)
  SmachContainerStructure_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SmachContainerStructure_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SmachContainerStructure_message_members,
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
get_message_type_support_handle<smach_msgs::msg::SmachContainerStructure>()
{
  return &::smach_msgs::msg::rosidl_typesupport_introspection_cpp::SmachContainerStructure_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, smach_msgs, msg, SmachContainerStructure)() {
  return &::smach_msgs::msg::rosidl_typesupport_introspection_cpp::SmachContainerStructure_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
