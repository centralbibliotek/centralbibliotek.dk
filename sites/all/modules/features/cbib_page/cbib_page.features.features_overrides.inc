<?php
/**
 * @file
 * cbib_page.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_page_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:page:default.display|title_pane"] = 'new-71bb3922-c9c3-4855-bce6-400ebddea84c';

 return $overrides;
}
