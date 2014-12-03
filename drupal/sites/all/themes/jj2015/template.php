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
  // Get a list of all the regions for this theme
  foreach (system_region_list($GLOBALS['theme']) as $region_key => $region_name) {

    // Get the content for each region and add it to the $region variable
    if ($blocks = block_get_blocks_by_region($region_key)) {
      $variables['region'][$region_key] = $blocks;
    }
    else {
      $variables['region'][$region_key] = array();
    }
  }
}

function jj2015_preprocess_page(&$variables) {
  $variables['hide_title'] = false;
  if (!empty($variables['node']) && ($variables['node']->type == 'speaker' || $variables['node']->type == 'session' || $variables["is_front"])) {
    $variables['hide_title'] = true;
  }
}

function jj2015_preprocess_image_style(&$vars) {
  if ($vars['style_name'] == 'banner' || $vars['style_name'] == 'responsive') {
    $vars['attributes']['class'][] = 'img-responsive'; // can be 'img-rounded', 'img-circle', or 'img-thumbnail'
  }
  if ($vars['style_name'] == 'thumbnail') {
    $vars['attributes']['class'][] = 'img-responsive'; // can be 'img-rounded', 'img-circle', or 'img-thumbnail'
  }
}

function jj2015_preprocess_field(&$variables, $hook) {
  if ($variables['element']['#entity_type'] == 'field_collection_item') {
    // Check if the bundle name (i.e. the field collection field name) is
    // among the theme hook suggestions.
    $index = array_search('field__' . $variables['element']['#bundle'],
      $variables['theme_hook_suggestions']);

    // Remove the bundle theme hook suggestion.
    if ($index !== false) {
      unset($variables['theme_hook_suggestions'][$index]);
    }
  }
}

function jj2015_links__locale_block(&$variables) {
  // the global $language variable tells you what the current language is
  global $language;

  // an array of list items
  $items = array();
  foreach($variables['links'] as $lang => $info) {

    $name     = $info['language']->native;
    $href     = isset($info['href']) ? $info['href'] : '';
    $li_classes   = array('list-item-class');

    // if the global language is that of this item's language, add the active class
    if($lang === $language->language){
      $link_classes = array('btn', 'btn-primary');
    } else {
      $link_classes = array('btn', 'btn-default');
    }
    $options = array('attributes' => array('class'    => $link_classes),
     'language' => $info['language'],
     'html'     => true
     );
    $link = l($name, $href, $options);

    // display only translated links
    if ($href) $items[] = array('data' => $link, 'class' => $li_classes);
  }

  // output
  $attributes = array('class' => array('my-list'));
  $output = '';
  $output .= '<div class="btn-group isolate hidden-xs">';
  foreach ($items as $item => $value) {
    $output .= $value['data'];
  }
  $output .= '</div>';
  return $output;
}

function jj2015_query_node_access_alter(QueryAlterableInterface $query) {
  $search = FALSE;
  $node = FALSE;

  // Even though we know the node alias is going to be "n", by checking for the
  // search_index table we make sure we're on the search page. Omitting this step will
  // break the default admin/content page.
  foreach ($query->getTables() as $alias => $table) {
    if ($table['table'] == 'search_index') {
      $search = $alias;
    }
    elseif ($table['table'] == 'node') {
      $node = $alias;
    }
  }

  // Make sure we're on the search page.
  if ($node && $search) {
    $db_and = db_and();
    // I guess you *could* use global $language here instead but this is safer.
    $language = i18n_language_interface();
    $lang = $language->language;

    $db_and->condition($node . '.language', $lang, '=');
    $query->condition($db_and);
  }
}

/**
 * Variable preprocessor for the views exposed forms.
 *
 * @see jj2015_form_views_exposed_form_alter()
 */
function jj2015_preprocess_views_exposed_form(&$variables) {
  // this should target a specific form to avoid issues if there are several
  $form = &$variables['form'];
  $variables['button'] = '<button class="btn btn-default" id="edit-submit-search" name="" value="Search" type="submit">'.t('Search').'</button>';
}