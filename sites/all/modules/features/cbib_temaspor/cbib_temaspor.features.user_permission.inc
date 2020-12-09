<?php
/**
 * @file
 * cbib_temaspor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cbib_temaspor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node temaspor content'.
  $permissions['administer panelizer node temaspor content'] = array(
    'name' => 'administer panelizer node temaspor content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor context'.
  $permissions['administer panelizer node temaspor context'] = array(
    'name' => 'administer panelizer node temaspor context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor defaults'.
  $permissions['administer panelizer node temaspor defaults'] = array(
    'name' => 'administer panelizer node temaspor defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor layout'.
  $permissions['administer panelizer node temaspor layout'] = array(
    'name' => 'administer panelizer node temaspor layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor overview'.
  $permissions['administer panelizer node temaspor overview'] = array(
    'name' => 'administer panelizer node temaspor overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor settings'.
  $permissions['administer panelizer node temaspor settings'] = array(
    'name' => 'administer panelizer node temaspor settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor_underemne content'.
  $permissions['administer panelizer node temaspor_underemne content'] = array(
    'name' => 'administer panelizer node temaspor_underemne content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor_underemne context'.
  $permissions['administer panelizer node temaspor_underemne context'] = array(
    'name' => 'administer panelizer node temaspor_underemne context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor_underemne defaults'.
  $permissions['administer panelizer node temaspor_underemne defaults'] = array(
    'name' => 'administer panelizer node temaspor_underemne defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor_underemne layout'.
  $permissions['administer panelizer node temaspor_underemne layout'] = array(
    'name' => 'administer panelizer node temaspor_underemne layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor_underemne overview'.
  $permissions['administer panelizer node temaspor_underemne overview'] = array(
    'name' => 'administer panelizer node temaspor_underemne overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node temaspor_underemne settings'.
  $permissions['administer panelizer node temaspor_underemne settings'] = array(
    'name' => 'administer panelizer node temaspor_underemne settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer slick'.
  $permissions['administer slick'] = array(
    'name' => 'administer slick',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'slick_ui',
  );

  // Exported permission: 'create temaspor content'.
  $permissions['create temaspor content'] = array(
    'name' => 'create temaspor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create temaspor_underemne content'.
  $permissions['create temaspor_underemne content'] = array(
    'name' => 'create temaspor_underemne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any temaspor content'.
  $permissions['delete any temaspor content'] = array(
    'name' => 'delete any temaspor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any temaspor_underemne content'.
  $permissions['delete any temaspor_underemne content'] = array(
    'name' => 'delete any temaspor_underemne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own temaspor content'.
  $permissions['delete own temaspor content'] = array(
    'name' => 'delete own temaspor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own temaspor_underemne content'.
  $permissions['delete own temaspor_underemne content'] = array(
    'name' => 'delete own temaspor_underemne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any temaspor content'.
  $permissions['edit any temaspor content'] = array(
    'name' => 'edit any temaspor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any temaspor_underemne content'.
  $permissions['edit any temaspor_underemne content'] = array(
    'name' => 'edit any temaspor_underemne content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own temaspor content'.
  $permissions['edit own temaspor content'] = array(
    'name' => 'edit own temaspor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own temaspor_underemne content'.
  $permissions['edit own temaspor_underemne content'] = array(
    'name' => 'edit own temaspor_underemne content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
