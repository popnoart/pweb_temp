<?php
/**
 * @file
 * feature_base_content_types.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function feature_base_content_types_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Article Mountain tags max Value';
  $rule->name = 'article_mountain_tags_max_value';
  $rule->field_name = 'field_mountain_tags';
  $rule->col = 'tid';
  $rule->entity_type = 'node';
  $rule->bundle = 'article';
  $rule->validator = 'field_validation_number_of_selections_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '5',
    'errors' => 1,
  );
  $rule->error_message = 'You should select maximum 5 tags';
  $export['article_mountain_tags_max_value'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Events Mountain tags max Value';
  $rule->name = 'events_mountain_tags_max_value';
  $rule->field_name = 'field_mountain_tags';
  $rule->col = 'tid';
  $rule->entity_type = 'node';
  $rule->bundle = 'events';
  $rule->validator = 'field_validation_number_of_selections_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '5',
    'errors' => 1,
  );
  $rule->error_message = 'You should select maximum 5 tags';
  $export['events_mountain_tags_max_value'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'News Mountain tags max Value';
  $rule->name = 'news_mountain_tags_max_value';
  $rule->field_name = 'field_mountain_tags';
  $rule->col = 'tid';
  $rule->entity_type = 'node';
  $rule->bundle = 'news';
  $rule->validator = 'field_validation_number_of_selections_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '5',
    'errors' => 1,
  );
  $rule->error_message = 'You should select maximum 5 tags';
  $export['news_mountain_tags_max_value'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Project Mountain tags max Value';
  $rule->name = 'project_mountain_tags_max_value';
  $rule->field_name = 'field_mountain_tags';
  $rule->col = 'tid';
  $rule->entity_type = 'node';
  $rule->bundle = 'project';
  $rule->validator = 'field_validation_number_of_selections_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '5',
    'errors' => 1,
  );
  $rule->error_message = 'You should select maximum 5 tags';
  $export['project_mountain_tags_max_value'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Report Mountain tags max Value';
  $rule->name = 'report_mountain_tags_max_value';
  $rule->field_name = 'field_mountain_tags';
  $rule->col = 'tid';
  $rule->entity_type = 'node';
  $rule->bundle = 'report';
  $rule->validator = 'field_validation_number_of_selections_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '5',
    'errors' => 1,
  );
  $rule->error_message = 'You should select maximum 5 tags';
  $export['report_mountain_tags_max_value'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Tema Mountain tags max Value';
  $rule->name = 'tema_mountain_tags_max_value';
  $rule->field_name = 'field_mountain_tags';
  $rule->col = 'tid';
  $rule->entity_type = 'node';
  $rule->bundle = 'tema';
  $rule->validator = 'field_validation_number_of_selections_validator';
  $rule->settings = array(
    'min' => '1',
    'max' => '5',
    'errors' => 1,
  );
  $rule->error_message = 'You should select maximum 5 tags';
  $export['tema_mountain_tags_max_value'] = $rule;

  return $export;
}
