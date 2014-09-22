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
