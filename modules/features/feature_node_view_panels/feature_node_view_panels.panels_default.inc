<?php
/**
 * @file
 * feature_node_view_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function feature_node_view_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'tema_articles';
  $mini->category = 'Tema';
  $mini->admin_title = 'Tema Articles';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'tema_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
      'offset' => '0',
      'context' => array(
        0 => 'requiredcontext_entity:node_1',
      ),
      'override_title' => 1,
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
    $display->content['new-65'] = $pane;
    $display->panels['left'][0] = 'new-65';
    $pane = new stdClass();
    $pane->pid = 'new-66';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'tema_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
      'offset' => '1',
      'context' => array(
        0 => 'requiredcontext_entity:node_1',
      ),
      'override_title' => 1,
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
    $display->content['new-66'] = $pane;
    $display->panels['right'][0] = 'new-66';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-65';
  $mini->display = $display;
  $export['tema_articles'] = $mini;

  return $export;
}
