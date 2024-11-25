// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smach_msgs:msg/SmachContainerStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smach_msgs/msg/detail/smach_container_status__rosidl_typesupport_introspection_c.h"
#include "smach_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smach_msgs/msg/detail/smach_container_status__functions.h"
#include "smach_msgs/msg/detail/smach_container_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `path`
// Member `initial_states`
// Member `active_states`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"
// Member `local_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smach_msgs__msg__SmachContainerStatus__init(message_memory);
}

void smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_fini_function(void * message_memory)
{
  smach_msgs__msg__SmachContainerStatus__fini(message_memory);
}

size_t smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__size_function__SmachContainerStatus__initial_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__initial_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__initial_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStatus__initial_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__initial_states(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__assign_function__SmachContainerStatus__initial_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__initial_states(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__resize_function__SmachContainerStatus__initial_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__size_function__SmachContainerStatus__active_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__active_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__active_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStatus__active_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__active_states(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__assign_function__SmachContainerStatus__active_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__active_states(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__resize_function__SmachContainerStatus__active_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__size_function__SmachContainerStatus__local_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__local_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__local_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStatus__local_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__local_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__assign_function__SmachContainerStatus__local_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__local_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__resize_function__SmachContainerStatus__local_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, header),  // bytes offset in struct
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
    offsetof(smach_msgs__msg__SmachContainerStatus, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, initial_states),  // bytes offset in struct
    NULL,  // default value
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__size_function__SmachContainerStatus__initial_states,  // size() function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__initial_states,  // get_const(index) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__initial_states,  // get(index) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStatus__initial_states,  // fetch(index, &value) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__assign_function__SmachContainerStatus__initial_states,  // assign(index, value) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__resize_function__SmachContainerStatus__initial_states  // resize(index) function pointer
  },
  {
    "active_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, active_states),  // bytes offset in struct
    NULL,  // default value
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__size_function__SmachContainerStatus__active_states,  // size() function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__active_states,  // get_const(index) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__active_states,  // get(index) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStatus__active_states,  // fetch(index, &value) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__assign_function__SmachContainerStatus__active_states,  // assign(index, value) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__resize_function__SmachContainerStatus__active_states  // resize(index) function pointer
  },
  {
    "local_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, local_data),  // bytes offset in struct
    NULL,  // default value
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__size_function__SmachContainerStatus__local_data,  // size() function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_const_function__SmachContainerStatus__local_data,  // get_const(index) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__get_function__SmachContainerStatus__local_data,  // get(index) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__fetch_function__SmachContainerStatus__local_data,  // fetch(index, &value) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__assign_function__SmachContainerStatus__local_data,  // assign(index, value) function pointer
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__resize_function__SmachContainerStatus__local_data  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smach_msgs__msg__SmachContainerStatus, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_members = {
  "smach_msgs__msg",  // message namespace
  "SmachContainerStatus",  // message name
  6,  // number of fields
  sizeof(smach_msgs__msg__SmachContainerStatus),
  smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_member_array,  // message members
  smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_type_support_handle = {
  0,
  &smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smach_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smach_msgs, msg, SmachContainerStatus)() {
  smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_type_support_handle.typesupport_identifier) {
    smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smach_msgs__msg__SmachContainerStatus__rosidl_typesupport_introspection_c__SmachContainerStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
