<?php

/**
 * @file
 */

/**
 * The custom search form
 * @param array $form
 * @param array $form_state
 */
function pwb_search_form($form, &$form_state) {
  $form = array();

  $form['pwb_search_container'] = array(
    '#type' => 'container',
  );

  $form['pwb_search_container']['pwb_custom_search'] = array(
    '#title' => t('Search'),
    '#type' => 'textfield',
    '#default_value' => (arg(1) == 'personaleweb' && arg(2)) ? arg(2) : '',
    '#size' => 20,
    '#maxlength' => 64,
  );

  $form['pwb_search_container']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );

  return $form;
}

/**
 * The submition of the search form.
 * @param array $form
 * @param array $form_state
 */
function pwb_search_form_submit($form, &$form_state) {
  $form_state['redirect'] = array('search/personaleweb' . '/' . $form_state['values']['pwb_custom_search']);
}
