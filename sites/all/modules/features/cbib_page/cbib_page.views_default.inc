<?php
/**
 * @file
 * cbib_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cbib_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cbib_sider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Central Bibliotek Sider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_centralbibliotek_ref_target_id']['id'] = 'field_centralbibliotek_ref_target_id';
  $handler->display->display_options['relationships']['field_centralbibliotek_ref_target_id']['table'] = 'field_data_field_centralbibliotek_ref';
  $handler->display->display_options['relationships']['field_centralbibliotek_ref_target_id']['field'] = 'field_centralbibliotek_ref_target_id';
  $handler->display->display_options['relationships']['field_centralbibliotek_ref_target_id']['label'] = 'Indhold entity refereret fra field_centralbibliotek_ref';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Centralbibliotek (field_centralbibliotek_ref) */
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['id'] = 'field_centralbibliotek_ref_target_id';
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['table'] = 'field_data_field_centralbibliotek_ref';
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['field'] = 'field_centralbibliotek_ref_target_id';
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_centralbibliotek_ref_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['cbib_sider'] = array(
    t('Master'),
    t('Sider'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Indhold entity refereret fra field_centralbibliotek_ref'),
    t('Alle'),
    t('Block'),
    t('more'),
  );
  $export['cbib_sider'] = $view;

  return $export;
}
