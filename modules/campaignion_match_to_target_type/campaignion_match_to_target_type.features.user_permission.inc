<?php

/**
 * @file
 * campaignion_match_to_target_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campaignion_match_to_target_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create target content'.
  $permissions['create target content'] = array(
    'name' => 'create target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any target content'.
  $permissions['delete any target content'] = array(
    'name' => 'delete any target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own target content'.
  $permissions['delete own target content'] = array(
    'name' => 'delete own target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any target content'.
  $permissions['edit any target content'] = array(
    'name' => 'edit any target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own target content'.
  $permissions['edit own target content'] = array(
    'name' => 'edit own target content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
