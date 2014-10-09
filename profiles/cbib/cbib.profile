<?php
/**
 * @file
 * Installation profile for Centralbibliotek.dk
 */

/**
 * Initialize profiler module.
 */
!function_exists('profiler_v2') ? require_once 'libraries/profiler/profiler.inc' : FALSE;
profiler_v2('cbib');

require_once 'profiles/commons/commons.profile';
require_once 'profiles/commons/commons.install';

/**
 * Implements hook_install().
 */
function cbib_install() {
  commons_install();

  // Enable the Cbib theme and set it as the default.
  theme_enable(array('cbib'));

  // Set the default and administration themes.
  variable_set('theme_default', 'cbib');

  // AdaptiveTheme requires that the system theme settings form
  // be submitted in order for its themes' settings to be properly set
  // and the resulting css files generated.
  // For more background, see http://drupal.org/node/1776730.
  module_load_include('inc', 'system', 'system.admin');
  $form_state = form_state_defaults();
  $form_state['build_info']['args'][0] = 'cbib';
  $form_state['values'] = array();
  drupal_form_submit('system_theme_settings', $form_state);
}

/**
 * Implements hook_admin_paths_alter().
 *
 * Call base profiles hook_admin_paths_alter() implementation.
 */
function cbib_admin_paths_alter(&$paths) {
  commons_admin_paths_alter($paths);
}

/**
 * Implements hook_update_projects_alter().
 *
 * Call base profiles hook_update_projects_alter() implementation.
 */
function cbib_update_projects_alter(&$projects) {
  commons_update_projects_alter($projects);
}

/**
 * Implements hook_hook_info().
 *
 * Call base profiles hook_hook_hook() implementation.
 */
function cbib_hook_info() {
  return commons_hook_info();
}

/**
 * Implements hook_form_install_configure_form_alter().
 */
function cbib_form_install_configure_form_alter(&$form, $form_state) {

  $form['site_information']['site_name']['#default_value'] = 'Centralbibliotek.dk';
  $form['site_information']['site_mail']['#default_value'] = 'no-reply@centralbibliotek.dk';

  $form['admin_account']['account']['name']['#default_value'] = 'admin';

  $form['server_settings']['site_default_country']['#default_value'] = 'DK';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Copenhagen';

  $form['update_notifications']['update_status_module']['#default_value'] = array(0, 0);
  $form['update_notifications']['#type'] = 'hidden';
}

/**
 * Implements hook_libraries_get_library_directories().
 */
function cbib_libraries_directories_alter(array &$searchdir) {
  $searchdir[] = drupal_get_path('profile', 'commons') . '/libraries';
}

/**
 * Implements hook_profile_details().
 */
function cbib_profile_details() {
  $details['language'] = 'da';

  return $details;
}
