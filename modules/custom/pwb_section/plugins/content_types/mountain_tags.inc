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
  'title' => t('PWB Section Mountain Tags'),
  'icon' => 'icon_search.png',
  'description' => t('The pane will render list of taxonomy terms based on the currently active meny item. The terms will be filtered on click.'),
  'category' => t('Widgets'),
  'render callback' => 'pwb_section_mountain_tags_content_type_render',
  'required context' => new ctools_context_required(t('Term'), array('term', 'taxonomy_term')),
  'render first' => TRUE,
);

/**
 * Render the custom content type.
 */
function pwb_section_mountain_tags_content_type_render($subtype, $conf, $panel_args, $context) {
  $keys = '';
  $conf['paramount_tag'] = '';
  $conf['paramount_url'] = request_path();
  $conf['mountain_tags'] = array();
  $selected_tags = array();
  $not_selected_tags = array();

  // Build the content type block.
  $block = new stdClass();
  $block->module = 'pwb_section';
  $block->delta = 'pwb_section_results';
  $block->title = '';
  $block->content = '';

  $conf['paramount_tag'] = (isset($panel_args[0]) && !empty($panel_args[0])) ? $panel_args[0] : FALSE;
//  $conf['paramount_url'] = drupal_get_path();

  if ($conf['paramount_tag'] !== FALSE) {
//    kpr($conf);
    drupal_add_js(array('paramount_tag' => $conf['paramount_tag']), 'setting');
    drupal_add_js(array('paramount_url' => $conf['paramount_url']), 'setting');

    list($results, $response) = pwb_section_do_search($conf, $keys);
    $returned_mountain_tags = $response->facet_counts->facet_fields->im_field_mountain_tags;

    if (isset($returned_mountain_tags) && !empty($returned_mountain_tags)) {
      foreach ($returned_mountain_tags as $tid => $count) {
        if ($count != 0) {
          $term_obj = taxonomy_term_load($tid);
          if ($term_obj !== FALSE) {
            $conf['mountain_tags'] = (isset($panel_args[1]) && !empty($panel_args[1])) ? explode('+', $panel_args[1]) : FALSE;
            if (isset($conf['mountain_tags']) && !empty($conf['mountain_tags'])) {
              if (in_array($tid, $conf['mountain_tags'])) {
                $selected_tags[$tid] = array(
                  'name' => $term_obj->name,
                  'class' => 'clickable',
                );
              }
              else {
                list($m_results, $m_response) = pwb_section_do_search($conf, $keys);
                $filtered_mountain_tags = $m_response->facet_counts->facet_fields->im_field_mountain_tags;
                if (in_array($tid, array_keys((array) $filtered_mountain_tags)) && $filtered_mountain_tags->{$tid} != 0) {
                  $not_selected_tags[$tid] = array(
                    'name' => $term_obj->name,
                    'class' => 'clickable',
                  );
                }
                else {
                  $not_selected_tags[$tid] = array(
                    'name' => $term_obj->name,
                    'class' => 'not-clickable',
                  );
                }
              }
            }
            else {
              $not_selected_tags[$tid] = array(
                'name' => $term_obj->name,
                'class' => 'clickable',
              );
            }
          }
        }
      }

      $block->title = t('');
      $block->content = theme('mountain_tags_listing', array(
        'selected_tags' => $selected_tags,
        'not_selected_tags' => $not_selected_tags,
        'module' => 'pwb_section',
        'paramount_tag' => $conf['paramount_tag'],
      ));
    }
  }

  drupal_add_js(drupal_get_path('module', 'pwb_section') . '/pwb_section.js');

  return $block;
}

/**
 * Returns the administrative title for a type.
 */
function pwb_section_mountain_tags_content_type_admin_title($subtype, $conf, $context) {
  return t('PWB Section Mountain Tags');
}
