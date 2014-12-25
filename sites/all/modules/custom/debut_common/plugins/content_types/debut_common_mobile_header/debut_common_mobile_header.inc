<?php

/**
 * @file
 * Header CCT.
 */
/**
 * Implements hook_ctools_content_types().
 */
$plugin = array(
  'title' => t('Debut Common: mobile header'),
  'description' => t('Debut Common: mobile header'),
  'content_types' => 'debut_common_mobile_header',
  'single' => TRUE,
  'render callback' => 'debut_common_mobile_header_content_type_render',
  'edit form' => 'debut_common_mobile_header_content_type_edit_form',
  'admin title' => 'debut_common_mobile_header_content_type_admin_title',
  'hook theme' => 'debut_common_mobile_header_content_type_theme',
  'category' => t('Debut'),
  'icon' => NULL,
  'render last' => TRUE,
  'no title override' => TRUE,
 );

/**
 * Implements hook_content_type_render().
 */
function debut_common_mobile_header_content_type_render($subtype, $conf, $panel_args, $context) {
  global $base_url, $user;

  $block = new stdClass();
  $_html = array();
  $_data = array();

  // Theme main menu.
  $main_menu = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
  $_html['main_menu'] = drupal_render($main_menu);

  // Logo.
  $_html['logo_link'] = url('', array('absolute' => TRUE));

  // Only theme status messsages if we not behind varnish.
  $_html['messages'] = qtools_varnish_enabled()
    ? '<div class="messages-target"></div>'
    : theme('status_messages');

  // Theme path for future use.
  $theme_path = drupal_get_path('theme', 'debut_mobile');
  $_html['banner'] = theme('image', array(
    'path' => $theme_path . '/html/images/bgs/header.png',
  ));

  // Combine values.
  $data = array(
    '_html' => $_html,
    '_data' => $_data,
  );

  $block->content = theme('debut_common_mobile_header', $data);
  return $block;
}

/**
 * Implements hook_content_type_edit_form().
 */
function debut_common_mobile_header_content_type_edit_form($form, &$form_state) {

  $conf = $form_state['conf'];
  $form['conf'] = array(
    '#type' => 'fieldset',
    '#title' => t('Configuration'),
    '#tree' => TRUE,
  );

  return $form;
}

/**
 * Implements hook_edit_form_submit().
 */
function debut_common_mobile_header_content_type_edit_form_submit(&$form, &$form_state) {
  $form_state['conf'] = $form_state['values']['conf'];
}

/**
 * Admin title callback.
 */
function debut_common_mobile_header_content_type_admin_title($subtype, $conf, $context) {
  return t('Debut Common: mobile header');
}

/**
 * Implements hook_content_type_theme().
 */
function debut_common_mobile_header_content_type_theme(&$theme, $plugin) {
  $theme['debut_common_mobile_header'] = array(
    'path' => $plugin['path'],
    'template' => 'debut-common-mobile-header',
    'variables' => array('params' => array()),
  );
}