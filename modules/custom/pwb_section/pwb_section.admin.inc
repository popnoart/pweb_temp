<?php

/**
 * @file
 */

/**
 * Administation form for the PWB Section module.
 */
function pwb_section_config_form($form, &$form_state) {
  $form = array();

  $form['pwb_section_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('PWB Section debug mode'),
    '#default_value' => variable_get('pwb_section_debug', 0),
  );

  return system_settings_form($form);
}
