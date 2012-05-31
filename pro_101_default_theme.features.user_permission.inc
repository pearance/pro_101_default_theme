<?php
/**
 * @file
 * pro_101_default_theme.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_default_theme_user_default_permissions() {
  $permissions = array();

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'ds',
  );

  // Exported permission: administer delta blocks.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: use text format ds_code.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
