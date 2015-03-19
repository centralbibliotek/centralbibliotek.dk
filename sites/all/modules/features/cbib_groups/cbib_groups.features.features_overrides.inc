<?php
/**
 * @file
 * cbib_groups.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_groups_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:group:default.display|content|new-54114858-675b-4d20-92bd-cd3fb4ec2020"] = (object) array(
      'pid' => 'new-54114858-675b-4d20-92bd-cd3fb4ec2020',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'og_members-panel_pane_1',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 8,
      'locks' => array(),
      'uuid' => '54114858-675b-4d20-92bd-cd3fb4ec2020',
    );
  $overrides["panelizer_defaults.node:group:default.display|content|new-6437b227-b02b-4d81-8547-46a1ee7e9ab8"] = (object) array(
      'pid' => 'new-6437b227-b02b-4d81-8547-46a1ee7e9ab8',
      'panel' => 'two_66_33_first',
      'type' => 'commons_bw_group',
      'subtype' => 'commons_bw_group',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '6437b227-b02b-4d81-8547-46a1ee7e9ab8',
    );
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_first|5"] = 'new-6437b227-b02b-4d81-8547-46a1ee7e9ab8';
  $overrides["panelizer_defaults.node:group:default.display|panels|two_66_33_second|8"] = 'new-54114858-675b-4d20-92bd-cd3fb4ec2020';

 return $overrides;
}
