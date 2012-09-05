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

  // Exported permission: administer delta blocks.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'delta_blocks',
  );

  return $permissions;
}
