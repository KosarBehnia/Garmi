// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multi_mode_control_msgs:srv/SetCartesianImpedance.idl
// generated code does not contain a copyright notice
#include "multi_mode_control_msgs/srv/detail/set_cartesian_impedance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__init(multi_mode_control_msgs__srv__SetCartesianImpedance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // stiffness
  // damping_ratio
  // nullspace_stiffness
  return true;
}

void
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__fini(multi_mode_control_msgs__srv__SetCartesianImpedance_Request * msg)
{
  if (!msg) {
    return;
  }
  // stiffness
  // damping_ratio
  // nullspace_stiffness
}

bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__are_equal(const multi_mode_control_msgs__srv__SetCartesianImpedance_Request * lhs, const multi_mode_control_msgs__srv__SetCartesianImpedance_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stiffness
  for (size_t i = 0; i < 36; ++i) {
    if (lhs->stiffness[i] != rhs->stiffness[i]) {
      return false;
    }
  }
  // damping_ratio
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->damping_ratio[i] != rhs->damping_ratio[i]) {
      return false;
    }
  }
  // nullspace_stiffness
  if (lhs->nullspace_stiffness != rhs->nullspace_stiffness) {
    return false;
  }
  return true;
}

bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__copy(
  const multi_mode_control_msgs__srv__SetCartesianImpedance_Request * input,
  multi_mode_control_msgs__srv__SetCartesianImpedance_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // stiffness
  for (size_t i = 0; i < 36; ++i) {
    output->stiffness[i] = input->stiffness[i];
  }
  // damping_ratio
  for (size_t i = 0; i < 6; ++i) {
    output->damping_ratio[i] = input->damping_ratio[i];
  }
  // nullspace_stiffness
  output->nullspace_stiffness = input->nullspace_stiffness;
  return true;
}

multi_mode_control_msgs__srv__SetCartesianImpedance_Request *
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_mode_control_msgs__srv__SetCartesianImpedance_Request * msg = (multi_mode_control_msgs__srv__SetCartesianImpedance_Request *)allocator.allocate(sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Request));
  bool success = multi_mode_control_msgs__srv__SetCartesianImpedance_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__destroy(multi_mode_control_msgs__srv__SetCartesianImpedance_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_mode_control_msgs__srv__SetCartesianImpedance_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence__init(multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_mode_control_msgs__srv__SetCartesianImpedance_Request * data = NULL;

  if (size) {
    data = (multi_mode_control_msgs__srv__SetCartesianImpedance_Request *)allocator.zero_allocate(size, sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_mode_control_msgs__srv__SetCartesianImpedance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_mode_control_msgs__srv__SetCartesianImpedance_Request__fini(&data[i - 1]);
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
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence__fini(multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence * array)
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
      multi_mode_control_msgs__srv__SetCartesianImpedance_Request__fini(&array->data[i]);
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

multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence *
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence * array = (multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence *)allocator.allocate(sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence__destroy(multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence__are_equal(const multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence * lhs, const multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_mode_control_msgs__srv__SetCartesianImpedance_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence__copy(
  const multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence * input,
  multi_mode_control_msgs__srv__SetCartesianImpedance_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_mode_control_msgs__srv__SetCartesianImpedance_Request * data =
      (multi_mode_control_msgs__srv__SetCartesianImpedance_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_mode_control_msgs__srv__SetCartesianImpedance_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_mode_control_msgs__srv__SetCartesianImpedance_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_mode_control_msgs__srv__SetCartesianImpedance_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__init(multi_mode_control_msgs__srv__SetCartesianImpedance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__fini(multi_mode_control_msgs__srv__SetCartesianImpedance_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__are_equal(const multi_mode_control_msgs__srv__SetCartesianImpedance_Response * lhs, const multi_mode_control_msgs__srv__SetCartesianImpedance_Response * rhs)
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
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__copy(
  const multi_mode_control_msgs__srv__SetCartesianImpedance_Response * input,
  multi_mode_control_msgs__srv__SetCartesianImpedance_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

multi_mode_control_msgs__srv__SetCartesianImpedance_Response *
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_mode_control_msgs__srv__SetCartesianImpedance_Response * msg = (multi_mode_control_msgs__srv__SetCartesianImpedance_Response *)allocator.allocate(sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Response));
  bool success = multi_mode_control_msgs__srv__SetCartesianImpedance_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__destroy(multi_mode_control_msgs__srv__SetCartesianImpedance_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_mode_control_msgs__srv__SetCartesianImpedance_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence__init(multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_mode_control_msgs__srv__SetCartesianImpedance_Response * data = NULL;

  if (size) {
    data = (multi_mode_control_msgs__srv__SetCartesianImpedance_Response *)allocator.zero_allocate(size, sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_mode_control_msgs__srv__SetCartesianImpedance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_mode_control_msgs__srv__SetCartesianImpedance_Response__fini(&data[i - 1]);
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
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence__fini(multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence * array)
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
      multi_mode_control_msgs__srv__SetCartesianImpedance_Response__fini(&array->data[i]);
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

multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence *
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence * array = (multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence *)allocator.allocate(sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence__destroy(multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence__are_equal(const multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence * lhs, const multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_mode_control_msgs__srv__SetCartesianImpedance_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence__copy(
  const multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence * input,
  multi_mode_control_msgs__srv__SetCartesianImpedance_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_mode_control_msgs__srv__SetCartesianImpedance_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_mode_control_msgs__srv__SetCartesianImpedance_Response * data =
      (multi_mode_control_msgs__srv__SetCartesianImpedance_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_mode_control_msgs__srv__SetCartesianImpedance_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_mode_control_msgs__srv__SetCartesianImpedance_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_mode_control_msgs__srv__SetCartesianImpedance_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
