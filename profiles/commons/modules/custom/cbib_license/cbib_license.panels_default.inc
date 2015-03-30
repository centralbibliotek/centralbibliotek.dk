<?php
/**
 * @file
 * cbib_license.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function cbib_license_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'license_base_info';
  $mini->category = 'CentralBibliotek';
  $mini->admin_title = 'License data base';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Indholdselement',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e477d611-b9f2-44b5-9813-b658869e8a04';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d68542e-e906-43e9-afa8-204e66b7afcb';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d68542e-e906-43e9-afa8-204e66b7afcb';
    $display->content['new-1d68542e-e906-43e9-afa8-204e66b7afcb'] = $pane;
    $display->panels['one_main'][0] = 'new-1d68542e-e906-43e9-afa8-204e66b7afcb';
    $pane = new stdClass();
    $pane->pid = 'new-ee748c09-8c0a-4a60-a8c2-bc4f713ce7ba';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_producer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ee748c09-8c0a-4a60-a8c2-bc4f713ce7ba';
    $display->content['new-ee748c09-8c0a-4a60-a8c2-bc4f713ce7ba'] = $pane;
    $display->panels['one_main'][1] = 'new-ee748c09-8c0a-4a60-a8c2-bc4f713ce7ba';
    $pane = new stdClass();
    $pane->pid = 'new-82e2f322-9e1b-4aa3-ad5f-1b37736ed359';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_periode';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82e2f322-9e1b-4aa3-ad5f-1b37736ed359';
    $display->content['new-82e2f322-9e1b-4aa3-ad5f-1b37736ed359'] = $pane;
    $display->panels['one_main'][2] = 'new-82e2f322-9e1b-4aa3-ad5f-1b37736ed359';
    $pane = new stdClass();
    $pane->pid = 'new-907007b3-648b-49af-b60e-25e5d69fb251';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '907007b3-648b-49af-b60e-25e5d69fb251';
    $display->content['new-907007b3-648b-49af-b60e-25e5d69fb251'] = $pane;
    $display->panels['one_main'][3] = 'new-907007b3-648b-49af-b60e-25e5d69fb251';
    $pane = new stdClass();
    $pane->pid = 'new-fe554b53-5076-4492-8cfa-190ef818d2da';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_titleliste';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fe554b53-5076-4492-8cfa-190ef818d2da';
    $display->content['new-fe554b53-5076-4492-8cfa-190ef818d2da'] = $pane;
    $display->panels['one_main'][4] = 'new-fe554b53-5076-4492-8cfa-190ef818d2da';
    $pane = new stdClass();
    $pane->pid = 'new-63a721df-3f39-4d14-a5dc-48c610e03107';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_title_list_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '63a721df-3f39-4d14-a5dc-48c610e03107';
    $display->content['new-63a721df-3f39-4d14-a5dc-48c610e03107'] = $pane;
    $display->panels['one_main'][5] = 'new-63a721df-3f39-4d14-a5dc-48c610e03107';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1d68542e-e906-43e9-afa8-204e66b7afcb';
  $mini->display = $display;
  $export['license_base_info'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'license_data_access';
  $mini->category = 'CentralBibliotek';
  $mini->admin_title = 'License data access';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Indholdselement',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Licensadgange';
  $display->uuid = '878b6514-5458-400c-9032-ffcdf3b88a9e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6f4cc862-d9b8-4f1b-a1e7-50ada3639d4b';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_access_ip';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f4cc862-d9b8-4f1b-a1e7-50ada3639d4b';
    $display->content['new-6f4cc862-d9b8-4f1b-a1e7-50ada3639d4b'] = $pane;
    $display->panels['one_main'][0] = 'new-6f4cc862-d9b8-4f1b-a1e7-50ada3639d4b';
    $pane = new stdClass();
    $pane->pid = 'new-7537c9c2-f9ad-42b5-9a68-b25959d1c9df';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_access_password';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7537c9c2-f9ad-42b5-9a68-b25959d1c9df';
    $display->content['new-7537c9c2-f9ad-42b5-9a68-b25959d1c9df'] = $pane;
    $display->panels['one_main'][1] = 'new-7537c9c2-f9ad-42b5-9a68-b25959d1c9df';
    $pane = new stdClass();
    $pane->pid = 'new-a9476bb6-9a89-4191-9493-d9095d799ed1';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_access_remote_user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a9476bb6-9a89-4191-9493-d9095d799ed1';
    $display->content['new-a9476bb6-9a89-4191-9493-d9095d799ed1'] = $pane;
    $display->panels['one_main'][2] = 'new-a9476bb6-9a89-4191-9493-d9095d799ed1';
    $pane = new stdClass();
    $pane->pid = 'new-71d2c255-7e7b-47ea-a3f3-073113704fa2';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_access_print_user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '71d2c255-7e7b-47ea-a3f3-073113704fa2';
    $display->content['new-71d2c255-7e7b-47ea-a3f3-073113704fa2'] = $pane;
    $display->panels['one_main'][3] = 'new-71d2c255-7e7b-47ea-a3f3-073113704fa2';
    $pane = new stdClass();
    $pane->pid = 'new-99483b95-f097-4893-b285-1c2b14281bcd';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_access_print_lib';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '99483b95-f097-4893-b285-1c2b14281bcd';
    $display->content['new-99483b95-f097-4893-b285-1c2b14281bcd'] = $pane;
    $display->panels['one_main'][4] = 'new-99483b95-f097-4893-b285-1c2b14281bcd';
    $pane = new stdClass();
    $pane->pid = 'new-e45fba1f-5a1b-4a83-b4f4-737507a639af';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_access_copy_user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e45fba1f-5a1b-4a83-b4f4-737507a639af';
    $display->content['new-e45fba1f-5a1b-4a83-b4f4-737507a639af'] = $pane;
    $display->panels['one_main'][5] = 'new-e45fba1f-5a1b-4a83-b4f4-737507a639af';
    $pane = new stdClass();
    $pane->pid = 'new-5109df30-1b10-4294-bc70-0323e9e4a8d6';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_access_copy_lib';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '5109df30-1b10-4294-bc70-0323e9e4a8d6';
    $display->content['new-5109df30-1b10-4294-bc70-0323e9e4a8d6'] = $pane;
    $display->panels['one_main'][6] = 'new-5109df30-1b10-4294-bc70-0323e9e4a8d6';
    $pane = new stdClass();
    $pane->pid = 'new-ca869ba4-1b0e-4314-b8d2-b3c140eae015';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_metadata';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'ca869ba4-1b0e-4314-b8d2-b3c140eae015';
    $display->content['new-ca869ba4-1b0e-4314-b8d2-b3c140eae015'] = $pane;
    $display->panels['one_main'][7] = 'new-ca869ba4-1b0e-4314-b8d2-b3c140eae015';
    $pane = new stdClass();
    $pane->pid = 'new-5fc7bbd1-9365-4e98-be39-68280354887c';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_license_data';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '5fc7bbd1-9365-4e98-be39-68280354887c';
    $display->content['new-5fc7bbd1-9365-4e98-be39-68280354887c'] = $pane;
    $display->panels['one_main'][8] = 'new-5fc7bbd1-9365-4e98-be39-68280354887c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6f4cc862-d9b8-4f1b-a1e7-50ada3639d4b';
  $mini->display = $display;
  $export['license_data_access'] = $mini;

  return $export;
}
