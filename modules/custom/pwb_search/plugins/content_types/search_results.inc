<?php

/**
 * @file
 * Plugin to provide a apachesolr_search_results context
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => FALSE,
  'title' => t('PWB search results'),
  'icon' => 'icon_search.png',
  'description' => t('The pane will render the results of a search using keywords.'),
  'category' => t('Widgets'),
  'edit form' => 'pwb_search_search_results_content_type_edit_form',
  'render callback' => 'pwb_search_search_results_content_type_render',
  'render first' => TRUE,
  'defaults' => array(
    'templates' => 'simple_search_results',
    'type_of_search' => 'section_simple_search_results',
    'image_style' => 'pweb_search',
    'pwb_date_formats' => 'search_personaleweb',
    'rows_per_page' => '0',
    'key_word_search' => 0,
    'key_word_search_paramount' => 0,
    'key_word_search_mountain' => 0,
    'key_word_search_global' => 0,
    'results_title' => t('Search results'),
    'content_types' => '',
    'apachesolr_search_sort' => 0,
    'enable_see_more' => 0,
    'see_more_link_text' => '',
    'see_more_link_points_to' => '',
    'override_empty' => FALSE,
    'empty_title' => '',
    'empty' => '',
    'empty_format' => filter_fallback_format(),
    'override_no_key' => FALSE,
    'no_key_title' => '',
    'no_key' => '',
    'no_key_format' => filter_fallback_format(),
  ),
);

/**
 * Render the custom content type.
 */
function pwb_search_search_results_content_type_render($subtype, $conf, $panel_args, $context) {
  $keys = NULL;

  if ($conf['key_word_search'] == 1) {
    if ($conf['key_word_search_global'] == 1) {
      // Set the keywords
      $keys = (arg(1) == 'personaleweb' && arg(2)) ? arg(2) : NULL;
    }

    if ($conf['key_word_search_paramount'] == 1) {
      if ((strpos($_GET['q'], 'taxonomy/term/') !== FALSE) || (strpos($_GET['q'], 'ajax/section/') !== FALSE)) {
        $conf['get_paramount_tag'][] = arg(2);
      }
      else {
        $conf['get_paramount_tag'][] = NULL;
      }
    }

    if ($conf['key_word_search_mountain']) {
      if (strpos($_GET['q'], 'ajax/section/') !== FALSE) {
        $conf['get_mountain_tags'] = (arg(3)) ? explode(' ', arg(3)) : NULL;
      }
      else {
        $conf['get_mountain_tags'] = (arg(3)) ? explode('+', arg(3)) : NULL;
      }
    }
  }

  list($results, $response) = pwb_search_do_search($conf, $keys);

  // Retrieve suggestion
  $search_page = apachesolr_search_page_load('core_search');
  $suggestions = apachesolr_search_get_search_suggestions($search_page->env_id);
  $suggested_words = '';
  if ($search_page && !empty($suggestions)) {
    $suggested_words = theme('apachesolr_search_suggestions', array('links' => l($suggestions[0], 'search/personaleweb' . '/' . $suggestions[0])));
  }

  // Build the content type block.
  $block = new stdClass();
  $block->module = 'pwb_search';
  $block->delta = 'pwb_search_result';

  // Display nothing at all if no keywords were entered.
  if (empty($keys) && $conf['key_word_search'] == 1 && $conf['key_word_search_global'] == 1) {
    if (!empty($conf['override_no_key'])) {
      $block->title = $conf['no_key_title'];
      $block->content = check_markup($conf['no_key'], $conf['no_key_format'], FALSE);

      return $block;
    }
    else {
      $block->title = t('Your search yielded no results');
      $block->content = theme('pwb_search_no_results', array('module' => 'pwb_search', 'suggested_words' => $suggested_words));

      return $block;
    }
  }

  if (!empty($results)) {
    $block->title = t('Search results');
    $block->content = theme($conf['templates'], array(
      'results' => $results,
      'module' => 'pwb_search',
      'response' => $response,
      'results_title' => $conf['results_title'],
      'rows_per_page' => $conf['rows_per_page'],
      'suggested_words' => $suggested_words,
      'searched_keyword' => $keys,
      'image_style' => $conf['image_style'],
      'enable_see_more' => $conf['enable_see_more'],
      'see_more_link_text' => $conf['see_more_link_text'],
      'see_more_link_points_to' => $conf['see_more_link_points_to'],
      'type_of_search' => $conf['type_of_search'],
      'pwb_date_formats' => $conf['pwb_date_formats'],
    ));
  }
  else {
    if (empty($conf['override_empty'])) {
      $block->title = t('Your search yielded no results');
      $block->content = theme('pwb_search_no_results', array('module' => 'pwb_search', 'suggested_words' => $suggested_words));
    }
    else {
      $block->title = $conf['empty_title'];
      $block->content = check_markup($conf['empty'], $conf['empty_format'], FALSE);
    }
  }

  return $block;
}

/**
 * Returns an edit form for custom type settings.
 */
function pwb_search_search_results_content_type_edit_form($form, &$form_state) {
  ctools_include('dependent');
  $conf = $form_state['conf'];

  $search_content_types = array();
  $content_types = node_type_get_types();
  foreach ($content_types as $id => $content_type_obj) {
    $search_content_types[$id] = $content_type_obj->name;
  }

  $form['content_types_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Please select for which content types to be performed the search?'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['content_types_fieldset']['content_types'] = array(
    '#type' => 'checkboxes',
    '#options' => $search_content_types,
    '#title' => t(''),
    '#default_value' => $conf['content_types'],
  );

  $image_styles = image_styles();
  $image_style_names = array();
  foreach ($image_styles as $style_name => $style_settings) {
    $image_style_names[$style_name] = $style_name;
  }

  $form['image_style'] = array(
    '#type' => 'select',
    '#title' => t('Select image style for the search result image'),
    '#options' => $image_style_names,
    '#default_value' => $conf['image_style'],
  );

  $form['pwb_date_formats'] = array(
    '#type' => 'select',
    '#title' => t('Select date format for the search results.'),
    '#options' => array(
      'news_date' => t('News date'),
      'event_date' => t('Events date'),
      'search_personaleweb' => t('Global search date'),
    ),
    '#default_value' => $conf['pwb_date_formats'],
  );

  $form['templates'] = array(
    '#type' => 'select',
    '#options' => array(
      'simple_search_results' => 'Simple search results',
      'cube_search_results' => 'Cube search results',
    ),
    '#title' => t('Please, select the type of layout for the search results?'),
    '#default_value' => $conf['templates'],
  );

  $form['type_of_search'] = array(
    '#type' => 'select',
    '#options' => array(
      'pwb_search_search_result' => 'Search results page search results',
      'section_news_search_results' => 'Section news search results',
      'section_events_search_results' => 'Section events search results',
      'section_tag_listing_search_results' => 'Section tags listing search results',
    ),
    '#title' => t('Please, select the type of search results?'),
    '#default_value' => $conf['type_of_search'],
  );

  $form['rows_per_page'] = array(
    '#title' => t('Please set how many results per page would you like? Set 0 for unlimited'),
    '#type' => 'textfield',
    '#default_value' => $conf['rows_per_page'],
  );

  $form['key_word_search'] = array(
    '#type' => 'checkbox',
    '#default_value' => $conf['key_word_search'],
    '#title' => t('Enable "keyword" search'),
    '#id' => 'key_word_search',
  );

  $form['key_word_search_paramount'] = array(
    '#type' => 'checkbox',
    '#default_value' => $conf['key_word_search_paramount'],
    '#title' => t('Use paramount tag'),
    '#dependency' => array('key_word_search' => array(1)),
  );

  $form['key_word_search_mountain'] = array(
    '#type' => 'checkbox',
    '#default_value' => $conf['key_word_search_mountain'],
    '#title' => t('Use mountain tags'),
    '#dependency' => array('key_word_search' => array(1)),
  );

  $form['key_word_search_global'] = array(
    '#type' => 'checkbox',
    '#default_value' => $conf['key_word_search_global'],
    '#title' => t('Use global keywords'),
    '#dependency' => array('key_word_search' => array(1)),
  );

  $form['results_title'] = array(
    '#type' => 'textfield',
    '#default_value' => $conf['results_title'],
    '#title' => t('Search results title override.'),
  );

  $form['apachesolr_search_sort'] = array(
    '#type' => 'checkbox',
    '#default_value' => $conf['apachesolr_search_sort'],
    '#title' => t('Enable sort by date desc'),
  );

  $form['enable_see_more'] = array(
    '#type' => 'checkbox',
    '#default_value' => $conf['enable_see_more'],
    '#title' => t('Enable "See more" link at the bottom of the results'),
    '#id' => 'enable_see_more',
  );

  $form['see_more_link_text'] = array(
    '#type' => 'textfield',
    '#default_value' => $conf['see_more_link_text'],
    '#title' => t('See more link text'),
    '#dependency' => array('enable_see_more' => array(1)),
  );

  $form['see_more_link_points_to'] = array(
    '#type' => 'textfield',
    '#default_value' => $conf['see_more_link_points_to'],
    '#title' => t('See more link point to page'),
    '#dependency' => array('enable_see_more' => array(1)),
  );

  $form['override_empty'] = array(
    '#type' => 'checkbox',
    '#default_value' => $conf['override_empty'],
    '#title' => t('Override "no result" text'),
  );

  $form['empty_title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#default_value' => $conf['empty_title'],
    '#dependency' => array('edit-override-empty' => array(1)),
  );

  $form['override_no_key'] = array(
    '#type' => 'checkbox',
    '#default_value' => $conf['override_no_key'],
    '#title' => t('Display text if no search keywords were submitted'),
  );

  $form['no_key_title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#default_value' => $conf['no_key_title'],
    '#dependency' => array('edit-override-no-key' => array(1)),
  );

  $form['no_key_field'] = array(
    '#type' => 'text_format',
    '#title' => t('No result text'),
    '#default_value' => $conf['no_key'],
    '#format' => $conf['no_key_format'],
    '#dependency' => array('edit-override-no-key' => array(1)),
  );

  return $form;
}

/**
 * Submit handler for search form.
 */
function pwb_search_search_results_content_type_edit_form_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Returns the administrative title for a type.
 */
function pwb_search_search_results_content_type_admin_title($subtype, $conf, $context) {
  return t('PWB search results');
}
