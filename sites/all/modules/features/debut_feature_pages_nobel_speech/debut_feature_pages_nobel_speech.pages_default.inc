<?php
/**
 * @file
 * debut_feature_pages_nobel_speech.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function debut_feature_pages_nobel_speech_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nobel_speech';
  $page->task = 'page';
  $page->admin_title = 'Нобелевские речи';
  $page->admin_description = '';
  $page->path = 'nobel_speech';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nobel_speech_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'nobel_speech';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Панель',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'debut_content_3col_toped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'content_pre' => NULL,
      'content_left' => NULL,
      'content_center' => NULL,
      'content_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'af99141a-1722-4d79-93c5-1c5ce83afe89';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7359132c-b573-4fd3-9dc6-339e04237084';
    $pane->panel = 'content_left';
    $pane->type = 'debut_common_menu';
    $pane->subtype = 'debut_common_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'browser_menu' => 'main-menu',
      'context' => array(
        0 => 'empty',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7359132c-b573-4fd3-9dc6-339e04237084';
    $display->content['new-7359132c-b573-4fd3-9dc6-339e04237084'] = $pane;
    $display->panels['content_left'][0] = 'new-7359132c-b573-4fd3-9dc6-339e04237084';
    $pane = new stdClass();
    $pane->pid = 'new-af05d23e-eac6-40f9-a4a7-78193d821a5c';
    $pane->panel = 'content_left';
    $pane->type = 'debut_common_site_calendar';
    $pane->subtype = 'debut_common_site_calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'ИЗМЕНЕНИЯ НА САЙТЕ',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'af05d23e-eac6-40f9-a4a7-78193d821a5c';
    $display->content['new-af05d23e-eac6-40f9-a4a7-78193d821a5c'] = $pane;
    $display->panels['content_left'][1] = 'new-af05d23e-eac6-40f9-a4a7-78193d821a5c';
    $pane = new stdClass();
    $pane->pid = 'new-fc4b1cb1-e49c-4ca3-b13b-57bebf7d21cc';
    $pane->panel = 'content_left';
    $pane->type = 'debut_common_contact_us';
    $pane->subtype = 'debut_common_contact_us';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'СВЯЗАТЬСЯ С НАМИ',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fc4b1cb1-e49c-4ca3-b13b-57bebf7d21cc';
    $display->content['new-fc4b1cb1-e49c-4ca3-b13b-57bebf7d21cc'] = $pane;
    $display->panels['content_left'][2] = 'new-fc4b1cb1-e49c-4ca3-b13b-57bebf7d21cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nobel_speech'] = $page;

  return $pages;

}