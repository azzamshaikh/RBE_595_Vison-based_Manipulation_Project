// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_data:msg/JointPoseS.idl
// generated code does not contain a copyright notice
#include "ros2_data/msg/detail/joint_pose_s__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_data__msg__JointPoseS__init(ros2_data__msg__JointPoseS * msg)
{
  if (!msg) {
    return false;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
  // joint7
  return true;
}

void
ros2_data__msg__JointPoseS__fini(ros2_data__msg__JointPoseS * msg)
{
  if (!msg) {
    return;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
  // joint7
}

bool
ros2_data__msg__JointPoseS__are_equal(const ros2_data__msg__JointPoseS * lhs, const ros2_data__msg__JointPoseS * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1
  if (lhs->joint1 != rhs->joint1) {
    return false;
  }
  // joint2
  if (lhs->joint2 != rhs->joint2) {
    return false;
  }
  // joint3
  if (lhs->joint3 != rhs->joint3) {
    return false;
  }
  // joint4
  if (lhs->joint4 != rhs->joint4) {
    return false;
  }
  // joint5
  if (lhs->joint5 != rhs->joint5) {
    return false;
  }
  // joint6
  if (lhs->joint6 != rhs->joint6) {
    return false;
  }
  // joint7
  if (lhs->joint7 != rhs->joint7) {
    return false;
  }
  return true;
}

bool
ros2_data__msg__JointPoseS__copy(
  const ros2_data__msg__JointPoseS * input,
  ros2_data__msg__JointPoseS * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1
  output->joint1 = input->joint1;
  // joint2
  output->joint2 = input->joint2;
  // joint3
  output->joint3 = input->joint3;
  // joint4
  output->joint4 = input->joint4;
  // joint5
  output->joint5 = input->joint5;
  // joint6
  output->joint6 = input->joint6;
  // joint7
  output->joint7 = input->joint7;
  return true;
}

ros2_data__msg__JointPoseS *
ros2_data__msg__JointPoseS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_data__msg__JointPoseS * msg = (ros2_data__msg__JointPoseS *)allocator.allocate(sizeof(ros2_data__msg__JointPoseS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__msg__JointPoseS));
  bool success = ros2_data__msg__JointPoseS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_data__msg__JointPoseS__destroy(ros2_data__msg__JointPoseS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_data__msg__JointPoseS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_data__msg__JointPoseS__Sequence__init(ros2_data__msg__JointPoseS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_data__msg__JointPoseS * data = NULL;

  if (size) {
    data = (ros2_data__msg__JointPoseS *)allocator.zero_allocate(size, sizeof(ros2_data__msg__JointPoseS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__msg__JointPoseS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__msg__JointPoseS__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_data__msg__JointPoseS__Sequence__fini(ros2_data__msg__JointPoseS__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__msg__JointPoseS__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_data__msg__JointPoseS__Sequence *
ros2_data__msg__JointPoseS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_data__msg__JointPoseS__Sequence * array = (ros2_data__msg__JointPoseS__Sequence *)allocator.allocate(sizeof(ros2_data__msg__JointPoseS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__msg__JointPoseS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_data__msg__JointPoseS__Sequence__destroy(ros2_data__msg__JointPoseS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_data__msg__JointPoseS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_data__msg__JointPoseS__Sequence__are_equal(const ros2_data__msg__JointPoseS__Sequence * lhs, const ros2_data__msg__JointPoseS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_data__msg__JointPoseS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_data__msg__JointPoseS__Sequence__copy(
  const ros2_data__msg__JointPoseS__Sequence * input,
  ros2_data__msg__JointPoseS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_data__msg__JointPoseS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_data__msg__JointPoseS * data =
      (ros2_data__msg__JointPoseS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_data__msg__JointPoseS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_data__msg__JointPoseS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_data__msg__JointPoseS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
