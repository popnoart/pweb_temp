<?php

/**
 * @file
 *
 * Admin panel for setting default macros uses by gmap panes.
 */

/**
 * Administation form for the PWB Search module.
 */
function pwb_search_config_form($form, &$form_state) {
  $form = array();

  $form['pwb_search_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('PWB Search debug mode'),
    '#default_value' => variable_get('pwb_search_debug', 0),
  );

  return system_settings_form($form);
}
