// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sequencer_itf:action/Sequencer.idl
// generated code does not contain a copyright notice

#ifndef SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__STRUCT_H_
#define SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'commands'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Sequencer in the package sequencer_itf.
typedef struct sequencer_itf__action__Sequencer_Goal
{
  rosidl_runtime_c__double__Sequence commands;
} sequencer_itf__action__Sequencer_Goal;

// Struct for a sequence of sequencer_itf__action__Sequencer_Goal.
typedef struct sequencer_itf__action__Sequencer_Goal__Sequence
{
  sequencer_itf__action__Sequencer_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sequencer_itf__action__Sequencer_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Sequencer in the package sequencer_itf.
typedef struct sequencer_itf__action__Sequencer_Result
{
  rosidl_runtime_c__String result;
} sequencer_itf__action__Sequencer_Result;

// Struct for a sequence of sequencer_itf__action__Sequencer_Result.
typedef struct sequencer_itf__action__Sequencer_Result__Sequence
{
  sequencer_itf__action__Sequencer_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sequencer_itf__action__Sequencer_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Sequencer in the package sequencer_itf.
typedef struct sequencer_itf__action__Sequencer_Feedback
{
  rosidl_runtime_c__String feedback;
} sequencer_itf__action__Sequencer_Feedback;

// Struct for a sequence of sequencer_itf__action__Sequencer_Feedback.
typedef struct sequencer_itf__action__Sequencer_Feedback__Sequence
{
  sequencer_itf__action__Sequencer_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sequencer_itf__action__Sequencer_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sequencer_itf/action/detail/sequencer__struct.h"

/// Struct defined in action/Sequencer in the package sequencer_itf.
typedef struct sequencer_itf__action__Sequencer_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sequencer_itf__action__Sequencer_Goal goal;
} sequencer_itf__action__Sequencer_SendGoal_Request;

// Struct for a sequence of sequencer_itf__action__Sequencer_SendGoal_Request.
typedef struct sequencer_itf__action__Sequencer_SendGoal_Request__Sequence
{
  sequencer_itf__action__Sequencer_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sequencer_itf__action__Sequencer_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Sequencer in the package sequencer_itf.
typedef struct sequencer_itf__action__Sequencer_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sequencer_itf__action__Sequencer_SendGoal_Response;

// Struct for a sequence of sequencer_itf__action__Sequencer_SendGoal_Response.
typedef struct sequencer_itf__action__Sequencer_SendGoal_Response__Sequence
{
  sequencer_itf__action__Sequencer_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sequencer_itf__action__Sequencer_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Sequencer in the package sequencer_itf.
typedef struct sequencer_itf__action__Sequencer_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sequencer_itf__action__Sequencer_GetResult_Request;

// Struct for a sequence of sequencer_itf__action__Sequencer_GetResult_Request.
typedef struct sequencer_itf__action__Sequencer_GetResult_Request__Sequence
{
  sequencer_itf__action__Sequencer_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sequencer_itf__action__Sequencer_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"

/// Struct defined in action/Sequencer in the package sequencer_itf.
typedef struct sequencer_itf__action__Sequencer_GetResult_Response
{
  int8_t status;
  sequencer_itf__action__Sequencer_Result result;
} sequencer_itf__action__Sequencer_GetResult_Response;

// Struct for a sequence of sequencer_itf__action__Sequencer_GetResult_Response.
typedef struct sequencer_itf__action__Sequencer_GetResult_Response__Sequence
{
  sequencer_itf__action__Sequencer_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sequencer_itf__action__Sequencer_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sequencer_itf/action/detail/sequencer__struct.h"

/// Struct defined in action/Sequencer in the package sequencer_itf.
typedef struct sequencer_itf__action__Sequencer_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sequencer_itf__action__Sequencer_Feedback feedback;
} sequencer_itf__action__Sequencer_FeedbackMessage;

// Struct for a sequence of sequencer_itf__action__Sequencer_FeedbackMessage.
typedef struct sequencer_itf__action__Sequencer_FeedbackMessage__Sequence
{
  sequencer_itf__action__Sequencer_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sequencer_itf__action__Sequencer_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEQUENCER_ITF__ACTION__DETAIL__SEQUENCER__STRUCT_H_
