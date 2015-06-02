<?php
/**
 * @file
 * cbib_site_homepage.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_site_homepage_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.commons_home.conf|admin_paths"] = FALSE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|access|plugins|0"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-0ae8e5a2-44f6-8584-21f2-8be6e340e62f"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-2ab570f0-8498-44f4-e9d0-9977e3d8d4df"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-32e55ffc-409b-4ed7-8b84-df9c389c6cd8"] = (object) array(
      'pid' => 'new-32e55ffc-409b-4ed7-8b84-df9c389c6cd8',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'commons_groups_directory-panel_pane_3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '32e55ffc-409b-4ed7-8b84-df9c389c6cd8',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-58e71a00-2b87-ab64-31c5-4fdc9e99a2d4"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-7d40d7ca-0ea5-9a54-4d1f-8b6240e72bf0"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-800b2f8a-307f-0e14-4174-626a1c5c4cd9"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-873f520b-e349-4b0e-a23f-6fe46609b814"] = (object) array(
      'pid' => 'new-873f520b-e349-4b0e-a23f-6fe46609b814',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'centralbibliotek_news-panel_pane_2',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '873f520b-e349-4b0e-a23f-6fe46609b814',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|content|new-8d815f98-ed09-48f3-9d6d-e9acad03e464"] = (object) array(
      'pid' => 'new-8d815f98-ed09-48f3-9d6d-e9acad03e464',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'commons_events_upcoming-panel_pane_2',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => 'Kommende arrangementer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '8d815f98-ed09-48f3-9d6d-e9acad03e464',
    );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|layout"] = 'one';
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panel_settings|style_settings|one_main"] = NULL;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|one_main"] = array(
    0 => 'new-873f520b-e349-4b0e-a23f-6fe46609b814',
    1 => 'new-8d815f98-ed09-48f3-9d6d-e9acad03e464',
    2 => 'new-32e55ffc-409b-4ed7-8b84-df9c389c6cd8',
  );
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_first"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_third"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|display|panels|three_33_top"]["DELETED"] = TRUE;
  $overrides["page_manager_pages.commons_home.default_handlers|page_commons_home_panel_context_2|conf|title"] = 'Home';

 return $overrides;
}
