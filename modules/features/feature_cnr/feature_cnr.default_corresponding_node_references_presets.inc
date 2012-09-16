<?php
/**
 * @file
 * feature_cnr.default_corresponding_node_references_presets.inc
 */

/**
 * Implements hook_default_corresponding_node_references().
 */
function feature_cnr_default_corresponding_node_references() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'article*field_related_content*article*field_related_content';
  $cnr_obj->enabled = 1;
  $export['article*field_related_content*article*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'article*field_related_content*events*field_related_content';
  $cnr_obj->enabled = 1;
  $export['article*field_related_content*events*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'article*field_related_content*news*field_related_content';
  $cnr_obj->enabled = 1;
  $export['article*field_related_content*news*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'article*field_related_content*project*field_related_content';
  $cnr_obj->enabled = 1;
  $export['article*field_related_content*project*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'article*field_related_content*report*field_related_content';
  $cnr_obj->enabled = 1;
  $export['article*field_related_content*report*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'article*field_tema*tema*field_articles';
  $cnr_obj->enabled = 1;
  $export['article*field_tema*tema*field_articles'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'events*field_related_content*events*field_related_content';
  $cnr_obj->enabled = 1;
  $export['events*field_related_content*events*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'events*field_related_content*news*field_related_content';
  $cnr_obj->enabled = 1;
  $export['events*field_related_content*news*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'events*field_related_content*project*field_related_content';
  $cnr_obj->enabled = 1;
  $export['events*field_related_content*project*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'events*field_related_content*report*field_related_content';
  $cnr_obj->enabled = 1;
  $export['events*field_related_content*report*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'news*field_related_content*news*field_related_content';
  $cnr_obj->enabled = 1;
  $export['news*field_related_content*news*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'news*field_related_content*project*field_related_content';
  $cnr_obj->enabled = 1;
  $export['news*field_related_content*project*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'news*field_related_content*report*field_related_content';
  $cnr_obj->enabled = 1;
  $export['news*field_related_content*report*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'project*field_related_content*project*field_related_content';
  $cnr_obj->enabled = 1;
  $export['project*field_related_content*project*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'project*field_related_content*report*field_related_content';
  $cnr_obj->enabled = 1;
  $export['project*field_related_content*report*field_related_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->node_types_content_fields = 'report*field_related_content*report*field_related_content';
  $cnr_obj->enabled = 1;
  $export['report*field_related_content*report*field_related_content'] = $cnr_obj;

  return $export;
}
