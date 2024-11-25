// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__STRUCT_H_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__STRUCT_H_

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
// Member 'children'
// Member 'internal_outcomes'
// Member 'outcomes_from'
// Member 'outcomes_to'
// Member 'container_outcomes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SmachContainerStructure in the package smach_msgs.
typedef struct smach_msgs__msg__SmachContainerStructure
{
  std_msgs__msg__Header header;
  /// The path to this node in the server
  rosidl_runtime_c__String path;
  /// The children of this node
  rosidl_runtime_c__String__Sequence children;
  /// The outcome edges
  /// Each index across these arrays denote one edge
  rosidl_runtime_c__String__Sequence internal_outcomes;
  rosidl_runtime_c__String__Sequence outcomes_from;
  rosidl_runtime_c__String__Sequence outcomes_to;
  /// The potential outcomes from this container
  rosidl_runtime_c__String__Sequence container_outcomes;
} smach_msgs__msg__SmachContainerStructure;

// Struct for a sequence of smach_msgs__msg__SmachContainerStructure.
typedef struct smach_msgs__msg__SmachContainerStructure__Sequence
{
  smach_msgs__msg__SmachContainerStructure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smach_msgs__msg__SmachContainerStructure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__STRUCT_H_
