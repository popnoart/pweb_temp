<?php
/**
 * @file
 * feature_tema_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_tema_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pwb_organization|node|tema|form';
  $field_group->group_name = 'group_pwb_organization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '10',
    'children' => array(
      0 => 'field_organization',
      1 => 'field_organization_region',
      2 => 'field_organization_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pwb_organization|node|tema|form'] = $field_group;

  return $export;
}
