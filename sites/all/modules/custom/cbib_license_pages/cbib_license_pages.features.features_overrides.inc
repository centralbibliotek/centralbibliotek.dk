<?php
/**
 * @file
 * cbib_license_pages.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_license_pages_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.node_view_panel_context.weight"] = -28;
  $overrides["page_manager_handlers.node_view_panelizer.weight"] = -29;

 return $overrides;
}
