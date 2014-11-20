<?php

/**
 * @file
 * template.php
 */


/**
 * Overrides theme_menu_local_tasks().
 */
function jj2015_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<div class="clearfix"><ul class="tabs--primary nav nav-pills pull-right">';
    $variables['primary']['#suffix'] = '</ul></div><div class="spacer spacer-xs"></div>';
    $output .= drupal_render($variables['primary']);
  }

  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs--secondary pagination pagination-sm">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}


/**
* Preprocess variables for node.tpl.php
*
* @see node.tpl.php
*/
function jj2015_preprocess_node(&$variables) {

  // That will let you use a template file like: node--[type|nodeid]--teaser.tpl.php
  if($variables['view_mode'] == 'teaser') {
    $variables['theme_hook_suggestions'][] = 'node__' . $variables['node']->type . '__teaser';
  }
  // if (module_exists('devel')) {
  //  dpm($variables);
  // }
}

function jj2015_preprocess_image_style(&$vars) {
  if ($vars['style_name'] == 'banner') {
    $vars['attributes']['class'][] = 'img-responsive'; // can be 'img-rounded', 'img-circle', or 'img-thumbnail'
  }
}