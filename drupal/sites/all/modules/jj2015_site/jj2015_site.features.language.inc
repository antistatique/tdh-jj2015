<?php
/**
 * @file
 * jj2015_site.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function jj2015_site_locale_default_languages() {
  $languages = array();

  // Exported language: de.
  $languages['de'] = array(
    'language' => 'de',
    'name' => 'DE',
    'native' => 'DE',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'de',
    'weight' => -8,
  );
  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'EN',
    'native' => 'EN',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -9,
  );
  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'ES',
    'native' => 'ES',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es',
    'weight' => -7,
  );
  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'FR',
    'native' => 'FR',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => -10,
  );
  return $languages;
}
