<?php
/**
 * @file
 * search_results_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function search_results_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_personaleweb';
  $page->task = 'page';
  $page->admin_title = 'Search Personaleweb';
  $page->admin_description = 'This would be the default search page';
  $page->path = 'search/personaleweb';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_personaleweb_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search_personaleweb';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Search Personaleweb',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = '1_2_1_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'filters' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Søgeresultat';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'filters';
    $pane->type = 'freetext_search';
    $pane->subtype = 'freetext_search';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'freetext_search_show_content_dropbox' => 1,
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
    $display->content['new-1'] = $pane;
    $display->panels['filters'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-1TVdxEwSQspvQXafDwW1FLP1hGVPVkB0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'EMNE',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['left'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-E9fwlCFw1A3oumefGhbPhd4ounu0qGCX';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'EMNEORD',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['left'][1] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-kh814V3mt4Hse6NxiOZQt3t1XZ9CzI6J';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'ROLLE',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['left'][2] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-jcTYW44Uc4J1NwkXO7sgze9zi0XX8gI3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'PARTER',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['left'][3] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-oTPUEirETui3w7UOclg831qUnEhM91n0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'REGION',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['left'][4] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-W4gp8mYGkqbTVTxfUzQaiPqqVdCwnKyd';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'OTHER',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['left'][5] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'middle';
    $pane->type = 'search_results';
    $pane->subtype = 'search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'templates' => 'simple_search_results',
      'rows_per_page' => '5',
      'results_title' => 'Search results',
      'override_title' => 1,
      'override_title_text' => '',
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => NULL,
      'empty_format' => NULL,
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => NULL,
      'no_key_format' => NULL,
      'content_types' => array(
        'events' => 0,
        'article' => 0,
        'news' => 0,
        'page' => 0,
        'project' => 0,
        'report' => 0,
        'teaser' => 0,
        'webform' => 0,
        'tema' => 0,
        'panel' => 0,
      ),
      'image_style' => 'pweb_search',
      'type_of_search' => 'pwb_search_search_result',
      'no_key_word_search' => 0,
      'apachesolr_search_sort' => 0,
      'enable_see_more' => 0,
      'see_more_link_text' => '',
      'see_more_link_points_to' => '',
      'key_word_search' => 1,
      'key_word_search_paramount' => 0,
      'key_word_search_mountain' => 0,
      'key_word_search_global' => 1,
      'pwb_date_formats' => 'search_personaleweb',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['middle'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'pwb_subscribe-pwb_subscribe';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Subscribe',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['right'][0] = 'new-9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_personaleweb'] = $page;

  return $pages;

}
