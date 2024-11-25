// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__FUNCTIONS_H_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "smach_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "smach_msgs/msg/detail/smach_container_structure__struct.h"

/// Initialize msg/SmachContainerStructure message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smach_msgs__msg__SmachContainerStructure
 * )) before or use
 * smach_msgs__msg__SmachContainerStructure__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStructure__init(smach_msgs__msg__SmachContainerStructure * msg);

/// Finalize msg/SmachContainerStructure message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerStructure__fini(smach_msgs__msg__SmachContainerStructure * msg);

/// Create msg/SmachContainerStructure message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smach_msgs__msg__SmachContainerStructure__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
smach_msgs__msg__SmachContainerStructure *
smach_msgs__msg__SmachContainerStructure__create();

/// Destroy msg/SmachContainerStructure message.
/**
 * It calls
 * smach_msgs__msg__SmachContainerStructure__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerStructure__destroy(smach_msgs__msg__SmachContainerStructure * msg);

/// Check for msg/SmachContainerStructure message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStructure__are_equal(const smach_msgs__msg__SmachContainerStructure * lhs, const smach_msgs__msg__SmachContainerStructure * rhs);

/// Copy a msg/SmachContainerStructure message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStructure__copy(
  const smach_msgs__msg__SmachContainerStructure * input,
  smach_msgs__msg__SmachContainerStructure * output);

/// Initialize array of msg/SmachContainerStructure messages.
/**
 * It allocates the memory for the number of elements and calls
 * smach_msgs__msg__SmachContainerStructure__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStructure__Sequence__init(smach_msgs__msg__SmachContainerStructure__Sequence * array, size_t size);

/// Finalize array of msg/SmachContainerStructure messages.
/**
 * It calls
 * smach_msgs__msg__SmachContainerStructure__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerStructure__Sequence__fini(smach_msgs__msg__SmachContainerStructure__Sequence * array);

/// Create array of msg/SmachContainerStructure messages.
/**
 * It allocates the memory for the array and calls
 * smach_msgs__msg__SmachContainerStructure__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
smach_msgs__msg__SmachContainerStructure__Sequence *
smach_msgs__msg__SmachContainerStructure__Sequence__create(size_t size);

/// Destroy array of msg/SmachContainerStructure messages.
/**
 * It calls
 * smach_msgs__msg__SmachContainerStructure__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerStructure__Sequence__destroy(smach_msgs__msg__SmachContainerStructure__Sequence * array);

/// Check for msg/SmachContainerStructure message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStructure__Sequence__are_equal(const smach_msgs__msg__SmachContainerStructure__Sequence * lhs, const smach_msgs__msg__SmachContainerStructure__Sequence * rhs);

/// Copy an array of msg/SmachContainerStructure messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStructure__Sequence__copy(
  const smach_msgs__msg__SmachContainerStructure__Sequence * input,
  smach_msgs__msg__SmachContainerStructure__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STRUCTURE__FUNCTIONS_H_
