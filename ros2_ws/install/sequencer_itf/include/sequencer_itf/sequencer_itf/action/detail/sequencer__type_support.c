// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sequencer_itf:action/Sequencer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
#include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sequencer_itf/action/detail/sequencer__functions.h"
#include "sequencer_itf/action/detail/sequencer__struct.h"


// Include directives for member types
// Member `commands`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sequencer_itf__action__Sequencer_Goal__init(message_memory);
}

void sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_fini_function(void * message_memory)
{
  sequencer_itf__action__Sequencer_Goal__fini(message_memory);
}

size_t sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__size_function__Sequencer_Goal__commands(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__get_const_function__Sequencer_Goal__commands(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__get_function__Sequencer_Goal__commands(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__fetch_function__Sequencer_Goal__commands(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__get_const_function__Sequencer_Goal__commands(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__assign_function__Sequencer_Goal__commands(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__get_function__Sequencer_Goal__commands(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__resize_function__Sequencer_Goal__commands(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_message_member_array[1] = {
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_Goal, commands),  // bytes offset in struct
    NULL,  // default value
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__size_function__Sequencer_Goal__commands,  // size() function pointer
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__get_const_function__Sequencer_Goal__commands,  // get_const(index) function pointer
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__get_function__Sequencer_Goal__commands,  // get(index) function pointer
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__fetch_function__Sequencer_Goal__commands,  // fetch(index, &value) function pointer
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__assign_function__Sequencer_Goal__commands,  // assign(index, value) function pointer
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__resize_function__Sequencer_Goal__commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_message_members = {
  "sequencer_itf__action",  // message namespace
  "Sequencer_Goal",  // message name
  1,  // number of fields
  sizeof(sequencer_itf__action__Sequencer_Goal),
  sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_message_member_array,  // message members
  sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_message_type_support_handle = {
  0,
  &sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_Goal)() {
  if (!sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_message_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sequencer_itf__action__Sequencer_Goal__rosidl_typesupport_introspection_c__Sequencer_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sequencer_itf__action__Sequencer_Result__init(message_memory);
}

void sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_fini_function(void * message_memory)
{
  sequencer_itf__action__Sequencer_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_message_members = {
  "sequencer_itf__action",  // message namespace
  "Sequencer_Result",  // message name
  1,  // number of fields
  sizeof(sequencer_itf__action__Sequencer_Result),
  sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_message_member_array,  // message members
  sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_message_type_support_handle = {
  0,
  &sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_Result)() {
  if (!sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_message_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sequencer_itf__action__Sequencer_Result__rosidl_typesupport_introspection_c__Sequencer_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sequencer_itf__action__Sequencer_Feedback__init(message_memory);
}

void sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_fini_function(void * message_memory)
{
  sequencer_itf__action__Sequencer_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_message_members = {
  "sequencer_itf__action",  // message namespace
  "Sequencer_Feedback",  // message name
  1,  // number of fields
  sizeof(sequencer_itf__action__Sequencer_Feedback),
  sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_message_member_array,  // message members
  sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_message_type_support_handle = {
  0,
  &sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_Feedback)() {
  if (!sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_message_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sequencer_itf__action__Sequencer_Feedback__rosidl_typesupport_introspection_c__Sequencer_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "sequencer_itf/action/sequencer.h"
// Member `goal`
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sequencer_itf__action__Sequencer_SendGoal_Request__init(message_memory);
}

void sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_fini_function(void * message_memory)
{
  sequencer_itf__action__Sequencer_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_members = {
  "sequencer_itf__action",  // message namespace
  "Sequencer_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(sequencer_itf__action__Sequencer_SendGoal_Request),
  sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_member_array,  // message members
  sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_type_support_handle = {
  0,
  &sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_SendGoal_Request)() {
  sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_Goal)();
  if (!sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sequencer_itf__action__Sequencer_SendGoal_Request__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sequencer_itf__action__Sequencer_SendGoal_Response__init(message_memory);
}

void sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_fini_function(void * message_memory)
{
  sequencer_itf__action__Sequencer_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_members = {
  "sequencer_itf__action",  // message namespace
  "Sequencer_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(sequencer_itf__action__Sequencer_SendGoal_Response),
  sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_member_array,  // message members
  sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_type_support_handle = {
  0,
  &sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_SendGoal_Response)() {
  sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sequencer_itf__action__Sequencer_SendGoal_Response__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_service_members = {
  "sequencer_itf__action",  // service namespace
  "Sequencer_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_service_type_support_handle = {
  0,
  &sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_SendGoal)() {
  if (!sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_service_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_SendGoal_Response)()->data;
  }

  return &sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sequencer_itf__action__Sequencer_GetResult_Request__init(message_memory);
}

void sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_fini_function(void * message_memory)
{
  sequencer_itf__action__Sequencer_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_members = {
  "sequencer_itf__action",  // message namespace
  "Sequencer_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(sequencer_itf__action__Sequencer_GetResult_Request),
  sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_member_array,  // message members
  sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_type_support_handle = {
  0,
  &sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_GetResult_Request)() {
  sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sequencer_itf__action__Sequencer_GetResult_Request__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "sequencer_itf/action/sequencer.h"
// Member `result`
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sequencer_itf__action__Sequencer_GetResult_Response__init(message_memory);
}

void sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_fini_function(void * message_memory)
{
  sequencer_itf__action__Sequencer_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_members = {
  "sequencer_itf__action",  // message namespace
  "Sequencer_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(sequencer_itf__action__Sequencer_GetResult_Response),
  sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_member_array,  // message members
  sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_type_support_handle = {
  0,
  &sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_GetResult_Response)() {
  sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_Result)();
  if (!sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sequencer_itf__action__Sequencer_GetResult_Response__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_service_members = {
  "sequencer_itf__action",  // service namespace
  "Sequencer_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_service_type_support_handle = {
  0,
  &sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_GetResult)() {
  if (!sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_service_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_GetResult_Response)()->data;
  }

  return &sequencer_itf__action__detail__sequencer__rosidl_typesupport_introspection_c__Sequencer_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sequencer_itf/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "sequencer_itf/action/sequencer.h"
// Member `feedback`
// already included above
// #include "sequencer_itf/action/detail/sequencer__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sequencer_itf__action__Sequencer_FeedbackMessage__init(message_memory);
}

void sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_fini_function(void * message_memory)
{
  sequencer_itf__action__Sequencer_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sequencer_itf__action__Sequencer_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_members = {
  "sequencer_itf__action",  // message namespace
  "Sequencer_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(sequencer_itf__action__Sequencer_FeedbackMessage),
  sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_member_array,  // message members
  sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_type_support_handle = {
  0,
  &sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sequencer_itf
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_FeedbackMessage)() {
  sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sequencer_itf, action, Sequencer_Feedback)();
  if (!sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sequencer_itf__action__Sequencer_FeedbackMessage__rosidl_typesupport_introspection_c__Sequencer_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
