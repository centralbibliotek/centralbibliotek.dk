<?php
/**
 * @file
 * cbib_nationale_projekter.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_nationale_projekter_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.term_view_panelizer.weight"] = -29;

 return $overrides;
}
