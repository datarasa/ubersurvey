<?php
/**
 * @file
 * ubersurvey_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ubersurvey_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_create-survey:node/add/qform.
  $menu_links['main-menu_create-survey:node/add/qform'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/qform',
    'router_path' => 'node/add/qform',
    'link_title' => 'Create Survey',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_create-survey:node/add/qform',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:home.
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_my-surveys:my-surveys.
  $menu_links['main-menu_my-surveys:my-surveys'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-surveys',
    'router_path' => 'my-surveys',
    'link_title' => 'My Surveys',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_my-surveys:my-surveys',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Create Survey');
  t('Home');
  t('My Surveys');

  return $menu_links;
}
