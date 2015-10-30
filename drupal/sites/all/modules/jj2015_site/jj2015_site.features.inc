<?php
/**
 * @file
 * jj2015_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jj2015_site_ctools_plugin_api($module = NULL, $api = NULL) {
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
function jj2015_site_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function jj2015_site_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function jj2015_site_default_search_api_index() {
  $items = array();
  $items['default_multilingual_node_index'] = entity_import('search_api_index', '{
    "name" : "Default multilingual node index",
    "machine_name" : "default_multilingual_node_index",
    "description" : "An automatically created search index for indexing multilingual node data. Might be configured to specific needs.",
    "server" : "search_ser",
    "item_type" : "search_api_et_node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "search_api_et" : { "include" : "all", "fallback language" : "fr" },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "-49", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "-48", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "-47",
          "settings" : { "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv" }
        },
        "search_api_attachments_field_collections_alter_settings" : {
          "status" : 1,
          "weight" : "-46",
          "settings" : { "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv" }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "-45", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "-44", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "-43", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "-42", "settings" : { "mode" : "full" } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "-41",
          "settings" : { "lang_field" : "", "languages" : [] }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "title_field" : true,
              "field_email" : true,
              "field_job_title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_resources_links:field_author" : true,
              "field_resources_links:field_resource_title" : true,
              "field_resources_links:field_description" : true,
              "field_resources:field_author" : true,
              "field_resources:field_copyright" : true,
              "field_resources:field_resource_title" : true,
              "field_resources:field_description" : true,
              "field_speakers:field_speaker:title" : true,
              "field_speakers:field_speaker:field_email" : true,
              "field_speakers:field_speaker:field_job_title" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_email" : true,
              "field_job_title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_resources_links:field_author" : true,
              "field_resources_links:field_resource_title" : true,
              "field_resources_links:field_description" : true,
              "field_resources:field_author" : true,
              "field_resources:field_copyright" : true,
              "field_resources:field_resource_title" : true,
              "field_resources:field_description" : true,
              "field_speakers:field_speaker:title" : true,
              "field_speakers:field_speaker:field_email" : true,
              "field_speakers:field_speaker:field_job_title" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_email" : true,
              "field_job_title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_resources_links:field_author" : true,
              "field_resources_links:field_resource_title" : true,
              "field_resources_links:field_description" : true,
              "field_resources:field_author" : true,
              "field_resources:field_copyright" : true,
              "field_resources:field_resource_title" : true,
              "field_resources:field_description" : true,
              "field_speakers:field_speaker:title" : true,
              "field_speakers:field_speaker:field_email" : true,
              "field_speakers:field_speaker:field_job_title" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_email" : true,
              "field_job_title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_resources_links:field_author" : true,
              "field_resources_links:field_resource_title" : true,
              "field_resources_links:field_description" : true,
              "field_resources:field_author" : true,
              "field_resources:field_copyright" : true,
              "field_resources:field_resource_title" : true,
              "field_resources:field_description" : true,
              "field_speakers:field_speaker:title" : true,
              "field_speakers:field_speaker:field_email" : true,
              "field_speakers:field_speaker:field_job_title" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_email" : { "type" : "text" },
        "field_job_title" : { "type" : "text" },
        "field_languages" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_main_language" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_metatags" : { "type" : "text" },
        "field_resources" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_resources:field_author" : { "type" : "list\\u003Ctext\\u003E" },
        "field_resources:field_copyright" : { "type" : "list\\u003Ctext\\u003E" },
        "field_resources:field_description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_resources:field_file:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_resources:field_file:file:name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "3.0" },
        "field_resources:field_file_type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resources:field_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_resources:field_resource_title" : { "type" : "list\\u003Ctext\\u003E", "boost" : "5.0" },
        "field_resources:field_year" : { "type" : "list\\u003Cdate\\u003E" },
        "field_resources_links" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_resources_links:field_author" : { "type" : "list\\u003Ctext\\u003E" },
        "field_resources_links:field_description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_resources_links:field_file:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_resources_links:field_language" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resources_links:field_name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resources_links:field_resource_title" : { "type" : "list\\u003Ctext\\u003E", "boost" : "3.0" },
        "field_session_day" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_session_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_speakers" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_speakers:field_speaker:changed" : { "type" : "list\\u003Cdate\\u003E" },
        "field_speakers:field_speaker:created" : { "type" : "list\\u003Cdate\\u003E" },
        "field_speakers:field_speaker:field_email" : { "type" : "list\\u003Ctext\\u003E" },
        "field_speakers:field_speaker:field_job_title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_speakers:field_speaker:language" : { "type" : "list\\u003Cstring\\u003E" },
        "field_speakers:field_speaker:title" : { "type" : "list\\u003Ctext\\u003E" },
        "search_api_language" : { "type" : "string" },
        "source" : { "type" : "integer", "entity_type" : "node" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "title_field" : { "type" : "text" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function jj2015_site_default_search_api_server() {
  $items = array();
  $items['search_ser'] = entity_import('search_api_server', '{
    "name" : "Search Server",
    "machine_name" : "search_ser",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "2",
      "partial_matches" : 1,
      "indexes" : { "default_multilingual_node_index" : {
          "type" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "created" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "source" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "source",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title_field" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_languages" : {
            "table" : "search_api_db_default_multilingual_node_index_field_languages",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_resources_links" : {
            "table" : "search_api_db_default_multilingual_node_index_field_resources_",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_session_day" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "field_session_day",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_session_type" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "field_session_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_speakers" : {
            "table" : "search_api_db_default_multilingual_node_index_field_speakers",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_main_language" : {
            "table" : "search_api_db_default_multilingual_node_index",
            "column" : "field_main_language",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_resources" : {
            "table" : "search_api_db_default_multilingual_node_index_field_resources",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_email" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_job_title" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_resources_links:field_name" : {
            "table" : "search_api_db_default_multilingual_node_index_field_resource_1",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_resources_links:field_author" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_resources_links:field_language" : {
            "table" : "search_api_db_default_multilingual_node_index_field_resource_3",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_resources_links:field_resource_title" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "3.0"
          },
          "field_resources_links:field_description" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_resources:field_name" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "column" : "value",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_resources:field_author" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_resources:field_copyright" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_resources:field_resource_title" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "5.0"
          },
          "field_resources:field_year" : {
            "table" : "search_api_db_default_multilingual_node_index_field_resource_4",
            "column" : "value",
            "type" : "list\\u003Cdate\\u003E",
            "boost" : "1.0"
          },
          "field_resources:field_file_type" : {
            "table" : "search_api_db_default_multilingual_node_index_field_resource_5",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_resources:field_description" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_speakers:field_speaker:title" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_speakers:field_speaker:language" : {
            "table" : "search_api_db_default_multilingual_node_index_field_speakers_f",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_speakers:field_speaker:created" : {
            "table" : "search_api_db_default_multilingual_node_index_field_speakers_1",
            "column" : "value",
            "type" : "list\\u003Cdate\\u003E",
            "boost" : "1.0"
          },
          "field_speakers:field_speaker:changed" : {
            "table" : "search_api_db_default_multilingual_node_index_field_speakers_2",
            "column" : "value",
            "type" : "list\\u003Cdate\\u003E",
            "boost" : "1.0"
          },
          "field_speakers:field_speaker:field_email" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_speakers:field_speaker:field_job_title" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_resources_links:field_file:file" : {
            "table" : "search_api_db_default_multilingual_node_index_field_resource_6",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_resources:field_file:file" : {
            "table" : "search_api_db_default_multilingual_node_index_field_resource_7",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_resources:field_file:file:name" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "3.0"
          },
          "field_metatags" : {
            "table" : "search_api_db_default_multilingual_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
