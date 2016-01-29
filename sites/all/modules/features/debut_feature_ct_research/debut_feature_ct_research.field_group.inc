<?php
/**
 * @file
 * debut_feature_ct_research.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function debut_feature_ct_research_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|research|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Информация',
    'weight' => '0',
    'children' => array(
      0 => 'field_publication_date',
      1 => 'field_research_text',
      2 => 'field_research_publication_link',
      3 => 'field_research_publication_text',
      4 => 'field_research_author',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|node|research|form'] = $field_group;

  return $export;
}
