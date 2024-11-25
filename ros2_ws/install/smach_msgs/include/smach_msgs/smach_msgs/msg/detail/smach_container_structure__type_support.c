// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smach_msgs/msg/detail/smach_container_structure__rosidl_typesupport_introspection_c.h"
#include "smach_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smach_msgs/msg/detail/smach_container_structure__functions.h"
#include "smach_msgs/msg/detail/smach_container_structure__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `path`
// Member `children`
// Member `internal_outcomes`
// Member `outcomes_from`
// Member `outcomes_to`
// Member `container_outcomes`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smach_msgs__msg__SmachContainerStructure__init(message_memory);
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_fini_function(void * message_memory)
{
  smach_msgs__msg__SmachContainerStructure__fini(message_memory);
}

size_t smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__children(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__children(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__children(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__children(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__children(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__children(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__children(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__children(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__internal_outcomes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__internal_outcomes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__internal_outcomes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__internal_outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__internal_outcomes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__internal_outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__internal_outcomes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__internal_outcomes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__outcomes_from(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__outcomes_from(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__outcomes_from(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__outcomes_from(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__outcomes_from(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__outcomes_from(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__outcomes_from(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__outcomes_from(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__outcomes_to(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__outcomes_to(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__outcomes_to(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__outcomes_to(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__outcomes_to(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__outcomes_to(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__outcomes_to(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__outcomes_to(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__container_outcomes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__container_outcomes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__container_outcomes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__container_outcomes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__container_outcomes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__container_outcomes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__container_outcomes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__container_outcomes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStructure, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStructure, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "children",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStructure, children),  // bytes offset in struct
    NULL,  // default value
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__children,  // size() function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__children,  // get_const(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__children,  // get(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__children,  // fetch(index, &value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__children,  // assign(index, value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__children  // resize(index) function pointer
  },
  {
    "internal_outcomes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStructure, internal_outcomes),  // bytes offset in struct
    NULL,  // default value
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__internal_outcomes,  // size() function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__internal_outcomes,  // get_const(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__internal_outcomes,  // get(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__internal_outcomes,  // fetch(index, &value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__internal_outcomes,  // assign(index, value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__internal_outcomes  // resize(index) function pointer
  },
  {
    "outcomes_from",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStructure, outcomes_from),  // bytes offset in struct
    NULL,  // default value
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__outcomes_from,  // size() function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__outcomes_from,  // get_const(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__outcomes_from,  // get(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__outcomes_from,  // fetch(index, &value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__outcomes_from,  // assign(index, value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__outcomes_from  // resize(index) function pointer
  },
  {
    "outcomes_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStructure, outcomes_to),  // bytes offset in struct
    NULL,  // default value
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__outcomes_to,  // size() function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__outcomes_to,  // get_const(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__outcomes_to,  // get(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__outcomes_to,  // fetch(index, &value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__outcomes_to,  // assign(index, value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__outcomes_to  // resize(index) function pointer
  },
  {
    "container_outcomes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStructure, container_outcomes),  // bytes offset in struct
    NULL,  // default value
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__size_function__SmachContainerStructure__container_outcomes,  // size() function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStructure__container_outcomes,  // get_const(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__get_function__SmachContainerStructure__container_outcomes,  // get(index) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStructure__container_outcomes,  // fetch(index, &value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__assign_function__SmachContainerStructure__container_outcomes,  // assign(index, value) function pointer
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__resize_function__SmachContainerStructure__container_outcomes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_members = {
  "smach_msgs__msg",  // message namespace
  "SmachContainerStructure",  // message name
  7,  // number of fields
  sizeof(smach_msgs__msg__SmachContainerStructure),
  smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_member_array,  // message members
  smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_init_function,  // function to initialize message memory (memory has to be allocated)
  smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_type_support_handle = {
  0,
  &smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smach_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smach_msgs, msg, SmachContainerStructure)() {
  smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_type_support_handle.typesupport_identifier) {
    smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smach_msgs__msg__SmachContainerStructure__rosidl_typesupport_introspection_c__SmachContainerStructure_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
