<?php
/**
 * @file
 * cbib_events.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_events_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.commons_events_event_attendee_list.display|panel_pane_1|display_options|pager|options|id"]["DELETED"] = TRUE;
  $overrides["views_view.commons_events_event_attendee_list.display|panel_pane_1|display_options|pager|options|offset"]["DELETED"] = TRUE;

 return $overrides;
}
