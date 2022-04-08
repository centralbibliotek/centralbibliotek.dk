<?php
/**
 * @file
 * billedarkiv.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function billedarkiv_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create billedarkiv content'.
  $permissions['create billedarkiv content'] = array(
    'name' => 'create billedarkiv content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any billedarkiv content'.
  $permissions['delete any billedarkiv content'] = array(
    'name' => 'delete any billedarkiv content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own billedarkiv content'.
  $permissions['delete own billedarkiv content'] = array(
    'name' => 'delete own billedarkiv content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in billedarkiv_tags'.
  $permissions['delete terms in billedarkiv_tags'] = array(
    'name' => 'delete terms in billedarkiv_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any billedarkiv content'.
  $permissions['edit any billedarkiv content'] = array(
    'name' => 'edit any billedarkiv content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own billedarkiv content'.
  $permissions['edit own billedarkiv content'] = array(
    'name' => 'edit own billedarkiv content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in billedarkiv_tags'.
  $permissions['edit terms in billedarkiv_tags'] = array(
    'name' => 'edit terms in billedarkiv_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
