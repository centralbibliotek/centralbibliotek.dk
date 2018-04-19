<?php
/**
 * @file
 * cbib_oc_license_pr_bw_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cbib_oc_license_pr_bw_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-document-field_formidling_og_pr_type'
  $field_instances['node-document-field_formidling_og_pr_type'] = array(
    'bundle' => 'document',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_in_partial_form' => 1,
    'entity_type' => 'node',
    'field_name' => 'field_formidling_og_pr_type',
    'label' => 'Formidling og pr type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Formidling og pr type');

  return $field_instances;
}
