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

  // Exported overrides for: field_base
  $overrides["field_base.field_temaspor_br_dtekst.field_temaspor_br_dtekst"]["DELETED"] = TRUE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-temaspor-field_temapor_underemne.widget|weight"] = 8;

 return $overrides;
}
