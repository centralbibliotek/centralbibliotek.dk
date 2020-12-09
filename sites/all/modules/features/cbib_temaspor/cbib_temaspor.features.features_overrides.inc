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

  // Exported overrides for: field_instance
  $overrides["field_instance.node-temaspor-title_field.node-temaspor-title_field"]["DELETED"] = TRUE;

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-10f12c5b-679e-d294-b1bd-9aac845800f5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-13120946-03a1-bfc4-2d74-f39dd758ebce"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-52796f83-93dd-2cf4-41aa-33520dc31e5f"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-80b62348-7cee-e304-5d65-0ce1b6bbb216"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-a7009535-0e2a-2c94-edd2-4ecc953c4ca2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-b39e6900-480d-46f6-8fb7-010cd3bb7f2f"] = (object) array(
      'pid' => 'new-b39e6900-480d-46f6-8fb7-010cd3bb7f2f',
      'panel' => 'one_main',
      'type' => 'node_content',
      'subtype' => 'node_content',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'links' => 1,
        'no_extras' => 0,
        'override_title' => 1,
        'override_title_text' => '',
        'identifier' => '',
        'link' => 0,
        'leave_node_title' => 0,
        'build_mode' => 'full',
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => 'b39e6900-480d-46f6-8fb7-010cd3bb7f2f',
    );
  $overrides["panelizer_defaults.node:temaspor:default.display|content|new-ba735f2b-4734-7724-098d-1925c6a4bb47"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|layout"] = 'one';
  $overrides["panelizer_defaults.node:temaspor:default.display|panels|one_main"] = array(
    0 => 'new-b39e6900-480d-46f6-8fb7-010cd3bb7f2f',
  );
  $overrides["panelizer_defaults.node:temaspor:default.display|panels|two_66_33_first"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|panels|two_66_33_second"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default.display|uuid"] = 'd645308c-4ac7-4507-b81d-2ca2139ba76e';
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|content|new-026f9d2d-fd0e-d794-1971-47eb628a7f6e"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|content|new-6c3207ac-19f3-8184-11ba-e3aee789a9c8"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|content|new-926a99b3-8e75-aa14-2542-16f2ab9e70b3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|content|new-c22911c5-3c21-75b4-c5f3-80efb733956b"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|content|new-cb706c02-36e8-a414-c9f5-c34bf15861ca"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|content|new-f7a3719c-d7be-f024-ed91-c8c0df943df4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|panels|one_main|0"] = 'new-13859111-e3fa-5e54-a93c-57f09d719e38';
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|panels|one_main|1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|panels|one_main|2"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|panels|one_main|3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|panels|one_main|4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|panels|one_main|5"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|panels|one_main|6"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:temaspor:default:teaser.display|uuid"] = '937ec228-6481-400a-9748-df684e01dc0b';

  // Exported overrides for: slick_optionset
  $overrides["slick_optionset.default.disabled"] = FALSE;
  $overrides["slick_optionset.default.export_type"]["DELETED"] = TRUE;
  $overrides["slick_optionset.default.type"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.panelizer_defaults_node_temaspor.value|view modes|teaser|default"] = 0;

 return $overrides;
}
