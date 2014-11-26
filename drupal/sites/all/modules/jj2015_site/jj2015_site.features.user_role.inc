<?php
/**
 * @file
 * jj2015_site.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jj2015_site_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: translator.
  $roles['translator'] = array(
    'name' => 'translator',
    'weight' => 4,
  );

  return $roles;
}
