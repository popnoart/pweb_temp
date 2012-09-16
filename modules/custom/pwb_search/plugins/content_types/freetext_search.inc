<?php

/**
 * @file
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Freetext Search Block'),
  'icon' => 'icon_search.png',
  'description' => t('Freetext search form'),
  'category' => t('Widgets'),
  'edit form' => 'freetext_search_facet_pane_config',
  'defaults' => array(
    'freetext_search_show_content_dropbox' => 0,
  ),
);

/**
 * Render callback for the pane
 * Initiliaze the search with facets
 */
function pwb_search_freetext_search_content_type_render($subtype, $conf, $panel_args, &$contexts) {
  $render->content = drupal_get_form('freetext_search_block_form', $conf);

  return $render;
}

/**
 * The form of the free text search pane
 * @param array $form
 * @param array $form_state
 * @return multitype:string Ambigous <The, unknown, string, A, Optional>
 */
function freetext_search_block_form($form, $form_state) {
  $form['search'] = array(
    '#type' => 'textfield',
    '#title' => t('Search'),
    '#size' => 64,
    '#maxlength' => 128,
  );

  if (arg(1) == 'personaleweb' && arg(2)) {
    $form['search']['#default_value'] = arg(2);
  }

  if (isset($form_state['build_info']['args']) && !empty($form_state['build_info']['args'])) {
    $settings = reset($form_state['build_info']['args']);
    if ($settings['freetext_search_show_content_dropbox']) {
      $env_id = apachesolr_default_environment();
      $enabled_content_types = apachesolr_get_index_bundles($env_id, 'node');
      $node_content_types = array();
      $node_content_types['_all_'] = 'All Categories';
      foreach (entity_get_info() as $entity_type => $entity_info) {
        if (!empty($entity_info['apachesolr']['indexable'])) {
          foreach ($entity_info['bundles'] as $key => $info) {
            if (in_array($key, $enabled_content_types)) {
              $node_content_types[$key] = $info['label'];
            }
          }
        }
      }

      $form['pwb_search_facets_content_types'] = array(
        '#title' => t(''),
        '#type' => 'select',
        '#options' => $node_content_types,
        '#default_value' => (isset($_GET['fq'])) ? str_replace('bundle:', '', $_GET['fq']) : '_all_',
        '#id' => 'pwb-search-content-types',
      );

      $form['#attached']['js'] = array(
        drupal_get_path('module', 'pwb_search') . '/pwb_search.js',
      );
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );

  return $form;
}

/**
 * The submit of the form of the free text search pane
 * @param array $form
 * @param array $form_state
 */
function freetext_search_block_form_submit($form, &$form_state) {
  $query = $_GET;
  unset($query['q']);

  if ($form_state['values']['pwb_search_facets_content_types'] != '_all_') {
    $form_state['redirect'] = array('search/personaleweb/' . $form_state['values']['search'], array('query' => array('fq' => 'bundle:' . $form_state['values']['pwb_search_facets_content_types'])));
  }
  else {
    $form_state['redirect'] = array('search/personaleweb/' . $form_state['values']['search']);
  }
}

/**
 * Edit form for the pane
 */
function freetext_search_facet_pane_config($form, $form_state) {
  $conf = $form_state['conf'];

  $form['freetext_search_pane_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Free text search settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['freetext_search_pane_fieldset']['freetext_search_show_content_dropbox'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show content types dropbox together with the search textfield to allow users dynamically filter the search results by content type.'),
    '#default_value' => $conf['freetext_search_show_content_dropbox'],
  );

  return $form;
}

/**
 * Submit for the pane config
 */
function freetext_search_facet_pane_config_submit($form, &$form_state) {
  // Copy everything from our defaults.
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
