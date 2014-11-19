<?php
/**
 * @file
 * jj2015_session.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jj2015_session_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_tab|node|session|form';
  $field_group->group_name = 'group_content_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_featured',
      2 => 'field_image',
      3 => 'field_name',
      4 => 'language',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-tab field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content_tab|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_info|node|session|form';
  $field_group->group_name = 'group_tab_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infos',
    'weight' => '8',
    'children' => array(
      0 => 'field_hours',
      1 => 'field_main_language',
      2 => 'field_languages',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab_info|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_resources|node|session|form';
  $field_group->group_name = 'group_tab_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '9',
    'children' => array(
      0 => 'field_youtube',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab-resources field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab_resources|node|session|form'] = $field_group;

  return $export;
}
