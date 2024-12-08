// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_data:action/MoveRP.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__ACTION__DETAIL__MOVE_RP__STRUCT_H_
#define ROS2_DATA__ACTION__DETAIL__MOVE_RP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveRP in the package ros2_data.
typedef struct ros2_data__action__MoveRP_Goal
{
  double roll;
  double pitch;
  double yaw;
  double x;
  double y;
  double z;
  double speed;
} ros2_data__action__MoveRP_Goal;

// Struct for a sequence of ros2_data__action__MoveRP_Goal.
typedef struct ros2_data__action__MoveRP_Goal__Sequence
{
  ros2_data__action__MoveRP_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveRP_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveRP in the package ros2_data.
typedef struct ros2_data__action__MoveRP_Result
{
  rosidl_runtime_c__String result;
} ros2_data__action__MoveRP_Result;

// Struct for a sequence of ros2_data__action__MoveRP_Result.
typedef struct ros2_data__action__MoveRP_Result__Sequence
{
  ros2_data__action__MoveRP_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveRP_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveRP in the package ros2_data.
typedef struct ros2_data__action__MoveRP_Feedback
{
  rosidl_runtime_c__String feedback;
} ros2_data__action__MoveRP_Feedback;

// Struct for a sequence of ros2_data__action__MoveRP_Feedback.
typedef struct ros2_data__action__MoveRP_Feedback__Sequence
{
  ros2_data__action__MoveRP_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveRP_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros2_data/action/detail/move_rp__struct.h"

/// Struct defined in action/MoveRP in the package ros2_data.
typedef struct ros2_data__action__MoveRP_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_data__action__MoveRP_Goal goal;
} ros2_data__action__MoveRP_SendGoal_Request;

// Struct for a sequence of ros2_data__action__MoveRP_SendGoal_Request.
typedef struct ros2_data__action__MoveRP_SendGoal_Request__Sequence
{
  ros2_data__action__MoveRP_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveRP_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveRP in the package ros2_data.
typedef struct ros2_data__action__MoveRP_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros2_data__action__MoveRP_SendGoal_Response;

// Struct for a sequence of ros2_data__action__MoveRP_SendGoal_Response.
typedef struct ros2_data__action__MoveRP_SendGoal_Response__Sequence
{
  ros2_data__action__MoveRP_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveRP_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveRP in the package ros2_data.
typedef struct ros2_data__action__MoveRP_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros2_data__action__MoveRP_GetResult_Request;

// Struct for a sequence of ros2_data__action__MoveRP_GetResult_Request.
typedef struct ros2_data__action__MoveRP_GetResult_Request__Sequence
{
  ros2_data__action__MoveRP_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveRP_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"

/// Struct defined in action/MoveRP in the package ros2_data.
typedef struct ros2_data__action__MoveRP_GetResult_Response
{
  int8_t status;
  ros2_data__action__MoveRP_Result result;
} ros2_data__action__MoveRP_GetResult_Response;

// Struct for a sequence of ros2_data__action__MoveRP_GetResult_Response.
typedef struct ros2_data__action__MoveRP_GetResult_Response__Sequence
{
  ros2_data__action__MoveRP_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveRP_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros2_data/action/detail/move_rp__struct.h"

/// Struct defined in action/MoveRP in the package ros2_data.
typedef struct ros2_data__action__MoveRP_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_data__action__MoveRP_Feedback feedback;
} ros2_data__action__MoveRP_FeedbackMessage;

// Struct for a sequence of ros2_data__action__MoveRP_FeedbackMessage.
typedef struct ros2_data__action__MoveRP_FeedbackMessage__Sequence
{
  ros2_data__action__MoveRP_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveRP_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DATA__ACTION__DETAIL__MOVE_RP__STRUCT_H_
