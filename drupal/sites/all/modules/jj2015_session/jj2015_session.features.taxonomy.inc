<?php
/**
 * @file
 * jj2015_session.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function jj2015_session_taxonomy_default_vocabularies() {
  return array(
    'event_day' => array(
      'name' => 'Event Day',
      'machine_name' => 'event_day',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'session_types' => array(
      'name' => 'Session Types',
      'machine_name' => 'session_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
