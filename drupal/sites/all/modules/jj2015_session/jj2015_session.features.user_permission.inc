<?php
/**
 * @file
 * jj2015_session.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jj2015_session_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create speaker content'.
  $permissions['create speaker content'] = array(
    'name' => 'create speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any speaker content'.
  $permissions['delete any speaker content'] = array(
    'name' => 'delete any speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own speaker content'.
  $permissions['delete own speaker content'] = array(
    'name' => 'delete own speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in event_day'.
  $permissions['delete terms in event_day'] = array(
    'name' => 'delete terms in event_day',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in session_types'.
  $permissions['delete terms in session_types'] = array(
    'name' => 'delete terms in session_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any speaker content'.
  $permissions['edit any speaker content'] = array(
    'name' => 'edit any speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own speaker content'.
  $permissions['edit own speaker content'] = array(
    'name' => 'edit own speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in event_day'.
  $permissions['edit terms in event_day'] = array(
    'name' => 'edit terms in event_day',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in session_types'.
  $permissions['edit terms in session_types'] = array(
    'name' => 'edit terms in session_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter speaker revision log entry'.
  $permissions['enter speaker revision log entry'] = array(
    'name' => 'enter speaker revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override speaker authored by option'.
  $permissions['override speaker authored by option'] = array(
    'name' => 'override speaker authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override speaker authored on option'.
  $permissions['override speaker authored on option'] = array(
    'name' => 'override speaker authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override speaker promote to front page option'.
  $permissions['override speaker promote to front page option'] = array(
    'name' => 'override speaker promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override speaker published option'.
  $permissions['override speaker published option'] = array(
    'name' => 'override speaker published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override speaker revision option'.
  $permissions['override speaker revision option'] = array(
    'name' => 'override speaker revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override speaker sticky option'.
  $permissions['override speaker sticky option'] = array(
    'name' => 'override speaker sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'view any unpublished speaker content'.
  $permissions['view any unpublished speaker content'] = array(
    'name' => 'view any unpublished speaker content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
