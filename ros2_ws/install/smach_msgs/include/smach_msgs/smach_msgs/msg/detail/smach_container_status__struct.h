// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smach_msgs:msg/SmachContainerStatus.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__STRUCT_H_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'path'
// Member 'initial_states'
// Member 'active_states'
// Member 'info'
#include "rosidl_runtime_c/string.h"
// Member 'local_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SmachContainerStatus in the package smach_msgs.
typedef struct smach_msgs__msg__SmachContainerStatus
{
  std_msgs__msg__Header header;
  /// The path to this node in the server
  rosidl_runtime_c__String path;
  /// The initial state description
  /// Effects an arc from the top state to each one
  rosidl_runtime_c__String__Sequence initial_states;
  /// The current state description
  rosidl_runtime_c__String__Sequence active_states;
  /// A pickled user data structure
  /// i.e. the UserData's internal dictionary
  rosidl_runtime_c__uint8__Sequence local_data;
  /// Debugging info string
  rosidl_runtime_c__String info;
} smach_msgs__msg__SmachContainerStatus;

// Struct for a sequence of smach_msgs__msg__SmachContainerStatus.
typedef struct smach_msgs__msg__SmachContainerStatus__Sequence
{
  smach_msgs__msg__SmachContainerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smach_msgs__msg__SmachContainerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__STRUCT_H_
