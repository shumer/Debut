<?php
/**
 * @file
 * debut_feature_importer_press_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function debut_feature_importer_press_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'debut_press_importer';
  $feeds_importer->config = array(
    'name' => 'Debut press importer',
    'description' => 'Debut press importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          'pd_old' => 'pd_old',
          'default' => 0,
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'SELECT node_data_field_publication_date.field_publication_date_value AS node_data_field_publication_date_field_publication_date_valu,
node.type AS node_type,
node.nid AS nid,
node.vid AS node_vid,
node.changed AS node_changed,
node.created AS node_created,
node.title AS node_title,
node.language AS node_language,
node.status AS node_status,
node_revisions.body AS node_revisions_body,
node_revisions.format AS node_revisions_format,
node_data_field_press_author.field_press_author_value AS node_data_field_press_author_field_press_author_value,
node_data_field_press_author.field_press_publication_text_value AS node_data_field_press_author_field_press_publication_text_va,
node_data_field_press_author.field_press_publication_link_value AS node_data_field_press_author_field_press_publication_link_va
 FROM node node 
 LEFT JOIN content_field_publication_date node_data_field_publication_date ON node.vid = node_data_field_publication_date.vid
 LEFT JOIN node_revisions node_revisions ON node.vid = node_revisions.vid
 LEFT JOIN content_type_press_about_debut node_data_field_press_author ON node.vid = node_data_field_press_author.vid
 WHERE node.type in (\'press_about_debut\')
   ORDER BY node_data_field_publication_date_field_publication_date_valu ASC',
        'database' => 'pd_old',
        'mapping' => array(
          'nid' => 'nid',
          'node_changed' => 'node_changed',
          'node_created' => 'node_created',
          'node_data_field_press_author_field_press_author_value' => 'node_data_field_press_author_field_press_author_value',
          'node_data_field_press_author_field_press_publication_link_va' => 'node_data_field_press_author_field_press_publication_link_va',
          'node_data_field_press_author_field_press_publication_text_va' => 'node_data_field_press_author_field_press_publication_text_va',
          'node_data_field_publication_date_field_publication_date_valu' => 'node_data_field_publication_date_field_publication_date_valu',
          'node_language' => 'node_language',
          'node_revisions_body' => 'node_revisions_body',
          'node_revisions_format' => 'node_revisions_format',
          'node_status' => 'node_status',
          'node_title' => 'node_title',
          'node_type' => 'node_type',
          'node_vid' => 'node_vid',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'node_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'node_status',
            'target' => 'status',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'node_created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'node_data_field_press_author_field_press_author_value',
            'target' => 'field_press_author',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'node_data_field_press_author_field_press_publication_link_va',
            'target' => 'field_press_publication_link',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'node_data_field_press_author_field_press_publication_text_va',
            'target' => 'field_press_publication_text',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'node_revisions_body',
            'target' => 'field_press_text',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 1,
        'bundle' => 'press_about_debut',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['debut_press_importer'] = $feeds_importer;

  return $export;
}
