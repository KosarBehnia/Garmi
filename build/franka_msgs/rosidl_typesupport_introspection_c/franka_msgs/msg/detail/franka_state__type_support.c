// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:msg/FrankaState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/msg/detail/franka_state__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/msg/detail/franka_state__functions.h"
#include "franka_msgs/msg/detail/franka_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `current_errors`
// Member `last_motion_errors`
#include "franka_msgs/msg/errors.h"
// Member `current_errors`
// Member `last_motion_errors`
#include "franka_msgs/msg/detail/errors__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__msg__FrankaState__init(message_memory);
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_fini_function(void * message_memory)
{
  franka_msgs__msg__FrankaState__fini(message_memory);
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__cartesian_collision(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__cartesian_collision(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__cartesian_collision(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__cartesian_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__cartesian_collision(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__cartesian_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__cartesian_collision(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__cartesian_contact(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__cartesian_contact(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__cartesian_contact(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__cartesian_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__cartesian_contact(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__cartesian_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__cartesian_contact(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__q(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__q(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__q(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__q(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__q(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__q_d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__q_d(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__q_d(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__q_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__q_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__q_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__q_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__dq(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dq(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dq(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__dq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dq(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__dq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dq(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__dq_d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dq_d(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dq_d(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__dq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dq_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__dq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dq_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__ddq_d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ddq_d(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ddq_d(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__ddq_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ddq_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__ddq_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ddq_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__theta(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__theta(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__theta(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__theta(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__theta(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__dtheta(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dtheta(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dtheta(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__dtheta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dtheta(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__dtheta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dtheta(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__tau_j(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_j(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_j(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__tau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_j(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__tau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_j(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__dtau_j(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dtau_j(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dtau_j(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__dtau_j(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dtau_j(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__dtau_j(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dtau_j(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__tau_j_d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_j_d(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_j_d(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__tau_j_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_j_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__tau_j_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_j_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__k_f_ext_hat_k(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__k_f_ext_hat_k(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__k_f_ext_hat_k(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__k_f_ext_hat_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__k_f_ext_hat_k(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__k_f_ext_hat_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__k_f_ext_hat_k(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__elbow(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__elbow(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__elbow(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__elbow_d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow_d(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow_d(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__elbow_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__elbow_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__elbow_c(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow_c(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow_c(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__elbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow_c(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__elbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow_c(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__delbow_c(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__delbow_c(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__delbow_c(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__delbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__delbow_c(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__delbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__delbow_c(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__ddelbow_c(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ddelbow_c(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ddelbow_c(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__ddelbow_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ddelbow_c(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__ddelbow_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ddelbow_c(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__joint_collision(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__joint_collision(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__joint_collision(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__joint_collision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__joint_collision(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__joint_collision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__joint_collision(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__joint_contact(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__joint_contact(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__joint_contact(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__joint_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__joint_contact(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__joint_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__joint_contact(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_f_ext_hat_k(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_f_ext_hat_k(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_f_ext_hat_k(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_f_ext_hat_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_f_ext_hat_k(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_f_ext_hat_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_f_ext_hat_k(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_dp_ee_d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_dp_ee_d(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_dp_ee_d(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_dp_ee_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_dp_ee_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_dp_ee_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_dp_ee_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_ddp_o(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_ddp_o(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_ddp_o(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_ddp_o(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_ddp_o(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_ddp_o(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_ddp_o(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_dp_ee_c(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_dp_ee_c(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_dp_ee_c(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_dp_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_dp_ee_c(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_dp_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_dp_ee_c(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_ddp_ee_c(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_ddp_ee_c(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_ddp_ee_c(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_ddp_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_ddp_ee_c(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_ddp_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_ddp_ee_c(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__tau_ext_hat_filtered(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_ext_hat_filtered(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_ext_hat_filtered(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__tau_ext_hat_filtered(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_ext_hat_filtered(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__tau_ext_hat_filtered(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_ext_hat_filtered(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_x_cee(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_cee(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_cee(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_x_cee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_cee(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_x_cee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_cee(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__i_ee(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_ee(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_ee(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__i_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_ee(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__i_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_ee(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_x_cload(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_cload(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_cload(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_x_cload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_cload(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_x_cload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_cload(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__i_load(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_load(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_load(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__i_load(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_load(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__i_load(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_load(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_x_ctotal(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_ctotal(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_ctotal(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_x_ctotal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_ctotal(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_x_ctotal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_ctotal(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__i_total(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_total(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_total(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__i_total(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_total(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__i_total(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_total(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_t_ee(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_t_ee_d(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee_d(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee_d(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_t_ee_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_t_ee_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_t_ee_c(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee_c(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee_c(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_t_ee_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee_c(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_t_ee_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee_c(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_t_ee(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_t_ee(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_t_ee(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_t_ee(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_t_ee(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_t_ne(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_t_ne(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_t_ne(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_t_ne(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_t_ne(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_t_ne(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_t_ne(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__ne_t_ee(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ne_t_ee(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ne_t_ee(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__ne_t_ee(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ne_t_ee(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__ne_t_ee(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ne_t_ee(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__ee_t_k(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ee_t_k(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ee_t_k(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__ee_t_k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ee_t_k(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__ee_t_k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ee_t_k(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_member_array[48] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cartesian_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, cartesian_collision),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__cartesian_collision,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__cartesian_collision,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__cartesian_collision,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__cartesian_collision,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__cartesian_collision,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cartesian_contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, cartesian_contact),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__cartesian_contact,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__cartesian_contact,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__cartesian_contact,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__cartesian_contact,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__cartesian_contact,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, q),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__q,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__q,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__q,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__q,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__q,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, q_d),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__q_d,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__q_d,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__q_d,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__q_d,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__q_d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, dq),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__dq,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dq,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dq,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__dq,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__dq,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dq_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, dq_d),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__dq_d,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dq_d,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dq_d,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__dq_d,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__dq_d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ddq_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, ddq_d),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__ddq_d,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ddq_d,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ddq_d,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__ddq_d,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__ddq_d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, theta),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__theta,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__theta,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__theta,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__theta,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__theta,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dtheta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, dtheta),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__dtheta,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dtheta,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dtheta,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__dtheta,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__dtheta,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tau_j",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, tau_j),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__tau_j,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_j,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_j,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__tau_j,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__tau_j,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dtau_j",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, dtau_j),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__dtau_j,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__dtau_j,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__dtau_j,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__dtau_j,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__dtau_j,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tau_j_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, tau_j_d),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__tau_j_d,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_j_d,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_j_d,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__tau_j_d,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__tau_j_d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k_f_ext_hat_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, k_f_ext_hat_k),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__k_f_ext_hat_k,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__k_f_ext_hat_k,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__k_f_ext_hat_k,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__k_f_ext_hat_k,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__k_f_ext_hat_k,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, elbow),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__elbow,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__elbow,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__elbow,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, elbow_d),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__elbow_d,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow_d,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow_d,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__elbow_d,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__elbow_d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elbow_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, elbow_c),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__elbow_c,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__elbow_c,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__elbow_c,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__elbow_c,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__elbow_c,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delbow_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, delbow_c),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__delbow_c,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__delbow_c,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__delbow_c,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__delbow_c,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__delbow_c,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ddelbow_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, ddelbow_c),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__ddelbow_c,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ddelbow_c,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ddelbow_c,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__ddelbow_c,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__ddelbow_c,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_collision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, joint_collision),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__joint_collision,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__joint_collision,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__joint_collision,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__joint_collision,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__joint_collision,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, joint_contact),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__joint_contact,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__joint_contact,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__joint_contact,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__joint_contact,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__joint_contact,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_f_ext_hat_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, o_f_ext_hat_k),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_f_ext_hat_k,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_f_ext_hat_k,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_f_ext_hat_k,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_f_ext_hat_k,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_f_ext_hat_k,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_dp_ee_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, o_dp_ee_d),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_dp_ee_d,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_dp_ee_d,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_dp_ee_d,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_dp_ee_d,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_dp_ee_d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_ddp_o",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, o_ddp_o),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_ddp_o,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_ddp_o,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_ddp_o,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_ddp_o,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_ddp_o,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_dp_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, o_dp_ee_c),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_dp_ee_c,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_dp_ee_c,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_dp_ee_c,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_dp_ee_c,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_dp_ee_c,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_ddp_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, o_ddp_ee_c),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_ddp_ee_c,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_ddp_ee_c,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_ddp_ee_c,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_ddp_ee_c,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_ddp_ee_c,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tau_ext_hat_filtered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, tau_ext_hat_filtered),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__tau_ext_hat_filtered,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__tau_ext_hat_filtered,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__tau_ext_hat_filtered,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__tau_ext_hat_filtered,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__tau_ext_hat_filtered,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, m_ee),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_x_cee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, f_x_cee),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_x_cee,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_cee,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_cee,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_x_cee,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_x_cee,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, i_ee),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__i_ee,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_ee,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_ee,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__i_ee,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__i_ee,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, m_load),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_x_cload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, f_x_cload),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_x_cload,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_cload,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_cload,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_x_cload,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_x_cload,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i_load",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, i_load),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__i_load,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_load,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_load,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__i_load,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__i_load,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, m_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_x_ctotal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, f_x_ctotal),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_x_ctotal,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_x_ctotal,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_x_ctotal,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_x_ctotal,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_x_ctotal,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, i_total),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__i_total,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__i_total,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__i_total,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__i_total,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__i_total,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_t_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, o_t_ee),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_t_ee,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_t_ee,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_t_ee,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_t_ee_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, o_t_ee_d),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_t_ee_d,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee_d,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee_d,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_t_ee_d,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_t_ee_d,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "o_t_ee_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, o_t_ee_c),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__o_t_ee_c,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__o_t_ee_c,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__o_t_ee_c,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__o_t_ee_c,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__o_t_ee_c,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_t_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, f_t_ee),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_t_ee,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_t_ee,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_t_ee,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_t_ee,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_t_ee,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_t_ne",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, f_t_ne),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__f_t_ne,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__f_t_ne,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__f_t_ne,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__f_t_ne,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__f_t_ne,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ne_t_ee",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, ne_t_ee),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__ne_t_ee,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ne_t_ee,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ne_t_ee,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__ne_t_ee,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__ne_t_ee,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ee_t_k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, ee_t_k),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__size_function__FrankaState__ee_t_k,  // size() function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_const_function__FrankaState__ee_t_k,  // get_const(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__get_function__FrankaState__ee_t_k,  // get(index) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__fetch_function__FrankaState__ee_t_k,  // fetch(index, &value) function pointer
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__assign_function__FrankaState__ee_t_k,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_command_success_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, control_command_success_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, robot_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, current_errors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_motion_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__FrankaState, last_motion_errors),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_members = {
  "franka_msgs__msg",  // message namespace
  "FrankaState",  // message name
  48,  // number of fields
  sizeof(franka_msgs__msg__FrankaState),
  franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_member_array,  // message members
  franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_type_support_handle = {
  0,
  &franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, FrankaState)() {
  franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_member_array[46].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, Errors)();
  franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_member_array[47].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, Errors)();
  if (!franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_type_support_handle.typesupport_identifier) {
    franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_msgs__msg__FrankaState__rosidl_typesupport_introspection_c__FrankaState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
