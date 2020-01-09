<?php
/**
 * @file
 * cbib_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cbib_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'views_newsletter_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Views Newsletter Landing Page All';
  $page->admin_description = 'A directory of groups.';
  $page->path = 'news';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Nyheder',
    'name' => 'main-menu',
    'weight' => '-1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '-49',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_views_newsletter_landing_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'views_newsletter_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'one_main' => NULL,
    ),
    'one_main' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Nyheder';
  $display->uuid = '514ccbd7-95dc-4e8a-9e5c-37ccaf07569f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-415a51fe-7cd9-4773-9d7d-769174e49e81';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-MVYxsGfVtmCIiTeYrX8z5CzxJTDroNcL';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Region',
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
    $pane->uuid = '415a51fe-7cd9-4773-9d7d-769174e49e81';
    $display->content['new-415a51fe-7cd9-4773-9d7d-769174e49e81'] = $pane;
    $display->panels['one_main'][0] = 'new-415a51fe-7cd9-4773-9d7d-769174e49e81';
    $pane = new stdClass();
    $pane->pid = 'new-c63bd2e1-8904-4838-8af0-a2b6c4357974';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-k2JnXWQwmiU5alrezuelER2nqe41hQAJ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Emner',
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
    $pane->uuid = 'c63bd2e1-8904-4838-8af0-a2b6c4357974';
    $display->content['new-c63bd2e1-8904-4838-8af0-a2b6c4357974'] = $pane;
    $display->panels['one_main'][1] = 'new-c63bd2e1-8904-4838-8af0-a2b6c4357974';
    $pane = new stdClass();
    $pane->pid = 'new-2cfb02f0-113c-49b0-8c59-7a8467739e5f';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-A0aZY3Kehrsiu4Qy1uYNaN2djJnXz8r4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Oprettelsesdato',
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
    $pane->uuid = '2cfb02f0-113c-49b0-8c59-7a8467739e5f';
    $display->content['new-2cfb02f0-113c-49b0-8c59-7a8467739e5f'] = $pane;
    $display->panels['one_main'][2] = 'new-2cfb02f0-113c-49b0-8c59-7a8467739e5f';
    $pane = new stdClass();
    $pane->pid = 'new-b33a7937-7fe8-48d7-91c2-46052d2e8b63';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'search_api_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
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
    $pane->uuid = 'b33a7937-7fe8-48d7-91c2-46052d2e8b63';
    $display->content['new-b33a7937-7fe8-48d7-91c2-46052d2e8b63'] = $pane;
    $display->panels['one_main'][3] = 'new-b33a7937-7fe8-48d7-91c2-46052d2e8b63';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['views_newsletter_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'views_newsletter_landing_page_node';
  $page->task = 'page';
  $page->admin_title = 'Views Newsletter Landing Page Group';
  $page->admin_description = '';
  $page->path = 'node/%node/news';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'centralbibliotek' => 'centralbibliotek',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Arrangementer',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Indholdselement: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_views_newsletter_landing_page_node_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'views_newsletter_landing_page_node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Nyheder';
  $display->uuid = 'e5313952-032f-489b-a17c-a77948dba49d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9447cf07-d7ac-4ce8-9c3a-e0565952417a';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-MVYxsGfVtmCIiTeYrX8z5CzxJTDroNcL';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Region',
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
    $pane->uuid = '9447cf07-d7ac-4ce8-9c3a-e0565952417a';
    $display->content['new-9447cf07-d7ac-4ce8-9c3a-e0565952417a'] = $pane;
    $display->panels['one_main'][0] = 'new-9447cf07-d7ac-4ce8-9c3a-e0565952417a';
    $pane = new stdClass();
    $pane->pid = 'new-318869ec-6aa9-4c7b-b642-28ee3195f851';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-k2JnXWQwmiU5alrezuelER2nqe41hQAJ';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Emner',
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
    $pane->uuid = '318869ec-6aa9-4c7b-b642-28ee3195f851';
    $display->content['new-318869ec-6aa9-4c7b-b642-28ee3195f851'] = $pane;
    $display->panels['one_main'][1] = 'new-318869ec-6aa9-4c7b-b642-28ee3195f851';
    $pane = new stdClass();
    $pane->pid = 'new-d02bd58f-3d06-422d-add2-4fed2739e4d2';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-A0aZY3Kehrsiu4Qy1uYNaN2djJnXz8r4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Oprettelsesdato',
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
    $pane->uuid = 'd02bd58f-3d06-422d-add2-4fed2739e4d2';
    $display->content['new-d02bd58f-3d06-422d-add2-4fed2739e4d2'] = $pane;
    $display->panels['one_main'][2] = 'new-d02bd58f-3d06-422d-add2-4fed2739e4d2';
    $pane = new stdClass();
    $pane->pid = 'new-929f2414-8a53-4f1c-b019-51570f1f2f78';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'search_api_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 0,
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
    $pane->uuid = '929f2414-8a53-4f1c-b019-51570f1f2f78';
    $display->content['new-929f2414-8a53-4f1c-b019-51570f1f2f78'] = $pane;
    $display->panels['one_main'][3] = 'new-929f2414-8a53-4f1c-b019-51570f1f2f78';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['views_newsletter_landing_page_node'] = $page;

  return $pages;

}
