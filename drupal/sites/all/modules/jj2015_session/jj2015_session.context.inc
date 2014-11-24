<?php
/**
 * @file
 * jj2015_session.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function jj2015_session_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'speaker';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'speaker' => 'speaker',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sessions-block_1' => array(
          'module' => 'views',
          'delta' => 'sessions-block_1',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['speaker'] = $context;

  return $export;
}
