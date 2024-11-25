// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from smach_msgs:msg/SmachContainerStatus.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__FUNCTIONS_H_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "smach_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "smach_msgs/msg/detail/smach_container_status__struct.h"

/// Initialize msg/SmachContainerStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smach_msgs__msg__SmachContainerStatus
 * )) before or use
 * smach_msgs__msg__SmachContainerStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStatus__init(smach_msgs__msg__SmachContainerStatus * msg);

/// Finalize msg/SmachContainerStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerStatus__fini(smach_msgs__msg__SmachContainerStatus * msg);

/// Create msg/SmachContainerStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smach_msgs__msg__SmachContainerStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
smach_msgs__msg__SmachContainerStatus *
smach_msgs__msg__SmachContainerStatus__create();

/// Destroy msg/SmachContainerStatus message.
/**
 * It calls
 * smach_msgs__msg__SmachContainerStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerStatus__destroy(smach_msgs__msg__SmachContainerStatus * msg);

/// Check for msg/SmachContainerStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStatus__are_equal(const smach_msgs__msg__SmachContainerStatus * lhs, const smach_msgs__msg__SmachContainerStatus * rhs);

/// Copy a msg/SmachContainerStatus message.
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
smach_msgs__msg__SmachContainerStatus__copy(
  const smach_msgs__msg__SmachContainerStatus * input,
  smach_msgs__msg__SmachContainerStatus * output);

/// Initialize array of msg/SmachContainerStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * smach_msgs__msg__SmachContainerStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStatus__Sequence__init(smach_msgs__msg__SmachContainerStatus__Sequence * array, size_t size);

/// Finalize array of msg/SmachContainerStatus messages.
/**
 * It calls
 * smach_msgs__msg__SmachContainerStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerStatus__Sequence__fini(smach_msgs__msg__SmachContainerStatus__Sequence * array);

/// Create array of msg/SmachContainerStatus messages.
/**
 * It allocates the memory for the array and calls
 * smach_msgs__msg__SmachContainerStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
smach_msgs__msg__SmachContainerStatus__Sequence *
smach_msgs__msg__SmachContainerStatus__Sequence__create(size_t size);

/// Destroy array of msg/SmachContainerStatus messages.
/**
 * It calls
 * smach_msgs__msg__SmachContainerStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerStatus__Sequence__destroy(smach_msgs__msg__SmachContainerStatus__Sequence * array);

/// Check for msg/SmachContainerStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerStatus__Sequence__are_equal(const smach_msgs__msg__SmachContainerStatus__Sequence * lhs, const smach_msgs__msg__SmachContainerStatus__Sequence * rhs);

/// Copy an array of msg/SmachContainerStatus messages.
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
smach_msgs__msg__SmachContainerStatus__Sequence__copy(
  const smach_msgs__msg__SmachContainerStatus__Sequence * input,
  smach_msgs__msg__SmachContainerStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_STATUS__FUNCTIONS_H_
