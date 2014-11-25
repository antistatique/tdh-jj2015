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
      3 => 'field_youtube',
      4 => 'field_name_title',
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
  $field_group->identifier = 'group_languages|node|session|default';
  $field_group->group_name = 'group_languages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_meta';
  $field_group->data = array(
    'label' => 'languages',
    'weight' => '13',
    'children' => array(
      0 => 'field_languages',
      1 => 'field_main_language',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'languages',
      'instance_settings' => array(
        'classes' => 'text-muted bullet',
        'element' => 'span',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $export['group_languages|node|session|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|session|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'meta',
    'weight' => '1',
    'children' => array(
      0 => 'field_session_date',
      1 => 'field_session_type',
      2 => 'group_languages',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'meta',
      'instance_settings' => array(
        'classes' => 'group-meta field-group-html-element',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_meta|node|session|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_res_tabs|field_collection_item|field_resources|form';
  $field_group->group_name = 'group_res_tabs';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_resources';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_tab_file',
      1 => 'group_tab_info',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_res_tabs|field_collection_item|field_resources|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_content|node|speaker|form';
  $field_group->group_name = 'group_tab_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speaker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_job_title',
      2 => 'title',
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
  $export['group_tab_content|node|speaker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_file|field_collection_item|field_resources|form';
  $field_group->group_name = 'group_tab_file';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_resources';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_res_tabs';
  $field_group->data = array(
    'label' => 'File',
    'weight' => '1',
    'children' => array(
      0 => 'field_resource_title',
      1 => 'field_file',
      2 => 'field_file_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab_file|field_collection_item|field_resources|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_info|field_collection_item|field_resources|form';
  $field_group->group_name = 'group_tab_info';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_resources';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_res_tabs';
  $field_group->data = array(
    'label' => 'Infos',
    'weight' => '2',
    'children' => array(
      0 => 'field_language',
      1 => 'field_author',
      2 => 'field_copyright',
      3 => 'field_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab_info|field_collection_item|field_resources|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_languages',
      1 => 'field_main_language',
      2 => 'field_session_date',
      3 => 'field_session_day',
      4 => 'field_session_type',
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
  $field_group->identifier = 'group_tab_info|node|speaker|form';
  $field_group->group_name = 'group_tab_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'speaker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infos',
    'weight' => '2',
    'children' => array(
      0 => 'field_email',
      1 => 'field_featured',
      2 => 'field_file',
      3 => 'field_image',
      4 => 'field_languages',
      5 => 'field_url',
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
  $export['group_tab_info|node|speaker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_resources_links|node|session|form';
  $field_group->group_name = 'group_tab_resources_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources Links',
    'weight' => '4',
    'children' => array(
      0 => 'field_resources_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Resources Links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tab-resources-links field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_tab_resources_links|node|session|form'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_resources',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_speakers|node|session|form';
  $field_group->group_name = 'group_tab_speakers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speakers',
    'weight' => '1',
    'children' => array(
      0 => 'field_speakers',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Speakers',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tab-speakers field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_tab_speakers|node|session|form'] = $field_group;

  return $export;
}
