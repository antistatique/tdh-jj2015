<?php
/**
 * @file
 * jj2015_session.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function jj2015_session_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_resources-field_author'
  $field_instances['field_collection_item-field_resources-field_author'] = array(
    'bundle' => 'field_resources',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'em',
    'field_name' => 'field_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources-field_copyright'
  $field_instances['field_collection_item-field_resources-field_copyright'] = array(
    'bundle' => 'field_resources',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_copyright',
    'label' => 'Copyright',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources-field_file'
  $field_instances['field_collection_item-field_resources-field_file'] = array(
    'bundle' => 'field_resources',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'file_url_plain',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'file_url_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_file',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf txt doc zip rar docx',
      'max_filesize' => '10 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources-field_file_type'
  $field_instances['field_collection_item-field_resources-field_file_type'] = array(
    'bundle' => 'field_resources',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Cette option permet de modifier l\'icône qui est affichée à côté de la ressource.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_key',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_file_type',
    'label' => 'File Type',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources-field_language'
  $field_instances['field_collection_item-field_resources-field_language'] = array(
    'bundle' => 'field_resources',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_language',
    'label' => 'Language',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources-field_resource_title'
  $field_instances['field_collection_item-field_resources-field_resource_title'] = array(
    'bundle' => 'field_resources',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'strong',
    'field_name' => 'field_resource_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources-field_year'
  $field_instances['field_collection_item-field_resources-field_year'] = array(
    'bundle' => 'field_resources',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_year',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources_links-field_author'
  $field_instances['field_collection_item-field_resources_links-field_author'] = array(
    'bundle' => 'field_resources_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_plain',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources_links-field_copyright'
  $field_instances['field_collection_item-field_resources_links-field_copyright'] = array(
    'bundle' => 'field_resources_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_copyright',
    'label' => 'Copyright',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources_links-field_language'
  $field_instances['field_collection_item-field_resources_links-field_language'] = array(
    'bundle' => 'field_resources_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_language',
    'label' => 'Language',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources_links-field_resource_title'
  $field_instances['field_collection_item-field_resources_links-field_resource_title'] = array(
    'bundle' => 'field_resources_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_resource_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources_links-field_url'
  $field_instances['field_collection_item-field_resources_links-field_url'] = array(
    'bundle' => 'field_resources_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_title_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_resources_links-field_year'
  $field_instances['field_collection_item-field_resources_links-field_year'] = array(
    'bundle' => 'field_resources_links',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'date_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'span',
    'field_name' => 'field_year',
    'label' => 'Year',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_speakers-field_description'
  $field_instances['field_collection_item-field_speakers-field_description'] = array(
    'bundle' => 'field_speakers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'thumbnail' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_speakers-field_speaker'
  $field_instances['field_collection_item-field_speakers-field_speaker'] = array(
    'bundle' => 'field_speakers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'links' => TRUE,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'thumbnail' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'links' => 1,
          'view_mode' => 'half_teaser_thumbnail',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_speaker',
    'label' => 'Speaker',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'custom_display_fields' => array(),
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-event_day-body'
  $field_instances['node-event_day-body'] = array(
    'bundle' => 'event_day',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'searchapi_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event_day-field_session_day'
  $field_instances['node-event_day-field_session_day'] = array(
    'bundle' => 'event_day',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_session_day',
    'label' => 'Session Day',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event_day-title_field'
  $field_instances['node-event_day-title_field'] = array(
    'bundle' => 'event_day',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'node-session-body'
  $field_instances['node-session-body'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'searchapi_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-session-field_featured'
  $field_instances['node-session-field_featured'] = array(
    'bundle' => 'session',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Si coché, la sesion sera mise en avant sur la page d\'accueil.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured',
    'label' => 'Featured',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-session-field_image'
  $field_instances['node-session-field_image'] = array(
    'bundle' => 'session',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => 'banner',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => 'banner',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => 'banner',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'searchapi_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => 'content',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1600x400',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-session-field_languages'
  $field_instances['node-session-field_languages'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Langues dans lesquelles la session sera également disponible. <strong>Pas la langue principale! (qui s\'affichera en double sinon)</strong>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'span',
    'field_name' => 'field_languages',
    'label' => 'Languages',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-session-field_main_language'
  $field_instances['node-session-field_main_language'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => 'text-success',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 16,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => 'text-success',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'strong',
    'field_name' => 'field_main_language',
    'label' => 'Main Language',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-session-field_metatags'
  $field_instances['node-session-field_metatags'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Insérez ici tous les mots clés qui doivent être indexés par le moteur de recherche local. Le contenu standard de la session est déjà indexé, uniquement les titres des fichiers ne le sont pas de base.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_plain',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_metatags',
    'label' => 'Search index',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-session-field_resources'
  $field_instances['node-session-field_resources'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'field_formatter_class' => 'row',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add new file',
          'delete' => 'Delete',
          'description' => 0,
          'edit' => 'Edit',
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_resources',
    'label' => 'Resources',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-session-field_resources_links'
  $field_instances['node-session-field_resources_links'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add new link',
          'delete' => 'Delete',
          'description' => 0,
          'edit' => 'Edit',
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_resources_links',
    'label' => 'Resources Links',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-session-field_session_date'
  $field_instances['node-session-field_session_date'] = array(
    'bundle' => 'session',
    'deleted' => 0,
    'description' => 'L\'horaire de la session.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'searchapi_result' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'hours_only',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'strong',
    'field_name' => 'field_session_date',
    'label' => 'Session Time',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-session-field_session_day'
  $field_instances['node-session-field_session_day'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Séléctionnez le jour où se tiendra cette session.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_session_day',
    'label' => 'Session Day',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-session-field_session_type'
  $field_instances['node-session-field_session_type'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'i18n_taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'searchapi_result' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'span',
    'field_name' => 'field_session_type',
    'label' => 'Session Type',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-session-field_speakers'
  $field_instances['node-session-field_speakers'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'field_formatter_class' => 'col-sm-6',
          'view_mode' => 'thumbnail',
        ),
        'type' => 'field_collection_view',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'field_formatter_class' => 'teaser',
          'view_mode' => 'token',
        ),
        'type' => 'field_collection_view',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_speakers',
    'label' => 'Speakers',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-session-field_youtube'
  $field_instances['node-session-field_youtube'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'youtube',
        'settings' => array(
          'field_formatter_class' => '',
          'youtube_autohide' => 0,
          'youtube_autoplay' => 0,
          'youtube_controls' => 0,
          'youtube_height' => '',
          'youtube_iv_load_policy' => 1,
          'youtube_showinfo' => 0,
          'youtube_size' => 'responsive',
          'youtube_width' => '',
        ),
        'type' => 'youtube_video',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'youtube',
        'settings' => array(
          'field_formatter_class' => '',
          'youtube_autohide' => 0,
          'youtube_autoplay' => 0,
          'youtube_controls' => 0,
          'youtube_height' => '',
          'youtube_iv_load_policy' => 1,
          'youtube_showinfo' => 0,
          'youtube_size' => 'responsive',
          'youtube_width' => '',
        ),
        'type' => 'youtube_video',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_youtube',
    'label' => 'Youtube',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'youtube',
      'settings' => array(),
      'type' => 'youtube',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-session-title_field'
  $field_instances['node-session-title_field'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'node-speaker-body'
  $field_instances['node-speaker-body'] = array(
    'bundle' => 'speaker',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-speaker-field_email'
  $field_instances['node-speaker-field_email'] = array(
    'bundle' => 'speaker',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'email_contact',
        'weight' => 6,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'email_default',
        'weight' => 5,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-speaker-field_featured'
  $field_instances['node-speaker-field_featured'] = array(
    'bundle' => 'speaker',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Si coché, le/la speaker sera mis/e en avant sur la page d\'accueil.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured',
    'label' => 'Featured',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-speaker-field_file'
  $field_instances['node-speaker-field_file'] = array(
    'bundle' => 'speaker',
    'deleted' => 0,
    'description' => 'CV éventuel au format PDF',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'file_url_plain',
        'weight' => 8,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'file_url_plain',
        'weight' => 3,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file',
    'label' => 'CV',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-speaker-field_image'
  $field_instances['node-speaker-field_image'] = array(
    'bundle' => 'speaker',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => 'responsive',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => 'pull-left media-object',
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'searchapi_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => 'pull-left media-object',
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => 'pull-left media-object',
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '800x800',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-speaker-field_job_title'
  $field_instances['node-speaker-field_job_title'] = array(
    'bundle' => 'speaker',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => 'text-muted',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_formatter_class' => '',
          'title_class' => '',
          'title_link' => '',
          'title_style' => '',
        ),
        'type' => 'title_linked',
        'weight' => 4,
      ),
      'searchapi_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => 'text-muted',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_job_title',
    'label' => 'Job Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-speaker-field_languages'
  $field_instances['node-speaker-field_languages'] = array(
    'bundle' => 'speaker',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Les langues que parle le/la speaker (durant la conférence uniquement).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_languages',
    'label' => 'Languages',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-speaker-field_url'
  $field_instances['node-speaker-field_url'] = array(
    'bundle' => 'speaker',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Site internet ou autre lien lié à ce/cette speaker.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-speaker-title_field'
  $field_instances['node-speaker-title_field'] = array(
    'bundle' => 'speaker',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'half_teaser_thumbnail' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'searchapi_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-event_day-field_body'
  $field_instances['taxonomy_term-event_day-field_body'] = array(
    'bundle' => 'event_day',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-event_day-field_event_day'
  $field_instances['taxonomy_term-event_day-field_event_day'] = array(
    'bundle' => 'event_day',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_event_day',
    'label' => 'Event Day',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Author');
  t('Body');
  t('CV');
  t('CV éventuel au format PDF');
  t('Cette option permet de modifier l\'icône qui est affichée à côté de la ressource.');
  t('Copyright');
  t('Description');
  t('Email');
  t('Event Day');
  t('Featured');
  t('File');
  t('File Type');
  t('Image');
  t('Insérez ici tous les mots clés qui doivent être indexés par le moteur de recherche local. Le contenu standard de la session est déjà indexé, uniquement les titres des fichiers ne le sont pas de base.');
  t('Job Title');
  t('L\'horaire de la session.');
  t('Language');
  t('Languages');
  t('Langues dans lesquelles la session sera également disponible. <strong>Pas la langue principale! (qui s\'affichera en double sinon)</strong>');
  t('Les langues que parle le/la speaker (durant la conférence uniquement).');
  t('Main Language');
  t('Resources');
  t('Resources Links');
  t('Search index');
  t('Session Day');
  t('Session Time');
  t('Session Type');
  t('Si coché, la sesion sera mise en avant sur la page d\'accueil.');
  t('Si coché, le/la speaker sera mis/e en avant sur la page d\'accueil.');
  t('Site internet ou autre lien lié à ce/cette speaker.');
  t('Speaker');
  t('Speakers');
  t('Séléctionnez le jour où se tiendra cette session.');
  t('Title');
  t('URL');
  t('Year');
  t('Youtube');

  return $field_instances;
}
