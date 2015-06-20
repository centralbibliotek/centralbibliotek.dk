<?php
/**
 * @file
 * reload_jira_update.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function reload_jira_update_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jira_rest_jirainstanceurl';
  $strongarm->value = 'https://reload.atlassian.net';
  $export['jira_rest_jirainstanceurl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_check_frequency';
  $strongarm->value = '0';
  $export['update_check_frequency'] = $strongarm;

  return $export;
}
