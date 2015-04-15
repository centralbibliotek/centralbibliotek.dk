<?php

/**
 * @file
 * Variable module support.
 */

/**
 * Implements hook_variable_info().
 */
function cbib_debug_variable_info($options) {
  $variables['cbib_debug_trace_cbdk_239'] = array(
    'type' => 'boolean',
    'title' => t('Trace CBDK-239', array(), $options),
    'default' => TRUE,
    'description' => t('Trace <a href="!link">CBDK-239</a>: Registration type is "Array" instead of "event".', array('!link' => 'https://reload.atlassian.net/browse/CBDK-239'), $options),
    'group' => 'cbib_debug',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function cbib_debug_variable_group_info() {
  $groups['cbib_debug'] = array(
    'title' => t('Debugging'),
    'description' => t('Centralbibliotek.dk debugging functionality.'),
  );

  return $groups;
}
