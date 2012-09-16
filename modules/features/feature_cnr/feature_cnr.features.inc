<?php
/**
 * @file
 * feature_cnr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_cnr_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "corresponding_node_references" && $api == "default_corresponding_node_references_presets") {
    return array("version" => "1");
  }
}
