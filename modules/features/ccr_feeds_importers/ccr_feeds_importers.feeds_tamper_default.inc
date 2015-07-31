<?php
/**
 * @file
 * ccr_feeds_importers.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ccr_feeds_importers_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'shipping_importer-module_name-string2id';
  $feeds_tamper->importer = 'shipping_importer';
  $feeds_tamper->source = 'module_name';
  $feeds_tamper->plugin_id = 'string2id';
  $feeds_tamper->settings = array(
    'method' => 'views',
    'autocomplete' => array(
      'entity_type' => 'node',
      'field_name' => 'field_module_reference',
      'bundle_name' => NULL,
    ),
    'views' => array(
      'view' => 'module_name_contextual_filter:default',
    ),
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert string into entity ID';
  $export['shipping_importer-module_name-string2id'] = $feeds_tamper;

  return $export;
}
