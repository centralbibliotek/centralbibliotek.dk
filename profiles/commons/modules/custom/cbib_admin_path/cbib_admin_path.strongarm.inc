<?php
/**
 * @file
 * cbib_admin_path.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cbib_admin_path_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_path';
  $strongarm->value = array(
    'node/*/clone/*' => TRUE,
    'user/*/contacts/messages/popup/*' => TRUE,
    'user/*/edit-profile' => TRUE,
    'field-collection/*/*/edit' => TRUE,
    'field-collection/*/*/delete' => TRUE,
    'field-collection/*/add/*/*' => TRUE,
    'file/add' => TRUE,
    'file/add/*' => TRUE,
    'file/*/edit' => TRUE,
    'file/*/usage' => TRUE,
    'file/*/delete' => TRUE,
    'media/browser' => TRUE,
    'media/*/edit/*' => TRUE,
    'media/*/format-form' => TRUE,
    'node/*/edit' => TRUE,
    'node/*/delete' => TRUE,
    'node/*/revisions' => TRUE,
    'node/*/revisions/*/revert' => TRUE,
    'node/*/revisions/*/delete' => TRUE,
    'node/add' => TRUE,
    'node/add/*' => TRUE,
    'node/*/group' => TRUE,
    'group/*/*/admin/*' => TRUE,
    'user/*/shortcuts' => TRUE,
    'admin' => TRUE,
    'admin/*' => TRUE,
    'batch' => TRUE,
    'taxonomy/term/*/edit' => TRUE,
    'user/*/cancel' => TRUE,
    'user/*/edit' => TRUE,
    'user/*/edit/*' => TRUE,
    'node/*/panelizer*' => TRUE,
    'taxonomy/term/*/panelizer*' => TRUE,
    'user/*/panelizer*' => TRUE,
    'devel/*' => TRUE,
    'node/*/devel' => TRUE,
    'node/*/devel/*' => TRUE,
    'comment/*/devel' => TRUE,
    'comment/*/devel/*' => TRUE,
    'user/*/devel' => TRUE,
    'user/*/devel/*' => TRUE,
    'taxonomy/term/*/devel' => TRUE,
    'taxonomy/term/*/devel/*' => TRUE,
    'node/*/revisions/view/*/*' => TRUE,
    'admin/structure/block/demo/*' => FALSE,
    'admin/reports/status/php' => FALSE,
    'user' => FALSE,
    'user/*' => FALSE,
  );
  $export['admin_path'] = $strongarm;

  return $export;
}
