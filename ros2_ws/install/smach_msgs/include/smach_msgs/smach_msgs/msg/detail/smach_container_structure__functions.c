// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smach_msgs:msg/SmachContainerStructure.idl
// generated code does not contain a copyright notice
#include "smach_msgs/msg/detail/smach_container_structure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `path`
// Member `children`
// Member `internal_outcomes`
// Member `outcomes_from`
// Member `outcomes_to`
// Member `container_outcomes`
#include "rosidl_runtime_c/string_functions.h"

bool
smach_msgs__msg__SmachContainerStructure__init(smach_msgs__msg__SmachContainerStructure * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // children
  if (!rosidl_runtime_c__String__Sequence__init(&msg->children, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // internal_outcomes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->internal_outcomes, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // outcomes_from
  if (!rosidl_runtime_c__String__Sequence__init(&msg->outcomes_from, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // outcomes_to
  if (!rosidl_runtime_c__String__Sequence__init(&msg->outcomes_to, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  // container_outcomes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->container_outcomes, 0)) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
    return false;
  }
  return true;
}

void
smach_msgs__msg__SmachContainerStructure__fini(smach_msgs__msg__SmachContainerStructure * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // path
  rosidl_runtime_c__String__fini(&msg->path);
  // children
  rosidl_runtime_c__String__Sequence__fini(&msg->children);
  // internal_outcomes
  rosidl_runtime_c__String__Sequence__fini(&msg->internal_outcomes);
  // outcomes_from
  rosidl_runtime_c__String__Sequence__fini(&msg->outcomes_from);
  // outcomes_to
  rosidl_runtime_c__String__Sequence__fini(&msg->outcomes_to);
  // container_outcomes
  rosidl_runtime_c__String__Sequence__fini(&msg->container_outcomes);
}

bool
smach_msgs__msg__SmachContainerStructure__are_equal(const smach_msgs__msg__SmachContainerStructure * lhs, const smach_msgs__msg__SmachContainerStructure * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // children
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->children), &(rhs->children)))
  {
    return false;
  }
  // internal_outcomes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->internal_outcomes), &(rhs->internal_outcomes)))
  {
    return false;
  }
  // outcomes_from
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->outcomes_from), &(rhs->outcomes_from)))
  {
    return false;
  }
  // outcomes_to
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->outcomes_to), &(rhs->outcomes_to)))
  {
    return false;
  }
  // container_outcomes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->container_outcomes), &(rhs->container_outcomes)))
  {
    return false;
  }
  return true;
}

bool
smach_msgs__msg__SmachContainerStructure__copy(
  const smach_msgs__msg__SmachContainerStructure * input,
  smach_msgs__msg__SmachContainerStructure * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // children
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->children), &(output->children)))
  {
    return false;
  }
  // internal_outcomes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->internal_outcomes), &(output->internal_outcomes)))
  {
    return false;
  }
  // outcomes_from
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->outcomes_from), &(output->outcomes_from)))
  {
    return false;
  }
  // outcomes_to
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->outcomes_to), &(output->outcomes_to)))
  {
    return false;
  }
  // container_outcomes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->container_outcomes), &(output->container_outcomes)))
  {
    return false;
  }
  return true;
}

smach_msgs__msg__SmachContainerStructure *
smach_msgs__msg__SmachContainerStructure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smach_msgs__msg__SmachContainerStructure * msg = (smach_msgs__msg__SmachContainerStructure *)allocator.allocate(sizeof(smach_msgs__msg__SmachContainerStructure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smach_msgs__msg__SmachContainerStructure));
  bool success = smach_msgs__msg__SmachContainerStructure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smach_msgs__msg__SmachContainerStructure__destroy(smach_msgs__msg__SmachContainerStructure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smach_msgs__msg__SmachContainerStructure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smach_msgs__msg__SmachContainerStructure__Sequence__init(smach_msgs__msg__SmachContainerStructure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smach_msgs__msg__SmachContainerStructure * data = NULL;

  if (size) {
    data = (smach_msgs__msg__SmachContainerStructure *)allocator.zero_allocate(size, sizeof(smach_msgs__msg__SmachContainerStructure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smach_msgs__msg__SmachContainerStructure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smach_msgs__msg__SmachContainerStructure__fini(&data[i - 1]);
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
smach_msgs__msg__SmachContainerStructure__Sequence__fini(smach_msgs__msg__SmachContainerStructure__Sequence * array)
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
      smach_msgs__msg__SmachContainerStructure__fini(&array->data[i]);
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

smach_msgs__msg__SmachContainerStructure__Sequence *
smach_msgs__msg__SmachContainerStructure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smach_msgs__msg__SmachContainerStructure__Sequence * array = (smach_msgs__msg__SmachContainerStructure__Sequence *)allocator.allocate(sizeof(smach_msgs__msg__SmachContainerStructure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smach_msgs__msg__SmachContainerStructure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smach_msgs__msg__SmachContainerStructure__Sequence__destroy(smach_msgs__msg__SmachContainerStructure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smach_msgs__msg__SmachContainerStructure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smach_msgs__msg__SmachContainerStructure__Sequence__are_equal(const smach_msgs__msg__SmachContainerStructure__Sequence * lhs, const smach_msgs__msg__SmachContainerStructure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smach_msgs__msg__SmachContainerStructure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smach_msgs__msg__SmachContainerStructure__Sequence__copy(
  const smach_msgs__msg__SmachContainerStructure__Sequence * input,
  smach_msgs__msg__SmachContainerStructure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smach_msgs__msg__SmachContainerStructure);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smach_msgs__msg__SmachContainerStructure * data =
      (smach_msgs__msg__SmachContainerStructure *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smach_msgs__msg__SmachContainerStructure__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smach_msgs__msg__SmachContainerStructure__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smach_msgs__msg__SmachContainerStructure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
