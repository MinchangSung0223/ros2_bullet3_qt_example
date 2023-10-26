// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_bullet3_qt_example:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "ros2_bullet3_qt_example/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_bullet3_qt_example__msg__RobotState__init(ros2_bullet3_qt_example__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
ros2_bullet3_qt_example__msg__RobotState__fini(ros2_bullet3_qt_example__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
ros2_bullet3_qt_example__msg__RobotState__are_equal(const ros2_bullet3_qt_example__msg__RobotState * lhs, const ros2_bullet3_qt_example__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
ros2_bullet3_qt_example__msg__RobotState__copy(
  const ros2_bullet3_qt_example__msg__RobotState * input,
  ros2_bullet3_qt_example__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

ros2_bullet3_qt_example__msg__RobotState *
ros2_bullet3_qt_example__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_bullet3_qt_example__msg__RobotState * msg = (ros2_bullet3_qt_example__msg__RobotState *)allocator.allocate(sizeof(ros2_bullet3_qt_example__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_bullet3_qt_example__msg__RobotState));
  bool success = ros2_bullet3_qt_example__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_bullet3_qt_example__msg__RobotState__destroy(ros2_bullet3_qt_example__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_bullet3_qt_example__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_bullet3_qt_example__msg__RobotState__Sequence__init(ros2_bullet3_qt_example__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_bullet3_qt_example__msg__RobotState * data = NULL;

  if (size) {
    data = (ros2_bullet3_qt_example__msg__RobotState *)allocator.zero_allocate(size, sizeof(ros2_bullet3_qt_example__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_bullet3_qt_example__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_bullet3_qt_example__msg__RobotState__fini(&data[i - 1]);
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
ros2_bullet3_qt_example__msg__RobotState__Sequence__fini(ros2_bullet3_qt_example__msg__RobotState__Sequence * array)
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
      ros2_bullet3_qt_example__msg__RobotState__fini(&array->data[i]);
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

ros2_bullet3_qt_example__msg__RobotState__Sequence *
ros2_bullet3_qt_example__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_bullet3_qt_example__msg__RobotState__Sequence * array = (ros2_bullet3_qt_example__msg__RobotState__Sequence *)allocator.allocate(sizeof(ros2_bullet3_qt_example__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_bullet3_qt_example__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_bullet3_qt_example__msg__RobotState__Sequence__destroy(ros2_bullet3_qt_example__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_bullet3_qt_example__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_bullet3_qt_example__msg__RobotState__Sequence__are_equal(const ros2_bullet3_qt_example__msg__RobotState__Sequence * lhs, const ros2_bullet3_qt_example__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_bullet3_qt_example__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_bullet3_qt_example__msg__RobotState__Sequence__copy(
  const ros2_bullet3_qt_example__msg__RobotState__Sequence * input,
  ros2_bullet3_qt_example__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_bullet3_qt_example__msg__RobotState);
    ros2_bullet3_qt_example__msg__RobotState * data =
      (ros2_bullet3_qt_example__msg__RobotState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_bullet3_qt_example__msg__RobotState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_bullet3_qt_example__msg__RobotState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_bullet3_qt_example__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
