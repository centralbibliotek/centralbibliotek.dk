<?php
/**
 * @file
 * message_subscribe_email.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function message_subscribe_email_views_default_views() {
  $export = array();

  $view = new view();
$view->name = 'subscribe_node_email';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Subscribe Node email';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
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
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'ops' => 'ops',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'ops' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Opførsel ved ingen resultater: Global: Tekstområde */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You are not subscribed to any item.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Forbindelse: Flag: email_node */
$handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
$handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
$handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
$handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'email_flag';
$handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
$handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'email_node';
/* Felt: Indhold: Title */
$handler->display->display_options['fields']['title_field']['id'] = 'title_field';
$handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field']['field'] = 'title_field';
$handler->display->display_options['fields']['title_field']['label'] = '';
$handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
/* Felt: Flag: Flag-link */
$handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
$handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
$handler->display->display_options['fields']['ops_1']['field'] = 'ops';
$handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
$handler->display->display_options['fields']['ops_1']['label'] = 'Email';
$handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
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
$translatables['subscribe_node_email'] = array(
  t('Master'),
  t('mere'),
  t('Udfør'),
  t('Gendan'),
  t('Sortér efter'),
  t('Stigende'),
  t('Faldende'),
  t('You are not subscribed to any item.'),
  t('email_flag'),
  t('Email'),
);

  $view = new view();
  $view->name = 'subscribe_taxonomy_term_email';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Subscribe taxonomy term email';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You are not subscribed to any item.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Flags: email_term */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'email_flag';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'email_term';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Email';
  $export['subscribe_taxonomy_term_email'] = $view;

  $view = new view();
  $view->name = 'subscribe_user_email';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Subscribe User Email';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You are not subscribed to any item.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Flags: email_user */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'flag_user';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'email_user';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Email';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['subscribe_user_email'] = $view;

  return $export;
}
