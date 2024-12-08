// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sequencer_itf:action/Sequencer.idl
// generated code does not contain a copyright notice
#include "sequencer_itf/action/detail/sequencer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `commands`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
sequencer_itf__action__Sequencer_Goal__init(sequencer_itf__action__Sequencer_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // commands
  if (!rosidl_runtime_c__double__Sequence__init(&msg->commands, 0)) {
    sequencer_itf__action__Sequencer_Goal__fini(msg);
    return false;
  }
  return true;
}

void
sequencer_itf__action__Sequencer_Goal__fini(sequencer_itf__action__Sequencer_Goal * msg)
{
  if (!msg) {
    return;
  }
  // commands
  rosidl_runtime_c__double__Sequence__fini(&msg->commands);
}

bool
sequencer_itf__action__Sequencer_Goal__are_equal(const sequencer_itf__action__Sequencer_Goal * lhs, const sequencer_itf__action__Sequencer_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // commands
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->commands), &(rhs->commands)))
  {
    return false;
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_Goal__copy(
  const sequencer_itf__action__Sequencer_Goal * input,
  sequencer_itf__action__Sequencer_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // commands
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->commands), &(output->commands)))
  {
    return false;
  }
  return true;
}

sequencer_itf__action__Sequencer_Goal *
sequencer_itf__action__Sequencer_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Goal * msg = (sequencer_itf__action__Sequencer_Goal *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sequencer_itf__action__Sequencer_Goal));
  bool success = sequencer_itf__action__Sequencer_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sequencer_itf__action__Sequencer_Goal__destroy(sequencer_itf__action__Sequencer_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sequencer_itf__action__Sequencer_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sequencer_itf__action__Sequencer_Goal__Sequence__init(sequencer_itf__action__Sequencer_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Goal * data = NULL;

  if (size) {
    data = (sequencer_itf__action__Sequencer_Goal *)allocator.zero_allocate(size, sizeof(sequencer_itf__action__Sequencer_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sequencer_itf__action__Sequencer_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sequencer_itf__action__Sequencer_Goal__fini(&data[i - 1]);
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
sequencer_itf__action__Sequencer_Goal__Sequence__fini(sequencer_itf__action__Sequencer_Goal__Sequence * array)
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
      sequencer_itf__action__Sequencer_Goal__fini(&array->data[i]);
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

sequencer_itf__action__Sequencer_Goal__Sequence *
sequencer_itf__action__Sequencer_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Goal__Sequence * array = (sequencer_itf__action__Sequencer_Goal__Sequence *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sequencer_itf__action__Sequencer_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sequencer_itf__action__Sequencer_Goal__Sequence__destroy(sequencer_itf__action__Sequencer_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sequencer_itf__action__Sequencer_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sequencer_itf__action__Sequencer_Goal__Sequence__are_equal(const sequencer_itf__action__Sequencer_Goal__Sequence * lhs, const sequencer_itf__action__Sequencer_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sequencer_itf__action__Sequencer_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_Goal__Sequence__copy(
  const sequencer_itf__action__Sequencer_Goal__Sequence * input,
  sequencer_itf__action__Sequencer_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sequencer_itf__action__Sequencer_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sequencer_itf__action__Sequencer_Goal * data =
      (sequencer_itf__action__Sequencer_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sequencer_itf__action__Sequencer_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sequencer_itf__action__Sequencer_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sequencer_itf__action__Sequencer_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
sequencer_itf__action__Sequencer_Result__init(sequencer_itf__action__Sequencer_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    sequencer_itf__action__Sequencer_Result__fini(msg);
    return false;
  }
  return true;
}

void
sequencer_itf__action__Sequencer_Result__fini(sequencer_itf__action__Sequencer_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
sequencer_itf__action__Sequencer_Result__are_equal(const sequencer_itf__action__Sequencer_Result * lhs, const sequencer_itf__action__Sequencer_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_Result__copy(
  const sequencer_itf__action__Sequencer_Result * input,
  sequencer_itf__action__Sequencer_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

sequencer_itf__action__Sequencer_Result *
sequencer_itf__action__Sequencer_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Result * msg = (sequencer_itf__action__Sequencer_Result *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sequencer_itf__action__Sequencer_Result));
  bool success = sequencer_itf__action__Sequencer_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sequencer_itf__action__Sequencer_Result__destroy(sequencer_itf__action__Sequencer_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sequencer_itf__action__Sequencer_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sequencer_itf__action__Sequencer_Result__Sequence__init(sequencer_itf__action__Sequencer_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Result * data = NULL;

  if (size) {
    data = (sequencer_itf__action__Sequencer_Result *)allocator.zero_allocate(size, sizeof(sequencer_itf__action__Sequencer_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sequencer_itf__action__Sequencer_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sequencer_itf__action__Sequencer_Result__fini(&data[i - 1]);
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
sequencer_itf__action__Sequencer_Result__Sequence__fini(sequencer_itf__action__Sequencer_Result__Sequence * array)
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
      sequencer_itf__action__Sequencer_Result__fini(&array->data[i]);
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

sequencer_itf__action__Sequencer_Result__Sequence *
sequencer_itf__action__Sequencer_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Result__Sequence * array = (sequencer_itf__action__Sequencer_Result__Sequence *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sequencer_itf__action__Sequencer_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sequencer_itf__action__Sequencer_Result__Sequence__destroy(sequencer_itf__action__Sequencer_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sequencer_itf__action__Sequencer_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sequencer_itf__action__Sequencer_Result__Sequence__are_equal(const sequencer_itf__action__Sequencer_Result__Sequence * lhs, const sequencer_itf__action__Sequencer_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sequencer_itf__action__Sequencer_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_Result__Sequence__copy(
  const sequencer_itf__action__Sequencer_Result__Sequence * input,
  sequencer_itf__action__Sequencer_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sequencer_itf__action__Sequencer_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sequencer_itf__action__Sequencer_Result * data =
      (sequencer_itf__action__Sequencer_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sequencer_itf__action__Sequencer_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sequencer_itf__action__Sequencer_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sequencer_itf__action__Sequencer_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
sequencer_itf__action__Sequencer_Feedback__init(sequencer_itf__action__Sequencer_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    sequencer_itf__action__Sequencer_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
sequencer_itf__action__Sequencer_Feedback__fini(sequencer_itf__action__Sequencer_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
sequencer_itf__action__Sequencer_Feedback__are_equal(const sequencer_itf__action__Sequencer_Feedback * lhs, const sequencer_itf__action__Sequencer_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_Feedback__copy(
  const sequencer_itf__action__Sequencer_Feedback * input,
  sequencer_itf__action__Sequencer_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

sequencer_itf__action__Sequencer_Feedback *
sequencer_itf__action__Sequencer_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Feedback * msg = (sequencer_itf__action__Sequencer_Feedback *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sequencer_itf__action__Sequencer_Feedback));
  bool success = sequencer_itf__action__Sequencer_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sequencer_itf__action__Sequencer_Feedback__destroy(sequencer_itf__action__Sequencer_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sequencer_itf__action__Sequencer_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sequencer_itf__action__Sequencer_Feedback__Sequence__init(sequencer_itf__action__Sequencer_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Feedback * data = NULL;

  if (size) {
    data = (sequencer_itf__action__Sequencer_Feedback *)allocator.zero_allocate(size, sizeof(sequencer_itf__action__Sequencer_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sequencer_itf__action__Sequencer_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sequencer_itf__action__Sequencer_Feedback__fini(&data[i - 1]);
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
sequencer_itf__action__Sequencer_Feedback__Sequence__fini(sequencer_itf__action__Sequencer_Feedback__Sequence * array)
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
      sequencer_itf__action__Sequencer_Feedback__fini(&array->data[i]);
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

sequencer_itf__action__Sequencer_Feedback__Sequence *
sequencer_itf__action__Sequencer_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_Feedback__Sequence * array = (sequencer_itf__action__Sequencer_Feedback__Sequence *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sequencer_itf__action__Sequencer_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sequencer_itf__action__Sequencer_Feedback__Sequence__destroy(sequencer_itf__action__Sequencer_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sequencer_itf__action__Sequencer_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sequencer_itf__action__Sequencer_Feedback__Sequence__are_equal(const sequencer_itf__action__Sequencer_Feedback__Sequence * lhs, const sequencer_itf__action__Sequencer_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sequencer_itf__action__Sequencer_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_Feedback__Sequence__copy(
  const sequencer_itf__action__Sequencer_Feedback__Sequence * input,
  sequencer_itf__action__Sequencer_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sequencer_itf__action__Sequencer_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sequencer_itf__action__Sequencer_Feedback * data =
      (sequencer_itf__action__Sequencer_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sequencer_itf__action__Sequencer_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sequencer_itf__action__Sequencer_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sequencer_itf__action__Sequencer_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"

bool
sequencer_itf__action__Sequencer_SendGoal_Request__init(sequencer_itf__action__Sequencer_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sequencer_itf__action__Sequencer_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!sequencer_itf__action__Sequencer_Goal__init(&msg->goal)) {
    sequencer_itf__action__Sequencer_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
sequencer_itf__action__Sequencer_SendGoal_Request__fini(sequencer_itf__action__Sequencer_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  sequencer_itf__action__Sequencer_Goal__fini(&msg->goal);
}

bool
sequencer_itf__action__Sequencer_SendGoal_Request__are_equal(const sequencer_itf__action__Sequencer_SendGoal_Request * lhs, const sequencer_itf__action__Sequencer_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!sequencer_itf__action__Sequencer_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_SendGoal_Request__copy(
  const sequencer_itf__action__Sequencer_SendGoal_Request * input,
  sequencer_itf__action__Sequencer_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!sequencer_itf__action__Sequencer_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

sequencer_itf__action__Sequencer_SendGoal_Request *
sequencer_itf__action__Sequencer_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_SendGoal_Request * msg = (sequencer_itf__action__Sequencer_SendGoal_Request *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sequencer_itf__action__Sequencer_SendGoal_Request));
  bool success = sequencer_itf__action__Sequencer_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sequencer_itf__action__Sequencer_SendGoal_Request__destroy(sequencer_itf__action__Sequencer_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sequencer_itf__action__Sequencer_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sequencer_itf__action__Sequencer_SendGoal_Request__Sequence__init(sequencer_itf__action__Sequencer_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_SendGoal_Request * data = NULL;

  if (size) {
    data = (sequencer_itf__action__Sequencer_SendGoal_Request *)allocator.zero_allocate(size, sizeof(sequencer_itf__action__Sequencer_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sequencer_itf__action__Sequencer_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sequencer_itf__action__Sequencer_SendGoal_Request__fini(&data[i - 1]);
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
sequencer_itf__action__Sequencer_SendGoal_Request__Sequence__fini(sequencer_itf__action__Sequencer_SendGoal_Request__Sequence * array)
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
      sequencer_itf__action__Sequencer_SendGoal_Request__fini(&array->data[i]);
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

sequencer_itf__action__Sequencer_SendGoal_Request__Sequence *
sequencer_itf__action__Sequencer_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_SendGoal_Request__Sequence * array = (sequencer_itf__action__Sequencer_SendGoal_Request__Sequence *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sequencer_itf__action__Sequencer_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sequencer_itf__action__Sequencer_SendGoal_Request__Sequence__destroy(sequencer_itf__action__Sequencer_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sequencer_itf__action__Sequencer_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sequencer_itf__action__Sequencer_SendGoal_Request__Sequence__are_equal(const sequencer_itf__action__Sequencer_SendGoal_Request__Sequence * lhs, const sequencer_itf__action__Sequencer_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sequencer_itf__action__Sequencer_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_SendGoal_Request__Sequence__copy(
  const sequencer_itf__action__Sequencer_SendGoal_Request__Sequence * input,
  sequencer_itf__action__Sequencer_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sequencer_itf__action__Sequencer_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sequencer_itf__action__Sequencer_SendGoal_Request * data =
      (sequencer_itf__action__Sequencer_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sequencer_itf__action__Sequencer_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sequencer_itf__action__Sequencer_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sequencer_itf__action__Sequencer_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
sequencer_itf__action__Sequencer_SendGoal_Response__init(sequencer_itf__action__Sequencer_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    sequencer_itf__action__Sequencer_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
sequencer_itf__action__Sequencer_SendGoal_Response__fini(sequencer_itf__action__Sequencer_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
sequencer_itf__action__Sequencer_SendGoal_Response__are_equal(const sequencer_itf__action__Sequencer_SendGoal_Response * lhs, const sequencer_itf__action__Sequencer_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_SendGoal_Response__copy(
  const sequencer_itf__action__Sequencer_SendGoal_Response * input,
  sequencer_itf__action__Sequencer_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

sequencer_itf__action__Sequencer_SendGoal_Response *
sequencer_itf__action__Sequencer_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_SendGoal_Response * msg = (sequencer_itf__action__Sequencer_SendGoal_Response *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sequencer_itf__action__Sequencer_SendGoal_Response));
  bool success = sequencer_itf__action__Sequencer_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sequencer_itf__action__Sequencer_SendGoal_Response__destroy(sequencer_itf__action__Sequencer_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sequencer_itf__action__Sequencer_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sequencer_itf__action__Sequencer_SendGoal_Response__Sequence__init(sequencer_itf__action__Sequencer_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_SendGoal_Response * data = NULL;

  if (size) {
    data = (sequencer_itf__action__Sequencer_SendGoal_Response *)allocator.zero_allocate(size, sizeof(sequencer_itf__action__Sequencer_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sequencer_itf__action__Sequencer_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sequencer_itf__action__Sequencer_SendGoal_Response__fini(&data[i - 1]);
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
sequencer_itf__action__Sequencer_SendGoal_Response__Sequence__fini(sequencer_itf__action__Sequencer_SendGoal_Response__Sequence * array)
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
      sequencer_itf__action__Sequencer_SendGoal_Response__fini(&array->data[i]);
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

sequencer_itf__action__Sequencer_SendGoal_Response__Sequence *
sequencer_itf__action__Sequencer_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_SendGoal_Response__Sequence * array = (sequencer_itf__action__Sequencer_SendGoal_Response__Sequence *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sequencer_itf__action__Sequencer_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sequencer_itf__action__Sequencer_SendGoal_Response__Sequence__destroy(sequencer_itf__action__Sequencer_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sequencer_itf__action__Sequencer_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sequencer_itf__action__Sequencer_SendGoal_Response__Sequence__are_equal(const sequencer_itf__action__Sequencer_SendGoal_Response__Sequence * lhs, const sequencer_itf__action__Sequencer_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sequencer_itf__action__Sequencer_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_SendGoal_Response__Sequence__copy(
  const sequencer_itf__action__Sequencer_SendGoal_Response__Sequence * input,
  sequencer_itf__action__Sequencer_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sequencer_itf__action__Sequencer_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sequencer_itf__action__Sequencer_SendGoal_Response * data =
      (sequencer_itf__action__Sequencer_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sequencer_itf__action__Sequencer_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sequencer_itf__action__Sequencer_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sequencer_itf__action__Sequencer_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
sequencer_itf__action__Sequencer_GetResult_Request__init(sequencer_itf__action__Sequencer_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sequencer_itf__action__Sequencer_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
sequencer_itf__action__Sequencer_GetResult_Request__fini(sequencer_itf__action__Sequencer_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
sequencer_itf__action__Sequencer_GetResult_Request__are_equal(const sequencer_itf__action__Sequencer_GetResult_Request * lhs, const sequencer_itf__action__Sequencer_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_GetResult_Request__copy(
  const sequencer_itf__action__Sequencer_GetResult_Request * input,
  sequencer_itf__action__Sequencer_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

sequencer_itf__action__Sequencer_GetResult_Request *
sequencer_itf__action__Sequencer_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_GetResult_Request * msg = (sequencer_itf__action__Sequencer_GetResult_Request *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sequencer_itf__action__Sequencer_GetResult_Request));
  bool success = sequencer_itf__action__Sequencer_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sequencer_itf__action__Sequencer_GetResult_Request__destroy(sequencer_itf__action__Sequencer_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sequencer_itf__action__Sequencer_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sequencer_itf__action__Sequencer_GetResult_Request__Sequence__init(sequencer_itf__action__Sequencer_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_GetResult_Request * data = NULL;

  if (size) {
    data = (sequencer_itf__action__Sequencer_GetResult_Request *)allocator.zero_allocate(size, sizeof(sequencer_itf__action__Sequencer_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sequencer_itf__action__Sequencer_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sequencer_itf__action__Sequencer_GetResult_Request__fini(&data[i - 1]);
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
sequencer_itf__action__Sequencer_GetResult_Request__Sequence__fini(sequencer_itf__action__Sequencer_GetResult_Request__Sequence * array)
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
      sequencer_itf__action__Sequencer_GetResult_Request__fini(&array->data[i]);
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

sequencer_itf__action__Sequencer_GetResult_Request__Sequence *
sequencer_itf__action__Sequencer_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_GetResult_Request__Sequence * array = (sequencer_itf__action__Sequencer_GetResult_Request__Sequence *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sequencer_itf__action__Sequencer_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sequencer_itf__action__Sequencer_GetResult_Request__Sequence__destroy(sequencer_itf__action__Sequencer_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sequencer_itf__action__Sequencer_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sequencer_itf__action__Sequencer_GetResult_Request__Sequence__are_equal(const sequencer_itf__action__Sequencer_GetResult_Request__Sequence * lhs, const sequencer_itf__action__Sequencer_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sequencer_itf__action__Sequencer_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_GetResult_Request__Sequence__copy(
  const sequencer_itf__action__Sequencer_GetResult_Request__Sequence * input,
  sequencer_itf__action__Sequencer_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sequencer_itf__action__Sequencer_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sequencer_itf__action__Sequencer_GetResult_Request * data =
      (sequencer_itf__action__Sequencer_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sequencer_itf__action__Sequencer_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sequencer_itf__action__Sequencer_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sequencer_itf__action__Sequencer_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"

bool
sequencer_itf__action__Sequencer_GetResult_Response__init(sequencer_itf__action__Sequencer_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!sequencer_itf__action__Sequencer_Result__init(&msg->result)) {
    sequencer_itf__action__Sequencer_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
sequencer_itf__action__Sequencer_GetResult_Response__fini(sequencer_itf__action__Sequencer_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  sequencer_itf__action__Sequencer_Result__fini(&msg->result);
}

bool
sequencer_itf__action__Sequencer_GetResult_Response__are_equal(const sequencer_itf__action__Sequencer_GetResult_Response * lhs, const sequencer_itf__action__Sequencer_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!sequencer_itf__action__Sequencer_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_GetResult_Response__copy(
  const sequencer_itf__action__Sequencer_GetResult_Response * input,
  sequencer_itf__action__Sequencer_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!sequencer_itf__action__Sequencer_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

sequencer_itf__action__Sequencer_GetResult_Response *
sequencer_itf__action__Sequencer_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_GetResult_Response * msg = (sequencer_itf__action__Sequencer_GetResult_Response *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sequencer_itf__action__Sequencer_GetResult_Response));
  bool success = sequencer_itf__action__Sequencer_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sequencer_itf__action__Sequencer_GetResult_Response__destroy(sequencer_itf__action__Sequencer_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sequencer_itf__action__Sequencer_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sequencer_itf__action__Sequencer_GetResult_Response__Sequence__init(sequencer_itf__action__Sequencer_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_GetResult_Response * data = NULL;

  if (size) {
    data = (sequencer_itf__action__Sequencer_GetResult_Response *)allocator.zero_allocate(size, sizeof(sequencer_itf__action__Sequencer_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sequencer_itf__action__Sequencer_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sequencer_itf__action__Sequencer_GetResult_Response__fini(&data[i - 1]);
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
sequencer_itf__action__Sequencer_GetResult_Response__Sequence__fini(sequencer_itf__action__Sequencer_GetResult_Response__Sequence * array)
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
      sequencer_itf__action__Sequencer_GetResult_Response__fini(&array->data[i]);
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

sequencer_itf__action__Sequencer_GetResult_Response__Sequence *
sequencer_itf__action__Sequencer_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_GetResult_Response__Sequence * array = (sequencer_itf__action__Sequencer_GetResult_Response__Sequence *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sequencer_itf__action__Sequencer_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sequencer_itf__action__Sequencer_GetResult_Response__Sequence__destroy(sequencer_itf__action__Sequencer_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sequencer_itf__action__Sequencer_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sequencer_itf__action__Sequencer_GetResult_Response__Sequence__are_equal(const sequencer_itf__action__Sequencer_GetResult_Response__Sequence * lhs, const sequencer_itf__action__Sequencer_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sequencer_itf__action__Sequencer_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_GetResult_Response__Sequence__copy(
  const sequencer_itf__action__Sequencer_GetResult_Response__Sequence * input,
  sequencer_itf__action__Sequencer_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sequencer_itf__action__Sequencer_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sequencer_itf__action__Sequencer_GetResult_Response * data =
      (sequencer_itf__action__Sequencer_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sequencer_itf__action__Sequencer_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sequencer_itf__action__Sequencer_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sequencer_itf__action__Sequencer_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "sequencer_itf/action/detail/sequencer__functions.h"

bool
sequencer_itf__action__Sequencer_FeedbackMessage__init(sequencer_itf__action__Sequencer_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    sequencer_itf__action__Sequencer_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!sequencer_itf__action__Sequencer_Feedback__init(&msg->feedback)) {
    sequencer_itf__action__Sequencer_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
sequencer_itf__action__Sequencer_FeedbackMessage__fini(sequencer_itf__action__Sequencer_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  sequencer_itf__action__Sequencer_Feedback__fini(&msg->feedback);
}

bool
sequencer_itf__action__Sequencer_FeedbackMessage__are_equal(const sequencer_itf__action__Sequencer_FeedbackMessage * lhs, const sequencer_itf__action__Sequencer_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!sequencer_itf__action__Sequencer_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_FeedbackMessage__copy(
  const sequencer_itf__action__Sequencer_FeedbackMessage * input,
  sequencer_itf__action__Sequencer_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!sequencer_itf__action__Sequencer_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

sequencer_itf__action__Sequencer_FeedbackMessage *
sequencer_itf__action__Sequencer_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_FeedbackMessage * msg = (sequencer_itf__action__Sequencer_FeedbackMessage *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sequencer_itf__action__Sequencer_FeedbackMessage));
  bool success = sequencer_itf__action__Sequencer_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sequencer_itf__action__Sequencer_FeedbackMessage__destroy(sequencer_itf__action__Sequencer_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sequencer_itf__action__Sequencer_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sequencer_itf__action__Sequencer_FeedbackMessage__Sequence__init(sequencer_itf__action__Sequencer_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_FeedbackMessage * data = NULL;

  if (size) {
    data = (sequencer_itf__action__Sequencer_FeedbackMessage *)allocator.zero_allocate(size, sizeof(sequencer_itf__action__Sequencer_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sequencer_itf__action__Sequencer_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sequencer_itf__action__Sequencer_FeedbackMessage__fini(&data[i - 1]);
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
sequencer_itf__action__Sequencer_FeedbackMessage__Sequence__fini(sequencer_itf__action__Sequencer_FeedbackMessage__Sequence * array)
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
      sequencer_itf__action__Sequencer_FeedbackMessage__fini(&array->data[i]);
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

sequencer_itf__action__Sequencer_FeedbackMessage__Sequence *
sequencer_itf__action__Sequencer_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sequencer_itf__action__Sequencer_FeedbackMessage__Sequence * array = (sequencer_itf__action__Sequencer_FeedbackMessage__Sequence *)allocator.allocate(sizeof(sequencer_itf__action__Sequencer_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sequencer_itf__action__Sequencer_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sequencer_itf__action__Sequencer_FeedbackMessage__Sequence__destroy(sequencer_itf__action__Sequencer_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sequencer_itf__action__Sequencer_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sequencer_itf__action__Sequencer_FeedbackMessage__Sequence__are_equal(const sequencer_itf__action__Sequencer_FeedbackMessage__Sequence * lhs, const sequencer_itf__action__Sequencer_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sequencer_itf__action__Sequencer_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sequencer_itf__action__Sequencer_FeedbackMessage__Sequence__copy(
  const sequencer_itf__action__Sequencer_FeedbackMessage__Sequence * input,
  sequencer_itf__action__Sequencer_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sequencer_itf__action__Sequencer_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sequencer_itf__action__Sequencer_FeedbackMessage * data =
      (sequencer_itf__action__Sequencer_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sequencer_itf__action__Sequencer_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sequencer_itf__action__Sequencer_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sequencer_itf__action__Sequencer_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
