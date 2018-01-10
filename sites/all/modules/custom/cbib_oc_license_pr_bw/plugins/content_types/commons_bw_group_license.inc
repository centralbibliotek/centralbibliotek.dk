<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Commons License Group Browsing widget'),
  'description' => t('Commons License Group Browsing widget.'),
  'category' => t('Commons'),
  'single' => TRUE,
  'content type' => 'commons_bw_group_license',
  'all contexts' => TRUE,
);
 
/**
* Output function for the '[content_type]' content type.
*/
function cbib_oc_license_pr_bw_commons_bw_group_license_content_type_render($subtype, $conf, $panel_args, $context) {
  global $user;
  $context = array_shift($context);
  $node = !empty($context->data) ? $context->data : NULL;
  /*
   * Dont output the commons bw widget if the group is admin approval
   * with hidden content from non members.
   */
    $block = new stdClass();
    $block->title = '';
    $widget = cbib_oc_license_pr_bw_generate_group_widget($node,cbib_oc_license_pr_bw_commons_bw_group_dont_hook_widget());
    $block->content = drupal_render($widget['content']);
    return $block;
}
 
/**
* Returns an edit form for the custom type.
*/
function cbib_oc_license_pr_bw_commons_bw_group_license_content_type_edit_form($form, $form_state) {
  return $form;
}
 
/**
* Returns an edit form for the custom type.
*/
function cbib_oc_license_pr_bw_commons_bw_group_license_content_type_edit_form_submit($form, $form_state) {
  return $form;
}

/**
 * Implements hook_commons_bw_group_widget().
 */
function cbib_oc_license_pr_bw_commons_bw_group_dont_hook_widget() {
  return array(
    'commons_browsing_widget_license_og_pr' => array(
      'title' => t('Formidling og pr'),
      'type' => 'view',
      'vid' => 'commons_browsing_widget_license_og_pr',
      'display' => 'default',
      'weight' => 10,
      'default' => true,
    ),
  );
}