<?php
/**
 * @file
 * debut_feature_importer_debut_jury.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function debut_feature_importer_debut_jury_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}
