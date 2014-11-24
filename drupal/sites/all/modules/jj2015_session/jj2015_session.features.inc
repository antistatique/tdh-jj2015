<?php
/**
 * @file
 * jj2015_session.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jj2015_session_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function jj2015_session_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function jj2015_session_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Les sessions sont les ateliers/discussions/etc... qui se déroulent au courant d\'une journée.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speaker' => array(
      'name' => t('Speaker'),
      'base' => 'node_content',
      'description' => t('Le speaker est la ou l\'une des personnes qui intervient au courant d\'une session.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
