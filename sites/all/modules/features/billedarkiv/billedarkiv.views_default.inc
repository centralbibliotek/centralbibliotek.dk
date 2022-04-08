<?php
/**
 * @file
 * billedarkiv.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function billedarkiv_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'billedarkiv';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Billedarkiv';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Billedarkiv';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Felt: Indhold: Upload */
  $handler->display->display_options['fields']['field_upload']['id'] = 'field_upload';
  $handler->display->display_options['fields']['field_upload']['table'] = 'field_data_field_upload';
  $handler->display->display_options['fields']['field_upload']['field'] = 'field_upload';
  $handler->display->display_options['fields']['field_upload']['label'] = '';
  $handler->display->display_options['fields']['field_upload']['alter']['text'] = '[field_upload]';
  $handler->display->display_options['fields']['field_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_upload']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_upload']['delta_offset'] = '0';
  /* Felt: Indhold: Upload */
  $handler->display->display_options['fields']['field_upload_1']['id'] = 'field_upload_1';
  $handler->display->display_options['fields']['field_upload_1']['table'] = 'field_data_field_upload';
  $handler->display->display_options['fields']['field_upload_1']['field'] = 'field_upload';
  $handler->display->display_options['fields']['field_upload_1']['label'] = '';
  $handler->display->display_options['fields']['field_upload_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_upload_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload_1']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_upload_1']['settings'] = array(
    'text' => 'Download [file:field_file_image_title_text]',
  );
  $handler->display->display_options['fields']['field_upload_1']['delta_offset'] = '0';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'billedarkiv' => 'billedarkiv',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'billedarkiv';
  $translatables['billedarkiv'] = array(
    t('Master'),
    t('Billedarkiv'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('«'),
    t('‹'),
    t('›'),
    t('»'),
    t('[field_upload]'),
    t('Page'),
  );
  $export['billedarkiv'] = $view;

  return $export;
}
