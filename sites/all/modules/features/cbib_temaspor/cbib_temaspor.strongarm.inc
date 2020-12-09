<?php
/**
 * @file
 * cbib_temaspor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cbib_temaspor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_temaspor_underemne';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_temaspor_underemne';
  $strongarm->value = 0;
  $export['comment_anonymous_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_temaspor_underemne';
  $strongarm->value = 0;
  $export['comment_default_mode_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_temaspor_underemne';
  $strongarm->value = '50';
  $export['comment_default_per_page_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_sorting_temaspor_underemne';
  $strongarm->value = '1';
  $export['comment_default_sorting_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_temaspor_underemne';
  $strongarm->value = 0;
  $export['comment_form_location_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_temaspor_underemne';
  $strongarm->value = '0';
  $export['comment_preview_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_temaspor_underemne';
  $strongarm->value = 0;
  $export['comment_subject_field_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_temaspor_underemne';
  $strongarm->value = '1';
  $export['comment_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_temaspor_underemne';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_temaspor_underemne';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_temaspor_underemne';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_temaspor';
  $strongarm->value = '0';
  $export['language_content_type_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_temaspor_underemne';
  $strongarm->value = '0';
  $export['language_content_type_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_temaspor';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_temaspor_underemne';
  $strongarm->value = array();
  $export['menu_options_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_temaspor';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_temaspor_underemne';
  $strongarm->value = 'menu-temaspor-underemne-menu:0';
  $export['menu_parent_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_temaspor';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_temaspor_underemne';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_temaspor';
  $strongarm->value = '1';
  $export['node_preview_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_temaspor_underemne';
  $strongarm->value = '0';
  $export['node_preview_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_temaspor';
  $strongarm->value = 0;
  $export['node_submitted_temaspor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_temaspor_underemne';
  $strongarm->value = 0;
  $export['node_submitted_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_temaspor_underemne';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_comment_temaspor_underemne';
  $strongarm->value = 0;
  $export['print_html_display_comment_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_temaspor_underemne';
  $strongarm->value = 1;
  $export['print_html_display_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_html_display_urllist_temaspor_underemne';
  $strongarm->value = 1;
  $export['print_html_display_urllist_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_temaspor_underemne';
  $strongarm->value = 'Gem og tilføj felter';
  $export['save_continue_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_temaspor_underemne';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_temaspor_underemne';
  $strongarm->value = 0;
  $export['scheduler_publish_enable_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_temaspor_underemne';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_temaspor_underemne';
  $strongarm->value = 0;
  $export['scheduler_publish_required_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_temaspor_underemne';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_temaspor_underemne';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_temaspor_underemne';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_temaspor_underemne';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_temaspor_underemne';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_temaspor_underemne';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_temaspor_underemne'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_exclude_setting_temaspor_underemne';
  $strongarm->value = 0;
  $export['search_api_exclude_setting_temaspor_underemne'] = $strongarm;

  return $export;
}
