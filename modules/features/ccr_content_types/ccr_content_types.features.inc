<?php
/**
 * @file
 * ccr_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ccr_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function ccr_content_types_node_info() {
  $items = array(
    'module' => array(
      'name' => t('Module'),
      'base' => 'node_content',
      'description' => t('This is a module that exists on Drupal.org. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'payment_module' => array(
      'name' => t('Payment Module'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'sandbox' => array(
      'name' => t('Sandbox'),
      'base' => 'node_content',
      'description' => t('This is a sandbox'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'shipping_module' => array(
      'name' => t('Shipping Module'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
