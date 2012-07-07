<?php
/**
 * @file
 * pro_101_default_theme.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function pro_101_default_theme_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'front';
  $delta->name = 'Front';
  $delta->description = '';
  $delta->theme = 'prostarter';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_prostarter_settings' => array(
      'alpha_region_preface_first_columns' => '12',
    ),
    'color_prostarter_files' => NULL,
    'color_prostarter_logo' => NULL,
    'color_prostarter_palette' => NULL,
    'color_prostarter_stylesheets' => NULL,
    'color_prostarter_screenshot' => NULL,
  );
  $export['front'] = $delta;

  return $export;
}
