<?php
/**
 * @file
 * cbib_temaspor.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_temaspor_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_temaspor.value|view modes|page_manager|choice"] = 1;
  $overrides["variable.panelizer_defaults_node_temaspor.value|view modes|page_manager|default"] = 0;

 return $overrides;
}
