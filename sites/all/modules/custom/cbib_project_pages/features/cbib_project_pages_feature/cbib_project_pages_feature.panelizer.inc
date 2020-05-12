<?php
/**
 * @file
 * cbib_project_pages_feature.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cbib_project_pages_feature_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:projekt_sider:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'projekt_sider';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'cbib_project_pages_panel';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'dc993409-cb56-4f07-9592-466ace4e182e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f4c186f1-f28d-42e8-ade5-df06049235fb';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f4c186f1-f28d-42e8-ade5-df06049235fb';
    $display->content['new-f4c186f1-f28d-42e8-ade5-df06049235fb'] = $pane;
    $display->panels['center'][0] = 'new-f4c186f1-f28d-42e8-ade5-df06049235fb';
    $pane = new stdClass();
    $pane->pid = 'new-3f6c5fb0-f7cf-4169-8e95-5ea6a56f0a82';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3f6c5fb0-f7cf-4169-8e95-5ea6a56f0a82';
    $display->content['new-3f6c5fb0-f7cf-4169-8e95-5ea6a56f0a82'] = $pane;
    $display->panels['center'][1] = 'new-3f6c5fb0-f7cf-4169-8e95-5ea6a56f0a82';
    $pane = new stdClass();
    $pane->pid = 'new-09e32668-e6e3-44d2-bcb4-00e6eed91714';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sub_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'links' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '09e32668-e6e3-44d2-bcb4-00e6eed91714';
    $display->content['new-09e32668-e6e3-44d2-bcb4-00e6eed91714'] = $pane;
    $display->panels['center'][2] = 'new-09e32668-e6e3-44d2-bcb4-00e6eed91714';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-09e32668-e6e3-44d2-bcb4-00e6eed91714';
  $panelizer->display = $display;
  $export['node:projekt_sider:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:projekt_sider_under_side:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'projekt_sider_under_side';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6e6b4c0f-6362-4ccc-a11a-cb4d3e007dcc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c862e336-5c6e-41b7-ab2f-3d81655dfcd8';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c862e336-5c6e-41b7-ab2f-3d81655dfcd8';
    $display->content['new-c862e336-5c6e-41b7-ab2f-3d81655dfcd8'] = $pane;
    $display->panels['center'][0] = 'new-c862e336-5c6e-41b7-ab2f-3d81655dfcd8';
    $pane = new stdClass();
    $pane->pid = 'new-cfef53fc-9150-4aba-8b4d-db19a61004b5';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cfef53fc-9150-4aba-8b4d-db19a61004b5';
    $display->content['new-cfef53fc-9150-4aba-8b4d-db19a61004b5'] = $pane;
    $display->panels['center'][1] = 'new-cfef53fc-9150-4aba-8b4d-db19a61004b5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:projekt_sider_under_side:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:projekt_sider_under_side:default:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'projekt_sider_under_side';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ae5f0ae-9bba-4950-82f0-697d2a2a86a8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bdda3c23-a8f1-49f0-8043-886c9adbcb37';
    $pane->panel = 'center';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h3',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bdda3c23-a8f1-49f0-8043-886c9adbcb37';
    $display->content['new-bdda3c23-a8f1-49f0-8043-886c9adbcb37'] = $pane;
    $display->panels['center'][0] = 'new-bdda3c23-a8f1-49f0-8043-886c9adbcb37';
    $pane = new stdClass();
    $pane->pid = 'new-a86b74ee-12e7-4793-8480-3335f754ed6b';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a86b74ee-12e7-4793-8480-3335f754ed6b';
    $display->content['new-a86b74ee-12e7-4793-8480-3335f754ed6b'] = $pane;
    $display->panels['center'][1] = 'new-a86b74ee-12e7-4793-8480-3335f754ed6b';
    $pane = new stdClass();
    $pane->pid = 'new-4b076c54-e52e-4e2f-b621-3c3593fc5623';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_materialer';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Video',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4b076c54-e52e-4e2f-b621-3c3593fc5623';
    $display->content['new-4b076c54-e52e-4e2f-b621-3c3593fc5623'] = $pane;
    $display->panels['center'][2] = 'new-4b076c54-e52e-4e2f-b621-3c3593fc5623';
    $pane = new stdClass();
    $pane->pid = 'new-795362bc-1e50-4a43-bcaa-aac430ee588b';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ekstern_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'youtube_video',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'thumbnail',
        'image_link' => 'youtube',
        'youtube_size' => '420x315',
        'youtube_width' => '',
        'youtube_height' => '',
        'youtube_autoplay' => 0,
        'youtube_mute' => 0,
        'youtube_loop' => 0,
        'youtube_controls' => 0,
        'youtube_autohide' => 0,
        'youtube_iv_load_policy' => 0,
        'youtube_playsinline' => 0,
        'youtube_allow_autoplay' => 0,
        'youtube_allow_fullscreen' => 0,
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '795362bc-1e50-4a43-bcaa-aac430ee588b';
    $display->content['new-795362bc-1e50-4a43-bcaa-aac430ee588b'] = $pane;
    $display->panels['center'][3] = 'new-795362bc-1e50-4a43-bcaa-aac430ee588b';
    $pane = new stdClass();
    $pane->pid = 'new-dfdb0a61-5b28-4912-ad7f-a40463172eff';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dokumenter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_oc_folder_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Dokumenter',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'dfdb0a61-5b28-4912-ad7f-a40463172eff';
    $display->content['new-dfdb0a61-5b28-4912-ad7f-a40463172eff'] = $pane;
    $display->panels['center'][4] = 'new-dfdb0a61-5b28-4912-ad7f-a40463172eff';
    $pane = new stdClass();
    $pane->pid = 'new-c7ab59ff-fe93-49c8-af86-c4c043dc7b10';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Links',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c7ab59ff-fe93-49c8-af86-c4c043dc7b10';
    $display->content['new-c7ab59ff-fe93-49c8-af86-c4c043dc7b10'] = $pane;
    $display->panels['center'][5] = 'new-c7ab59ff-fe93-49c8-af86-c4c043dc7b10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:projekt_sider_under_side:default:default'] = $panelizer;

  return $export;
}
