<?php
/**
 * @file
 * reload_jira_update.ultimate_cron.inc
 */

/**
 * Implements hook_default_ultimate_cron_job().
 */
function reload_jira_update_default_ultimate_cron_job() {
  $export = array();

  $job = new stdClass();
  $job->disabled = FALSE; /* Edit this to true to make a default job disabled initially */
  $job->api_version = 3;
  $job->name = 'update_cron';
  $job->title = 'Check system for updates';
  $job->settings = array(
    'scheduler' => array(
      'name' => '',
      'simple' => array(
        'rules' => array(
          0 => '0+@ * * * *',
        ),
      ),
    ),
    'launcher' => array(
      'name' => '',
      'serial' => array(),
    ),
    'logger' => array(
      'name' => '',
      'database' => array(),
    ),
    'settings' => array(
      'general' => array(),
      'poorman' => array(),
      'queue' => array(),
    ),
  );
  $export['update_cron'] = $job;

  return $export;
}
