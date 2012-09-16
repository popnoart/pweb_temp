<?php
/**
 * @file
 * section_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function section_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Main Section Page',
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
  $display->layout = '2_2_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'filters' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'filters';
    $pane->type = 'mountain_tags';
    $pane->subtype = 'mountain_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'ajax/section/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
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
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_cubical_view-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '2',
      'offset' => '2',
      'path' => '',
      'fields_override' => array(
        'field_image' => 1,
        'field_tema' => 1,
        'title' => 1,
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
    $display->content['new-2'] = $pane;
    $display->panels['left'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_cubical_view-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '1',
      'offset' => '3',
      'path' => '',
      'fields_override' => array(
        'field_image' => 1,
        'field_tema' => 1,
        'title' => 1,
        'body' => 1,
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
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['left'][1] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_cubical_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '1',
      'offset' => '0',
      'path' => '',
      'fields_override' => array(
        'field_image' => 1,
        'field_tema' => 1,
        'title' => 1,
        'body' => 1,
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
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['left'][2] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_cubical_view-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '2',
      'offset' => '4',
      'path' => '',
      'fields_override' => array(
        'field_image' => 1,
        'field_tema' => 1,
        'title' => 1,
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
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['left'][3] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_cubical_view-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '1',
      'offset' => '5',
      'path' => '',
      'fields_override' => array(
        'field_image' => 1,
        'field_tema' => 1,
        'title' => 1,
        'body' => 1,
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['left'][4] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'section_page_cubical_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'items_per_page' => '1',
      'offset' => '1',
      'path' => '',
      'fields_override' => array(
        'field_image' => 1,
        'field_tema' => 1,
        'title' => 1,
        'body' => 1,
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
    $display->content['new-7'] = $pane;
    $display->panels['right'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'right';
    $pane->type = 'search_results';
    $pane->subtype = 'search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'templates' => 'simple_search_results',
      'rows_per_page' => '3',
      'results_title' => 'News',
      'content_types' => array(
        'news' => 'news',
        'events' => 0,
        'article' => 0,
        'page' => 0,
        'project' => 0,
        'report' => 0,
        'teaser' => 0,
        'webform' => 0,
        'tema' => 0,
        'panel' => 0,
      ),
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => NULL,
      'empty_format' => NULL,
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => NULL,
      'no_key_format' => NULL,
      'override_title' => 1,
      'override_title_text' => '',
      'image_style' => 'thumbnail',
      'no_key_word_search' => 1,
      'enable_see_more' => 1,
      'see_more_link_text' => 'See more News',
      'see_more_link_points_to' => '/search/personaleweb',
      'apachesolr_search_sort' => 1,
      'type_of_search' => 'section_news_search_results',
      'key_word_search' => 1,
      'key_word_search_paramount' => 1,
      'key_word_search_mountain' => 0,
      'key_word_search_global' => 0,
      'pwb_date_formats' => 'news_date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['right'][1] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'right';
    $pane->type = 'search_results';
    $pane->subtype = 'search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'templates' => 'simple_search_results',
      'image_style' => 'thumbnail',
      'rows_per_page' => '5',
      'no_key_word_search' => 1,
      'results_title' => 'Upcoming events',
      'content_types' => array(
        'events' => 'events',
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
      'apachesolr_search_sort' => 1,
      'enable_see_more' => 1,
      'see_more_link_text' => 'See all events',
      'see_more_link_points_to' => 'search/personaleweb',
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => NULL,
      'empty_format' => NULL,
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => NULL,
      'no_key_format' => NULL,
      'override_title' => 1,
      'override_title_text' => '',
      'type_of_search' => 'section_events_search_results',
      'key_word_search' => 0,
      'key_word_search_paramount' => 0,
      'key_word_search_mountain' => 0,
      'key_word_search_global' => 0,
      'pwb_date_formats' => 'event_date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['right'][2] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'pwb_subscribe-pwb_subscribe';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $display->content['new-10'] = $pane;
    $display->panels['top'][0] = 'new-10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function section_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'section_and_mointain_tags';
  $page->task = 'page';
  $page->admin_title = 'Section and Mointain tags';
  $page->admin_description = 'The section and mountain tags page, that will have the results panes that will get the parameters from the URL.';
  $page->path = 'taxonomy/term/%tid/%mountain_tids';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'tid' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          6 => '6',
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          8 => 0,
          9 => 0,
          7 => 0,
          1 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
    'mountain_tids' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term (multiple): ID',
      'name' => 'terms',
      'settings' => array(
        'breadcrumb' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_section_and_mointain_tags_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'section_and_mointain_tags';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Paramount and Mountain tags',
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
  $display->layout = '2_2_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'filters' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'filters';
    $pane->type = 'mountain_tags';
    $pane->subtype = 'mountain_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'ajax/section/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['filters'][0] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'left';
    $pane->type = 'search_results';
    $pane->subtype = 'search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'templates' => 'simple_search_results',
      'image_style' => 'pweb_search',
      'rows_per_page' => '5',
      'results_title' => '',
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
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => NULL,
      'empty_format' => NULL,
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => NULL,
      'no_key_format' => NULL,
      'override_title' => 1,
      'override_title_text' => '',
      'no_key_word_search' => 1,
      'type_of_search' => 'section_tag_listing_search_results',
      'key_word_search' => 1,
      'key_word_search_paramount' => 1,
      'key_word_search_mountain' => 1,
      'key_word_search_global' => 0,
      'apachesolr_search_sort' => 0,
      'enable_see_more' => 0,
      'see_more_link_text' => '',
      'see_more_link_points_to' => '',
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
    $display->content['new-12'] = $pane;
    $display->panels['left'][0] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'right';
    $pane->type = 'search_results';
    $pane->subtype = 'search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'templates' => 'simple_search_results',
      'image_style' => 'thumbnail',
      'rows_per_page' => '5',
      'results_title' => 'News',
      'content_types' => array(
        'news' => 'news',
        'events' => 0,
        'article' => 0,
        'page' => 0,
        'project' => 0,
        'report' => 0,
        'teaser' => 0,
        'webform' => 0,
        'tema' => 0,
        'panel' => 0,
      ),
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => NULL,
      'empty_format' => NULL,
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => NULL,
      'no_key_format' => NULL,
      'override_title' => 1,
      'override_title_text' => '',
      'no_key_word_search' => 1,
      'type_of_search' => 'section_news_search_results',
      'key_word_search' => 1,
      'key_word_search_paramount' => 1,
      'key_word_search_mountain' => 0,
      'key_word_search_global' => 0,
      'apachesolr_search_sort' => 1,
      'enable_see_more' => 1,
      'see_more_link_text' => 'See more News',
      'see_more_link_points_to' => 'search/personaleweb',
      'pwb_date_formats' => 'news_date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['right'][0] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'right';
    $pane->type = 'search_results';
    $pane->subtype = 'search_results';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'templates' => 'simple_search_results',
      'type_of_search' => 'section_events_search_results',
      'image_style' => 'thumbnail',
      'rows_per_page' => '5',
      'key_word_search' => 0,
      'key_word_search_paramount' => 0,
      'key_word_search_mountain' => 0,
      'key_word_search_global' => 0,
      'results_title' => 'Upcoming events',
      'content_types' => array(
        'events' => 'events',
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
      'apachesolr_search_sort' => 1,
      'enable_see_more' => 1,
      'see_more_link_text' => 'See more events',
      'see_more_link_points_to' => 'search/personaleweb',
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => NULL,
      'empty_format' => NULL,
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => NULL,
      'no_key_format' => NULL,
      'override_title' => 1,
      'override_title_text' => '',
      'pwb_date_formats' => 'event_date',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['right'][1] = 'new-14';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-12';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['section_and_mointain_tags'] = $page;

  return $pages;

}
