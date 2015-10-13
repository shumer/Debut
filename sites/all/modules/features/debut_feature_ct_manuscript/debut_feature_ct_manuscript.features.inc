<?php
/**
 * @file
 * debut_feature_ct_manuscript.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function debut_feature_ct_manuscript_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function debut_feature_ct_manuscript_node_info() {
  $items = array(
    'manuscript' => array(
      'name' => t('Рукопись'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Имя'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
