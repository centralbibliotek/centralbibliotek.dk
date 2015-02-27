<?php
/**
 * @file
 * cbib_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cbib_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '43482c39-e52a-4f0b-8417-b65647942593';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c41dea1a-722b-4d53-b2a5-1de7749f0a36';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '1',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'full_node',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c41dea1a-722b-4d53-b2a5-1de7749f0a36';
    $display->content['new-c41dea1a-722b-4d53-b2a5-1de7749f0a36'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-c41dea1a-722b-4d53-b2a5-1de7749f0a36';
    $pane = new stdClass();
    $pane->pid = 'new-1e72ef90-068d-4282-8626-8c99578ca0a4';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h1',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '1e72ef90-068d-4282-8626-8c99578ca0a4';
    $display->content['new-1e72ef90-068d-4282-8626-8c99578ca0a4'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-1e72ef90-068d-4282-8626-8c99578ca0a4';
    $pane = new stdClass();
    $pane->pid = 'new-4d550d5a-b290-4f66-ad31-3a5a39434e9c';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'teaser_date',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4d550d5a-b290-4f66-ad31-3a5a39434e9c';
    $display->content['new-4d550d5a-b290-4f66-ad31-3a5a39434e9c'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-4d550d5a-b290-4f66-ad31-3a5a39434e9c';
    $pane = new stdClass();
    $pane->pid = 'new-a2078eb4-c30b-4d48-a468-6404a044a088';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a2078eb4-c30b-4d48-a468-6404a044a088';
    $display->content['new-a2078eb4-c30b-4d48-a468-6404a044a088'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-a2078eb4-c30b-4d48-a468-6404a044a088';
    $pane = new stdClass();
    $pane->pid = 'new-44bbffa2-c544-4cd0-b7b8-77509303d488';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '44bbffa2-c544-4cd0-b7b8-77509303d488';
    $display->content['new-44bbffa2-c544-4cd0-b7b8-77509303d488'] = $pane;
    $display->panels['two_66_33_first'][4] = 'new-44bbffa2-c544-4cd0-b7b8-77509303d488';
    $pane = new stdClass();
    $pane->pid = 'new-709ff6a6-8918-4836-94e3-65fd968cf44a';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'og_list_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Region',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '709ff6a6-8918-4836-94e3-65fd968cf44a';
    $display->content['new-709ff6a6-8918-4836-94e3-65fd968cf44a'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-709ff6a6-8918-4836-94e3-65fd968cf44a';
    $pane = new stdClass();
    $pane->pid = 'new-5c5f286a-5017-40a6-965c-157bf6dff910';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'double_field_unformatted_list',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'first' => array(
          'hidden' => 0,
          'format' => '_none',
          'prefix' => '',
          'suffix' => ':&nbsp;',
        ),
        'second' => array(
          'hidden' => 0,
          'format' => '_none',
          'prefix' => '',
          'suffix' => '',
        ),
        'style' => 'inline',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '5c5f286a-5017-40a6-965c-157bf6dff910';
    $display->content['new-5c5f286a-5017-40a6-965c-157bf6dff910'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-5c5f286a-5017-40a6-965c-157bf6dff910';
    $pane = new stdClass();
    $pane->pid = 'new-29f75fe4-be1e-4f28-affa-4c8a6ad62360';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '29f75fe4-be1e-4f28-affa-4c8a6ad62360';
    $display->content['new-29f75fe4-be1e-4f28-affa-4c8a6ad62360'] = $pane;
    $display->panels['two_66_33_second'][2] = 'new-29f75fe4-be1e-4f28-affa-4c8a6ad62360';
    $pane = new stdClass();
    $pane->pid = 'new-299d54ba-0f3d-48de-83fa-c5ce2c7c68e9';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = '299d54ba-0f3d-48de-83fa-c5ce2c7c68e9';
    $display->content['new-299d54ba-0f3d-48de-83fa-c5ce2c7c68e9'] = $pane;
    $display->panels['two_66_33_second'][3] = 'new-299d54ba-0f3d-48de-83fa-c5ce2c7c68e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1e72ef90-068d-4282-8626-8c99578ca0a4';
  $panelizer->display = $display;
  $export['node:news:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default:teaser';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = '<none>';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '29879e5a-2469-4807-8c70-7f4ddf6fada7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ccb9c43c-b588-4fe5-9190-bc9d93db11ef';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'panelizer',
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
    $pane->uuid = 'ccb9c43c-b588-4fe5-9190-bc9d93db11ef';
    $display->content['new-ccb9c43c-b588-4fe5-9190-bc9d93db11ef'] = $pane;
    $display->panels['bottom'][0] = 'new-ccb9c43c-b588-4fe5-9190-bc9d93db11ef';
    $pane = new stdClass();
    $pane->pid = 'new-d4bfc208-0cde-48fa-9efd-a431911f82ac';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
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
    $pane->uuid = 'd4bfc208-0cde-48fa-9efd-a431911f82ac';
    $display->content['new-d4bfc208-0cde-48fa-9efd-a431911f82ac'] = $pane;
    $display->panels['bottom'][1] = 'new-d4bfc208-0cde-48fa-9efd-a431911f82ac';
    $pane = new stdClass();
    $pane->pid = 'new-8a6a61d5-0c47-4674-8ff8-725e5c86278f';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'teaser',
        'image_link' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '8a6a61d5-0c47-4674-8ff8-725e5c86278f';
    $display->content['new-8a6a61d5-0c47-4674-8ff8-725e5c86278f'] = $pane;
    $display->panels['left'][0] = 'new-8a6a61d5-0c47-4674-8ff8-725e5c86278f';
    $pane = new stdClass();
    $pane->pid = 'new-394aca58-2432-431a-88a3-9f68743917f5';
    $pane->panel = 'left';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'teaser_date',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '394aca58-2432-431a-88a3-9f68743917f5';
    $display->content['new-394aca58-2432-431a-88a3-9f68743917f5'] = $pane;
    $display->panels['left'][1] = 'new-394aca58-2432-431a-88a3-9f68743917f5';
    $pane = new stdClass();
    $pane->pid = 'new-e81cbdb0-164d-4fdb-90ee-1ecd9a27d6b8';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h2',
        'title_link' => 'content',
        'title_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e81cbdb0-164d-4fdb-90ee-1ecd9a27d6b8';
    $display->content['new-e81cbdb0-164d-4fdb-90ee-1ecd9a27d6b8'] = $pane;
    $display->panels['right'][0] = 'new-e81cbdb0-164d-4fdb-90ee-1ecd9a27d6b8';
    $pane = new stdClass();
    $pane->pid = 'new-3e904c8f-e1d7-460b-8480-677f317f2832';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '250',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '3e904c8f-e1d7-460b-8480-677f317f2832';
    $display->content['new-3e904c8f-e1d7-460b-8480-677f317f2832'] = $pane;
    $display->panels['right'][1] = 'new-3e904c8f-e1d7-460b-8480-677f317f2832';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e81cbdb0-164d-4fdb-90ee-1ecd9a27d6b8';
  $panelizer->display = $display;
  $export['node:news:default:teaser'] = $panelizer;

  return $export;
}
