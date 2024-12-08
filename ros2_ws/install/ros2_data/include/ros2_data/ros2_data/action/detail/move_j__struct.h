// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_data:action/MoveJ.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__ACTION__DETAIL__MOVE_J__STRUCT_H_
#define ROS2_DATA__ACTION__DETAIL__MOVE_J__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal'
#include "ros2_data/msg/detail/joint_pose__struct.h"

/// Struct defined in action/MoveJ in the package ros2_data.
typedef struct ros2_data__action__MoveJ_Goal
{
  ros2_data__msg__JointPose goal;
  double speed;
} ros2_data__action__MoveJ_Goal;

// Struct for a sequence of ros2_data__action__MoveJ_Goal.
typedef struct ros2_data__action__MoveJ_Goal__Sequence
{
  ros2_data__action__MoveJ_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveJ_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveJ in the package ros2_data.
typedef struct ros2_data__action__MoveJ_Result
{
  rosidl_runtime_c__String result;
} ros2_data__action__MoveJ_Result;

// Struct for a sequence of ros2_data__action__MoveJ_Result.
typedef struct ros2_data__action__MoveJ_Result__Sequence
{
  ros2_data__action__MoveJ_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveJ_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveJ in the package ros2_data.
typedef struct ros2_data__action__MoveJ_Feedback
{
  rosidl_runtime_c__String feedback;
} ros2_data__action__MoveJ_Feedback;

// Struct for a sequence of ros2_data__action__MoveJ_Feedback.
typedef struct ros2_data__action__MoveJ_Feedback__Sequence
{
  ros2_data__action__MoveJ_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveJ_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros2_data/action/detail/move_j__struct.h"

/// Struct defined in action/MoveJ in the package ros2_data.
typedef struct ros2_data__action__MoveJ_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_data__action__MoveJ_Goal goal;
} ros2_data__action__MoveJ_SendGoal_Request;

// Struct for a sequence of ros2_data__action__MoveJ_SendGoal_Request.
typedef struct ros2_data__action__MoveJ_SendGoal_Request__Sequence
{
  ros2_data__action__MoveJ_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveJ_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveJ in the package ros2_data.
typedef struct ros2_data__action__MoveJ_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros2_data__action__MoveJ_SendGoal_Response;

// Struct for a sequence of ros2_data__action__MoveJ_SendGoal_Response.
typedef struct ros2_data__action__MoveJ_SendGoal_Response__Sequence
{
  ros2_data__action__MoveJ_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveJ_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveJ in the package ros2_data.
typedef struct ros2_data__action__MoveJ_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros2_data__action__MoveJ_GetResult_Request;

// Struct for a sequence of ros2_data__action__MoveJ_GetResult_Request.
typedef struct ros2_data__action__MoveJ_GetResult_Request__Sequence
{
  ros2_data__action__MoveJ_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveJ_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_data/action/detail/move_j__struct.h"

/// Struct defined in action/MoveJ in the package ros2_data.
typedef struct ros2_data__action__MoveJ_GetResult_Response
{
  int8_t status;
  ros2_data__action__MoveJ_Result result;
} ros2_data__action__MoveJ_GetResult_Response;

// Struct for a sequence of ros2_data__action__MoveJ_GetResult_Response.
typedef struct ros2_data__action__MoveJ_GetResult_Response__Sequence
{
  ros2_data__action__MoveJ_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveJ_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros2_data/action/detail/move_j__struct.h"

/// Struct defined in action/MoveJ in the package ros2_data.
typedef struct ros2_data__action__MoveJ_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2_data__action__MoveJ_Feedback feedback;
} ros2_data__action__MoveJ_FeedbackMessage;

// Struct for a sequence of ros2_data__action__MoveJ_FeedbackMessage.
typedef struct ros2_data__action__MoveJ_FeedbackMessage__Sequence
{
  ros2_data__action__MoveJ_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__action__MoveJ_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DATA__ACTION__DETAIL__MOVE_J__STRUCT_H_
