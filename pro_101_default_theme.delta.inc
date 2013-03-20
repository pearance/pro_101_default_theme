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
  $delta->description = '';
  $delta->theme = 'prostarter';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_prostarter_settings' => array(
      'alpha_exclude' => array(
        'sites/all/modules/contrib/colorbox_node/colorbox_node.css' => 0,
        'modules/field/theme/field.css' => 0,
        'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.css' => 0,
        'sites/all/modules/custom/mobile_menu_toggle/mobile_menu_toggle.css' => 0,
        'sites/all/modules/contrib/mollom/mollom.css' => 0,
        'modules/node/node.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/contrib/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_impact_2_equal_height_element' => FALSE,
      'alpha_region_impact_3_equal_height_element' => FALSE,
      'alpha_region_impact_4_equal_height_element' => FALSE,
      'alpha_region_impact_5_equal_height_element' => FALSE,
      'alpha_region_impact_6_equal_height_element' => FALSE,
      'alpha_zone_content_weight' => '3',
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
      'alpha_exclude' => array(
        'sites/all/modules/contrib/colorbox_node/colorbox_node.css' => 0,
        'modules/field/theme/field.css' => 0,
        'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.css' => 0,
        'sites/all/modules/custom/mobile_menu_toggle/mobile_menu_toggle.css' => 0,
        'sites/all/modules/contrib/mollom/mollom.css' => 0,
        'modules/node/node.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/contrib/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_impact_2_equal_height_element' => FALSE,
      'alpha_region_impact_3_equal_height_element' => FALSE,
      'alpha_region_content_zone' => NULL,
      'alpha_region_content_equal_height_element' => FALSE,
      'alpha_region_main_sidebar_2_columns' => '8',
      'alpha_region_main_sidebar_2_weight' => '0',
      'alpha_region_impact_4_equal_height_element' => FALSE,
      'alpha_region_impact_5_equal_height_element' => FALSE,
      'alpha_region_impact_6_equal_height_element' => FALSE,
      'alpha_zone_content_weight' => '3',
      'alpha_region_pre_1_zone' => 'content',
      'alpha_region_pre_1_columns' => '8',
      'alpha_region_pre_1_equal_height_element' => 0,
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
  $delta->machine_name = 'i_beam';
  $delta->name = 'I Beam';
  $delta->description = '';
  $delta->theme = 'prostarter';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_prostarter_settings' => array(
      'alpha_exclude' => array(
        'sites/all/modules/contrib/colorbox_node/colorbox_node.css' => 0,
        'modules/field/theme/field.css' => 0,
        'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.css' => 0,
        'sites/all/modules/custom/mobile_menu_toggle/mobile_menu_toggle.css' => 0,
        'sites/all/modules/contrib/mollom/mollom.css' => 0,
        'modules/node/node.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/contrib/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_impact_2_equal_height_element' => FALSE,
      'alpha_region_impact_3_equal_height_element' => FALSE,
      'alpha_region_post_3_zone' => NULL,
      'alpha_region_post_3_equal_height_element' => FALSE,
      'alpha_region_pre_3_zone' => NULL,
      'alpha_region_pre_3_equal_height_element' => FALSE,
      'alpha_region_main_sidebar_1_zone' => NULL,
      'alpha_region_main_sidebar_1_equal_height_element' => FALSE,
      'alpha_region_post_4_zone' => NULL,
      'alpha_region_post_4_equal_height_element' => FALSE,
      'alpha_region_impact_4_equal_height_element' => FALSE,
      'alpha_region_pre_4_zone' => NULL,
      'alpha_region_pre_4_equal_height_element' => FALSE,
      'alpha_region_impact_5_equal_height_element' => FALSE,
      'alpha_region_pre_5_zone' => NULL,
      'alpha_region_pre_5_equal_height_element' => FALSE,
      'alpha_region_post_5_zone' => NULL,
      'alpha_region_post_5_equal_height_element' => FALSE,
      'alpha_region_pre_6_zone' => NULL,
      'alpha_region_pre_6_equal_height_element' => FALSE,
      'alpha_region_impact_6_equal_height_element' => FALSE,
      'alpha_region_post_6_zone' => NULL,
      'alpha_region_post_6_equal_height_element' => FALSE,
      'alpha_zone_pre_equal_height_container' => 0,
      'alpha_region_pre_1_columns' => '8',
      'alpha_region_pre_1_equal_height_element' => 0,
      'alpha_region_pre_1_equal_height_container' => 0,
      'alpha_region_pre_2_columns' => '4',
      'alpha_region_pre_2_equal_height_element' => 0,
      'alpha_region_pre_2_equal_height_container' => 0,
      'alpha_zone_content_weight' => '3',
      'alpha_region_content_columns' => '12',
      'alpha_region_post_1_columns' => '8',
      'alpha_region_post_2_columns' => '4',
    ),
  );
  $export['i_beam'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'single_column';
  $delta->name = 'Single Column';
  $delta->description = '';
  $delta->theme = 'prostarter';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_prostarter_settings' => array(
      'alpha_exclude' => array(
        'sites/all/modules/contrib/colorbox_node/colorbox_node.css' => 0,
        'modules/field/theme/field.css' => 0,
        'sites/all/modules/contrib/google_analytics_reports/google_analytics_reports/google_analytics_reports.css' => 0,
        'sites/all/modules/custom/mobile_menu_toggle/mobile_menu_toggle.css' => 0,
        'sites/all/modules/contrib/mollom/mollom.css' => 0,
        'modules/node/node.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/contrib/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_impact_2_equal_height_element' => FALSE,
      'alpha_region_impact_3_equal_height_element' => FALSE,
      'alpha_region_main_sidebar_1_zone' => NULL,
      'alpha_region_main_sidebar_1_equal_height_element' => FALSE,
      'alpha_region_impact_4_equal_height_element' => FALSE,
      'alpha_region_impact_5_equal_height_element' => FALSE,
      'alpha_region_impact_6_equal_height_element' => FALSE,
      'alpha_zone_content_weight' => '3',
      'alpha_region_content_columns' => '12',
    ),
  );
  $export['single_column'] = $delta;

  return $export;
}
