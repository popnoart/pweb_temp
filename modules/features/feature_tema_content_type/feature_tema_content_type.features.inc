<?php
/**
 * @file
 * feature_tema_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_tema_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_tema_content_type_node_info() {
  $items = array(
    'tema' => array(
      'name' => t('Tema'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
