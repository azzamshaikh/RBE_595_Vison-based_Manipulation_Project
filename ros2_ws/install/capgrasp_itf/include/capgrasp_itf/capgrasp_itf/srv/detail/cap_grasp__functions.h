// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from capgrasp_itf:srv/CAPGrasp.idl
// generated code does not contain a copyright notice

#ifndef CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__FUNCTIONS_H_
#define CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "capgrasp_itf/msg/rosidl_generator_c__visibility_control.h"

#include "capgrasp_itf/srv/detail/cap_grasp__struct.h"

/// Initialize srv/CAPGrasp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * capgrasp_itf__srv__CAPGrasp_Request
 * )) before or use
 * capgrasp_itf__srv__CAPGrasp_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Request__init(capgrasp_itf__srv__CAPGrasp_Request * msg);

/// Finalize srv/CAPGrasp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
void
capgrasp_itf__srv__CAPGrasp_Request__fini(capgrasp_itf__srv__CAPGrasp_Request * msg);

/// Create srv/CAPGrasp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * capgrasp_itf__srv__CAPGrasp_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
capgrasp_itf__srv__CAPGrasp_Request *
capgrasp_itf__srv__CAPGrasp_Request__create();

/// Destroy srv/CAPGrasp message.
/**
 * It calls
 * capgrasp_itf__srv__CAPGrasp_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
void
capgrasp_itf__srv__CAPGrasp_Request__destroy(capgrasp_itf__srv__CAPGrasp_Request * msg);

/// Check for srv/CAPGrasp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Request__are_equal(const capgrasp_itf__srv__CAPGrasp_Request * lhs, const capgrasp_itf__srv__CAPGrasp_Request * rhs);

/// Copy a srv/CAPGrasp message.
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
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Request__copy(
  const capgrasp_itf__srv__CAPGrasp_Request * input,
  capgrasp_itf__srv__CAPGrasp_Request * output);

/// Initialize array of srv/CAPGrasp messages.
/**
 * It allocates the memory for the number of elements and calls
 * capgrasp_itf__srv__CAPGrasp_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Request__Sequence__init(capgrasp_itf__srv__CAPGrasp_Request__Sequence * array, size_t size);

/// Finalize array of srv/CAPGrasp messages.
/**
 * It calls
 * capgrasp_itf__srv__CAPGrasp_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
void
capgrasp_itf__srv__CAPGrasp_Request__Sequence__fini(capgrasp_itf__srv__CAPGrasp_Request__Sequence * array);

/// Create array of srv/CAPGrasp messages.
/**
 * It allocates the memory for the array and calls
 * capgrasp_itf__srv__CAPGrasp_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
capgrasp_itf__srv__CAPGrasp_Request__Sequence *
capgrasp_itf__srv__CAPGrasp_Request__Sequence__create(size_t size);

/// Destroy array of srv/CAPGrasp messages.
/**
 * It calls
 * capgrasp_itf__srv__CAPGrasp_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
void
capgrasp_itf__srv__CAPGrasp_Request__Sequence__destroy(capgrasp_itf__srv__CAPGrasp_Request__Sequence * array);

/// Check for srv/CAPGrasp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Request__Sequence__are_equal(const capgrasp_itf__srv__CAPGrasp_Request__Sequence * lhs, const capgrasp_itf__srv__CAPGrasp_Request__Sequence * rhs);

/// Copy an array of srv/CAPGrasp messages.
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
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Request__Sequence__copy(
  const capgrasp_itf__srv__CAPGrasp_Request__Sequence * input,
  capgrasp_itf__srv__CAPGrasp_Request__Sequence * output);

/// Initialize srv/CAPGrasp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * capgrasp_itf__srv__CAPGrasp_Response
 * )) before or use
 * capgrasp_itf__srv__CAPGrasp_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Response__init(capgrasp_itf__srv__CAPGrasp_Response * msg);

/// Finalize srv/CAPGrasp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
void
capgrasp_itf__srv__CAPGrasp_Response__fini(capgrasp_itf__srv__CAPGrasp_Response * msg);

/// Create srv/CAPGrasp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * capgrasp_itf__srv__CAPGrasp_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
capgrasp_itf__srv__CAPGrasp_Response *
capgrasp_itf__srv__CAPGrasp_Response__create();

/// Destroy srv/CAPGrasp message.
/**
 * It calls
 * capgrasp_itf__srv__CAPGrasp_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
void
capgrasp_itf__srv__CAPGrasp_Response__destroy(capgrasp_itf__srv__CAPGrasp_Response * msg);

/// Check for srv/CAPGrasp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Response__are_equal(const capgrasp_itf__srv__CAPGrasp_Response * lhs, const capgrasp_itf__srv__CAPGrasp_Response * rhs);

/// Copy a srv/CAPGrasp message.
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
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Response__copy(
  const capgrasp_itf__srv__CAPGrasp_Response * input,
  capgrasp_itf__srv__CAPGrasp_Response * output);

/// Initialize array of srv/CAPGrasp messages.
/**
 * It allocates the memory for the number of elements and calls
 * capgrasp_itf__srv__CAPGrasp_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Response__Sequence__init(capgrasp_itf__srv__CAPGrasp_Response__Sequence * array, size_t size);

/// Finalize array of srv/CAPGrasp messages.
/**
 * It calls
 * capgrasp_itf__srv__CAPGrasp_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
void
capgrasp_itf__srv__CAPGrasp_Response__Sequence__fini(capgrasp_itf__srv__CAPGrasp_Response__Sequence * array);

/// Create array of srv/CAPGrasp messages.
/**
 * It allocates the memory for the array and calls
 * capgrasp_itf__srv__CAPGrasp_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
capgrasp_itf__srv__CAPGrasp_Response__Sequence *
capgrasp_itf__srv__CAPGrasp_Response__Sequence__create(size_t size);

/// Destroy array of srv/CAPGrasp messages.
/**
 * It calls
 * capgrasp_itf__srv__CAPGrasp_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
void
capgrasp_itf__srv__CAPGrasp_Response__Sequence__destroy(capgrasp_itf__srv__CAPGrasp_Response__Sequence * array);

/// Check for srv/CAPGrasp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Response__Sequence__are_equal(const capgrasp_itf__srv__CAPGrasp_Response__Sequence * lhs, const capgrasp_itf__srv__CAPGrasp_Response__Sequence * rhs);

/// Copy an array of srv/CAPGrasp messages.
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
ROSIDL_GENERATOR_C_PUBLIC_capgrasp_itf
bool
capgrasp_itf__srv__CAPGrasp_Response__Sequence__copy(
  const capgrasp_itf__srv__CAPGrasp_Response__Sequence * input,
  capgrasp_itf__srv__CAPGrasp_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__FUNCTIONS_H_
