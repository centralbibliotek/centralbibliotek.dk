<?php
/**
 * @file
 * cbib_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cbib_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cbib_events_views_default_views_alter(&$data) {
  if (isset($data['commons_events_event_attendee_list'])) {
    unset($data['commons_events_event_attendee_list']->display['panel_pane_1']->display_options['pager']['options']['id']);
    unset($data['commons_events_event_attendee_list']->display['panel_pane_1']->display_options['pager']['options']['offset']);
  }
}
