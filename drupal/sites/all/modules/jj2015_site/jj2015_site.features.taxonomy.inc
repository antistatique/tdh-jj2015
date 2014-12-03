<?php
/**
 * @file
 * jj2015_site.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function jj2015_site_taxonomy_default_vocabularies() {
  return array(
    'languages' => array(
      'name' => 'Languages',
      'machine_name' => 'languages',
      'description' => 'Available languages',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
