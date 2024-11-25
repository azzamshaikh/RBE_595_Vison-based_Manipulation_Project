// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__FUNCTIONS_H_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "smach_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__struct.h"

/// Initialize msg/SmachContainerInitialStatusCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smach_msgs__msg__SmachContainerInitialStatusCmd
 * )) before or use
 * smach_msgs__msg__SmachContainerInitialStatusCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerInitialStatusCmd__init(smach_msgs__msg__SmachContainerInitialStatusCmd * msg);

/// Finalize msg/SmachContainerInitialStatusCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerInitialStatusCmd__fini(smach_msgs__msg__SmachContainerInitialStatusCmd * msg);

/// Create msg/SmachContainerInitialStatusCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smach_msgs__msg__SmachContainerInitialStatusCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
smach_msgs__msg__SmachContainerInitialStatusCmd *
smach_msgs__msg__SmachContainerInitialStatusCmd__create();

/// Destroy msg/SmachContainerInitialStatusCmd message.
/**
 * It calls
 * smach_msgs__msg__SmachContainerInitialStatusCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerInitialStatusCmd__destroy(smach_msgs__msg__SmachContainerInitialStatusCmd * msg);

/// Check for msg/SmachContainerInitialStatusCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerInitialStatusCmd__are_equal(const smach_msgs__msg__SmachContainerInitialStatusCmd * lhs, const smach_msgs__msg__SmachContainerInitialStatusCmd * rhs);

/// Copy a msg/SmachContainerInitialStatusCmd message.
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
smach_msgs__msg__SmachContainerInitialStatusCmd__copy(
  const smach_msgs__msg__SmachContainerInitialStatusCmd * input,
  smach_msgs__msg__SmachContainerInitialStatusCmd * output);

/// Initialize array of msg/SmachContainerInitialStatusCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * smach_msgs__msg__SmachContainerInitialStatusCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__init(smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * array, size_t size);

/// Finalize array of msg/SmachContainerInitialStatusCmd messages.
/**
 * It calls
 * smach_msgs__msg__SmachContainerInitialStatusCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__fini(smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * array);

/// Create array of msg/SmachContainerInitialStatusCmd messages.
/**
 * It allocates the memory for the array and calls
 * smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence *
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__create(size_t size);

/// Destroy array of msg/SmachContainerInitialStatusCmd messages.
/**
 * It calls
 * smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
void
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__destroy(smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * array);

/// Check for msg/SmachContainerInitialStatusCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smach_msgs
bool
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__are_equal(const smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * lhs, const smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * rhs);

/// Copy an array of msg/SmachContainerInitialStatusCmd messages.
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
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__copy(
  const smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * input,
  smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__FUNCTIONS_H_
