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
  $delta->machine_name = 'double_column';
  $delta->name = 'Double Column';
  $delta->description = 'A two equal column layout.';
  $delta->theme = 'prostarter';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_prostarter_settings' => array(
      'alpha_region_content_columns' => '6',
      'alpha_region_main_sidebar_1_columns' => '6',
    ),
  );
  $export['double_column'] = $delta;

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
      'alpha_region_pre_1_zone' => 'content',
      'alpha_region_pre_1_columns' => '8',
      'alpha_region_pre_1_equal_height_element' => FALSE,
      'alpha_region_content_zone' => NULL,
      'alpha_region_main_sidebar_2_columns' => '8',
      'alpha_region_main_sidebar_2_weight' => '0',
      'alpha_region_main_sidebar_1_equal_height_element' => 0,
      'alpha_zone_pre_primary' => 'pre_2',
    ),
    'color_prostarter_files' => NULL,
    'color_prostarter_logo' => NULL,
    'color_prostarter_palette' => NULL,
    'color_prostarter_stylesheets' => NULL,
    'color_prostarter_screenshot' => NULL,
  );
  $export['front'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'single_column';
  $delta->name = 'Single Column';
  $delta->description = 'Single column layout; no sidebar.';
  $delta->theme = 'prostarter';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_prostarter_settings' => array(
      'alpha_region_main_sidebar_1_zone' => NULL,
      'alpha_region_main_sidebar_1_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '12',
    ),
  );
  $export['single_column'] = $delta;

  return $export;
}
