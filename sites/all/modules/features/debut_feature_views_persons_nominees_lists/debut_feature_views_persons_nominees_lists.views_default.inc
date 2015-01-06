<?php
/**
 * @file
 * debut_feature_views_persons_nominees_lists.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function debut_feature_views_persons_nominees_lists_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'debut_view_persons_nominees_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Debut: View Persons nominees list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_person_awards',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'listing';
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Поле: Содержимое: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Контекстный фильтр: Содержимое: Prizes (field_person_awards) */
  $handler->display->display_options['arguments']['field_person_awards_target_id']['id'] = 'field_person_awards_target_id';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['table'] = 'field_data_field_person_awards';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['field'] = 'field_person_awards_target_id';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['summary_options']['items_per_page'] = '25';
  /* Критерий фильтра: Содержимое: Опубликован или админ */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Критерий фильтра: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'debut_prize_person' => 'debut_prize_person',
  );
  $translatables['debut_view_persons_nominees_list'] = array(
    t('Master'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Select any filter and click on Apply to see results'),
    t('Заголовок'),
    t('Nid'),
    t('Все'),
  );
  $export['debut_view_persons_nominees_list'] = $view;

  $view = new view();
  $view->name = 'debut_view_persons_nominees_list_teaser';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Debut: View Persons nominees list (teaser)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Поле: Содержимое: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Контекстный фильтр: Содержимое: Prizes (field_person_awards) */
  $handler->display->display_options['arguments']['field_person_awards_target_id']['id'] = 'field_person_awards_target_id';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['table'] = 'field_data_field_person_awards';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['field'] = 'field_person_awards_target_id';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_awards_target_id']['summary_options']['items_per_page'] = '25';
  /* Критерий фильтра: Содержимое: Опубликован или админ */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Критерий фильтра: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'debut_prize_person' => 'debut_prize_person',
  );
  $translatables['debut_view_persons_nominees_list_teaser'] = array(
    t('Master'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Select any filter and click on Apply to see results'),
    t('Заголовок'),
    t('Nid'),
    t('Все'),
  );
  $export['debut_view_persons_nominees_list_teaser'] = $view;

  return $export;
}