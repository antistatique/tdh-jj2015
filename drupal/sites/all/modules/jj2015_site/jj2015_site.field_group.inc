<?php
/**
 * @file
 * jj2015_site.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jj2015_site_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_content|node|page|form';
  $field_group->group_name = 'group_tab_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab_content|node|page|form'] = $field_group;

  return $export;
}
