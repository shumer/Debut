<?php
/**
 * @file
 * debut_feature_ct_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function debut_feature_ct_video_ctools_plugin_api($module = NULL, $api = NULL) {
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
function debut_feature_ct_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Видео'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
