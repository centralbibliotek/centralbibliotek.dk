<?php
/**
 * @file
 * cbib_temaspor.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function cbib_temaspor_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:temaspor:add user'
  $permissions['node:temaspor:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:temaspor:administer group'
  $permissions['node:temaspor:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:temaspor:approve and deny subscription'
  $permissions['node:temaspor:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:temaspor:create document content'
  $permissions['node:temaspor:create document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:create event content'
  $permissions['node:temaspor:create event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:create group content'
  $permissions['node:temaspor:create group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:create news content'
  $permissions['node:temaspor:create news content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:create post content'
  $permissions['node:temaspor:create post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete any document content'
  $permissions['node:temaspor:delete any document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete any event content'
  $permissions['node:temaspor:delete any event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete any group content'
  $permissions['node:temaspor:delete any group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete any news content'
  $permissions['node:temaspor:delete any news content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete any post content'
  $permissions['node:temaspor:delete any post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete own document content'
  $permissions['node:temaspor:delete own document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete own event content'
  $permissions['node:temaspor:delete own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete own group content'
  $permissions['node:temaspor:delete own group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete own news content'
  $permissions['node:temaspor:delete own news content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:delete own post content'
  $permissions['node:temaspor:delete own post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:manage members'
  $permissions['node:temaspor:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:temaspor:manage permissions'
  $permissions['node:temaspor:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:temaspor:manage roles'
  $permissions['node:temaspor:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:temaspor:subscribe'
  $permissions['node:temaspor:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:temaspor:subscribe without approval'
  $permissions['node:temaspor:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:temaspor:unsubscribe'
  $permissions['node:temaspor:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update any document content'
  $permissions['node:temaspor:update any document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update any event content'
  $permissions['node:temaspor:update any event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update any group content'
  $permissions['node:temaspor:update any group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update any news content'
  $permissions['node:temaspor:update any news content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update any post content'
  $permissions['node:temaspor:update any post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update group'
  $permissions['node:temaspor:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:temaspor:update own document content'
  $permissions['node:temaspor:update own document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update own event content'
  $permissions['node:temaspor:update own event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update own group content'
  $permissions['node:temaspor:update own group content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update own news content'
  $permissions['node:temaspor:update own news content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:temaspor:update own post content'
  $permissions['node:temaspor:update own post content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
