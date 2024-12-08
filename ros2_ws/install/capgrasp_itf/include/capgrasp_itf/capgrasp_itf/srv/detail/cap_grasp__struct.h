// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from capgrasp_itf:srv/CAPGrasp.idl
// generated code does not contain a copyright notice

#ifndef CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__STRUCT_H_
#define CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CAPGrasp in the package capgrasp_itf.
typedef struct capgrasp_itf__srv__CAPGrasp_Request
{
  bool start;
} capgrasp_itf__srv__CAPGrasp_Request;

// Struct for a sequence of capgrasp_itf__srv__CAPGrasp_Request.
typedef struct capgrasp_itf__srv__CAPGrasp_Request__Sequence
{
  capgrasp_itf__srv__CAPGrasp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capgrasp_itf__srv__CAPGrasp_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'xyz'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CAPGrasp in the package capgrasp_itf.
typedef struct capgrasp_itf__srv__CAPGrasp_Response
{
  rosidl_runtime_c__double__Sequence xyz;
} capgrasp_itf__srv__CAPGrasp_Response;

// Struct for a sequence of capgrasp_itf__srv__CAPGrasp_Response.
typedef struct capgrasp_itf__srv__CAPGrasp_Response__Sequence
{
  capgrasp_itf__srv__CAPGrasp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} capgrasp_itf__srv__CAPGrasp_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAPGRASP_ITF__SRV__DETAIL__CAP_GRASP__STRUCT_H_
