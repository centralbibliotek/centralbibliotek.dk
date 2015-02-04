<?php
/**
 * @file
 * cbib_comments.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function cbib_comments_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cbib_comments';
  $mini->category = 'CentralBibliotek';
  $mini->admin_title = 'Comments';
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
  $display->title = 'Comments (%node:comment-count)';
  $display->uuid = '76acf872-2138-463e-86ce-e68cbfb7cb15';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-22cd94ab-b054-4610-9009-fbf4d724b7ad';
    $pane->panel = 'one_main';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '22cd94ab-b054-4610-9009-fbf4d724b7ad';
    $display->content['new-22cd94ab-b054-4610-9009-fbf4d724b7ad'] = $pane;
    $display->panels['one_main'][0] = 'new-22cd94ab-b054-4610-9009-fbf4d724b7ad';
    $pane = new stdClass();
    $pane->pid = 'new-02f41db7-9934-4f91-a48d-3b684663cc14';
    $pane->panel = 'one_main';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '02f41db7-9934-4f91-a48d-3b684663cc14';
    $display->content['new-02f41db7-9934-4f91-a48d-3b684663cc14'] = $pane;
    $display->panels['one_main'][1] = 'new-02f41db7-9934-4f91-a48d-3b684663cc14';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-22cd94ab-b054-4610-9009-fbf4d724b7ad';
  $mini->display = $display;
  $export['cbib_comments'] = $mini;

  return $export;
}
