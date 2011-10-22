<?php
/**
 * @file
 * ows_curator.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ows_curator_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit any channel content
  $permissions['edit any channel content'] = array(
    'name' => 'edit any channel content',
    'roles' => array(),
  );

  return $permissions;
}
