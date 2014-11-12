<?php
/**
 * @file
 * cbib_events.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function cbib_events_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:create event content'
  $permissions['node:group:create event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any event content'
  $permissions['node:group:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete own event content'
  $permissions['node:group:delete own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update any event content'
  $permissions['node:group:update any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update own event content'
  $permissions['node:group:update own event content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
