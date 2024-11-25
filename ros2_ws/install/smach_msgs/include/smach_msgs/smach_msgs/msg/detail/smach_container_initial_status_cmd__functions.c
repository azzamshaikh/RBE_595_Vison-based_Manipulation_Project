// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
// generated code does not contain a copyright notice
#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path`
// Member `initial_states`
#include "rosidl_runtime_c/string_functions.h"
// Member `local_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
smach_msgs__msg__SmachContainerInitialStatusCmd__init(smach_msgs__msg__SmachContainerInitialStatusCmd * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    smach_msgs__msg__SmachContainerInitialStatusCmd__fini(msg);
    return false;
  }
  // initial_states
  if (!rosidl_runtime_c__String__Sequence__init(&msg->initial_states, 0)) {
    smach_msgs__msg__SmachContainerInitialStatusCmd__fini(msg);
    return false;
  }
  // local_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->local_data, 0)) {
    smach_msgs__msg__SmachContainerInitialStatusCmd__fini(msg);
    return false;
  }
  return true;
}

void
smach_msgs__msg__SmachContainerInitialStatusCmd__fini(smach_msgs__msg__SmachContainerInitialStatusCmd * msg)
{
  if (!msg) {
    return;
  }
  // path
  rosidl_runtime_c__String__fini(&msg->path);
  // initial_states
  rosidl_runtime_c__String__Sequence__fini(&msg->initial_states);
  // local_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->local_data);
}

bool
smach_msgs__msg__SmachContainerInitialStatusCmd__are_equal(const smach_msgs__msg__SmachContainerInitialStatusCmd * lhs, const smach_msgs__msg__SmachContainerInitialStatusCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // initial_states
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->initial_states), &(rhs->initial_states)))
  {
    return false;
  }
  // local_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->local_data), &(rhs->local_data)))
  {
    return false;
  }
  return true;
}

bool
smach_msgs__msg__SmachContainerInitialStatusCmd__copy(
  const smach_msgs__msg__SmachContainerInitialStatusCmd * input,
  smach_msgs__msg__SmachContainerInitialStatusCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // initial_states
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->initial_states), &(output->initial_states)))
  {
    return false;
  }
  // local_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->local_data), &(output->local_data)))
  {
    return false;
  }
  return true;
}

smach_msgs__msg__SmachContainerInitialStatusCmd *
smach_msgs__msg__SmachContainerInitialStatusCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smach_msgs__msg__SmachContainerInitialStatusCmd * msg = (smach_msgs__msg__SmachContainerInitialStatusCmd *)allocator.allocate(sizeof(smach_msgs__msg__SmachContainerInitialStatusCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smach_msgs__msg__SmachContainerInitialStatusCmd));
  bool success = smach_msgs__msg__SmachContainerInitialStatusCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smach_msgs__msg__SmachContainerInitialStatusCmd__destroy(smach_msgs__msg__SmachContainerInitialStatusCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smach_msgs__msg__SmachContainerInitialStatusCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__init(smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smach_msgs__msg__SmachContainerInitialStatusCmd * data = NULL;

  if (size) {
    data = (smach_msgs__msg__SmachContainerInitialStatusCmd *)allocator.zero_allocate(size, sizeof(smach_msgs__msg__SmachContainerInitialStatusCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smach_msgs__msg__SmachContainerInitialStatusCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smach_msgs__msg__SmachContainerInitialStatusCmd__fini(&data[i - 1]);
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
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__fini(smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * array)
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
      smach_msgs__msg__SmachContainerInitialStatusCmd__fini(&array->data[i]);
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

smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence *
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * array = (smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence *)allocator.allocate(sizeof(smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__destroy(smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__are_equal(const smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * lhs, const smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smach_msgs__msg__SmachContainerInitialStatusCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence__copy(
  const smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * input,
  smach_msgs__msg__SmachContainerInitialStatusCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smach_msgs__msg__SmachContainerInitialStatusCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smach_msgs__msg__SmachContainerInitialStatusCmd * data =
      (smach_msgs__msg__SmachContainerInitialStatusCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smach_msgs__msg__SmachContainerInitialStatusCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smach_msgs__msg__SmachContainerInitialStatusCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smach_msgs__msg__SmachContainerInitialStatusCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
