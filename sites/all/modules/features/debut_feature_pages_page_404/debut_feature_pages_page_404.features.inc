<?php
/**
 * @file
 * debut_feature_pages_page_404.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function debut_feature_pages_page_404_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
