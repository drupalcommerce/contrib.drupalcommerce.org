<?php
/**
 * @file
 * ccr_feeds_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ccr_feeds_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'payment_module';
  $feeds_importer->config = array(
    'name' => 'Payment Module',
    'description' => 'Imports payment modules',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'module_name',
            'target' => 'field_module_name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'terminal',
            'target' => 'field_terminal_support',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'offsite',
            'target' => 'field_offsite_payment',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'offsite_redirect',
            'target' => 'field_offsite_redirect',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'cardonfile',
            'target' => 'field_card_on_file_support',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'last_release',
            'target' => 'field_last_release:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'current_version',
            'target' => 'field_latest_version',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'open_bugs',
            'target' => 'field_open_bugs',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'open_issues',
            'target' => 'field_open_issues',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'url',
            'target' => 'field_url:url',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'downloads',
            'target' => 'field_downloads',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'unpublish',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'payment_module',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['payment_module'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sandbox_importer';
  $feeds_importer->config = array(
    'name' => 'Sandbox Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'sandbox',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'url',
            'target' => 'field_url:url',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'open_issues',
            'target' => 'field_open_issues',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'open_bugs',
            'target' => 'field_open_bugs',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'last_6_open',
            'target' => 'field_issue_created_last_6_month',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'last_6_moved',
            'target' => 'field_issue_changed_last_6_month',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'last_6_closed',
            'target' => 'field_issue_closed_last_6_months',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'last_1_open',
            'target' => 'field_issues_created_last_month',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'last_1_moved',
            'target' => 'field_issues_changed_last_month',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'last_1_closed',
            'target' => 'field_issues_closed_last_month',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'maint_status',
            'target' => 'field_maintenance_status',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'dev_status',
            'target' => 'field_development_status',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'total_commits',
            'target' => 'field_total_commits',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
          ),
          13 => array(
            'source' => 'name',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'first_commit',
            'target' => 'field_first_commit:start',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'last_commit',
            'target' => 'field_last_commit:start',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'filtered_html',
        'author' => 0,
        'authorize' => 0,
        'update_non_existent' => 'unpublish',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['sandbox_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'shipping_importer';
  $feeds_importer->config = array(
    'name' => 'Shipping Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'module_name',
            'target' => 'entityreference:field_module_reference',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'unpublish',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'shipping_module',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['shipping_importer'] = $feeds_importer;

  return $export;
}
