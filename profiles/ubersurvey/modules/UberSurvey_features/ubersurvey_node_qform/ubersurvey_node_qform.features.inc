<?php
/**
 * @file
 * ubersurvey_node_qform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ubersurvey_node_qform_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ubersurvey_node_qform_node_info() {
  $items = array(
    'qform' => array(
      'name' => t('Survey'),
      'base' => 'qforms',
      'description' => t('It allows site users to create custom forms (like surveys) for which other site users can submit data.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
