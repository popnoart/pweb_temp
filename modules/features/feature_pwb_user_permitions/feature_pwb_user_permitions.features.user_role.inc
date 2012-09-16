<?php
/**
 * @file
 * feature_pwb_user_permitions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_pwb_user_permitions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: consultant.
  $roles['consultant'] = array(
    'name' => 'consultant',
    'weight' => '3',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '4',
  );

  // Exported role: user.
  $roles['user'] = array(
    'name' => 'user',
    'weight' => '5',
  );

  return $roles;
}
