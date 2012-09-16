<?php
/**
 * @file
 * feature_base_content_types.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_base_content_types_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-basic-pages
  $menus['menu-basic-pages'] = array(
    'menu_name' => 'menu-basic-pages',
    'title' => 'Basic Pages',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Pages');


  return $menus;
}
