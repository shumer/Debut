<?php
/**
 * @file
 * debut_feature_ct_debut_ibook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function debut_feature_ct_debut_ibook_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function debut_feature_ct_debut_ibook_node_info() {
  $items = array(
    'ibooks' => array(
      'name' => t('iКнига'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}