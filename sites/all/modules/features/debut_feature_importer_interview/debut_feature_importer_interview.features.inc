<?php
/**
 * @file
 * debut_feature_importer_interview.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function debut_feature_importer_interview_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
