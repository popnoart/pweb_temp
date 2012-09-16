<?php

/**
 * @file
 *
 * Admin panel for PRP Facet Dropdown
 */

/**
 * Administation form for the PRP Facet Dropdown module.
 */
function prp_facet_dropdown_config_form($form, &$form_state) {
  $form = array();

  $form['prp_facet_dropdown_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('PRP Facet Dropdown debug mode'),
    '#default_value' => variable_get('prp_facet_dropdown_debug', 0),
  );

  return system_settings_form($form);
}
