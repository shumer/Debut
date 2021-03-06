<?php
/**
 * @file
 *
 * CCT plugin file.
 */
$plugin = array(
  'title' => t('Debut Common: Facebook plugin block'),
  'description' => t('Debut Common: Facebook plugin block'),
  'content_types' => 'debut_common_facebook_plugin',
  'single' => TRUE,
  'render callback' => 'debut_common_facebook_plugin_content_type_render',
  'edit form' => 'debut_common_facebook_plugin_content_type_edit_form',
  'admin title' => 'debut_common_facebook_plugin_content_type_admin_title',
  'hook theme' => 'debut_common_facebook_plugin_content_type_theme',
  'category' => t('Debut'),
  'icon' => NULL,
  'no title override' => TRUE,
);

function debut_common_facebook_plugin_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->title = NULL;
  $data = array();
  $_data = array();
  $_html = array();

  // Template has iframe, which was generated by https://developers.facebook.com/docs/plugins/like-box-for-pages?locale=ru_RU
  
  $data['_data'] = $_data;
  $data['_html'] = $_html;

  $block->content = theme('debut_common_facebook_plugin', $data);
  return $block;
}

/**
 * Returns an edit form for the custom type.
 *
 * This is required to get access to the context.
 */
function debut_common_facebook_plugin_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['conf'] = array(
    '#tree' => TRUE,
  );
  return $form;
}

/**
 * Presubmit hndler.
 *
 * This is required to get access to the context.
 */
function debut_common_facebook_plugin_content_type_edit_form_submit(&$form, &$form_state) {
  $form_state['conf'] = $form_state['values']['conf'];
}

/**
 * Admin title callback.
 */
function debut_common_facebook_plugin_content_type_admin_title($subtype, $conf, $context) {
  return t('Debut Common: Facebook plugin block');
}

/**
 * Implements hook_content_type_theme().
 */
function debut_common_facebook_plugin_content_type_theme(&$theme, $plugin) {
  $theme['debut_common_facebook_plugin'] = array(
    'path'      => $plugin['path'],
    'template'  => 'debut-common-facebook-plugin',
    'variables' => array('params' => array()),
  );
}
