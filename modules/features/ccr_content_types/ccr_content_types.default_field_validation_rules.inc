<?php
/**
 * @file
 * ccr_content_types.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function ccr_content_types_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'All module names are unique';
  $rule->name = 'all_modules_unique_module_name';
  $rule->field_name = 'field_module_name';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'module';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Module name must be unique!';
  $export['all_modules_unique_module_name'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Sandbox key';
  $rule->name = 'sandbox_key';
  $rule->field_name = 'field_url';
  $rule->col = 'url';
  $rule->entity_type = 'node';
  $rule->bundle = 'sandbox';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'entity',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'URL must be unique.';
  $export['sandbox_key'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Unique module name';
  $rule->name = 'unique_module_name';
  $rule->field_name = 'field_module_name';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'payment_module';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Module name must be unique!';
  $export['unique_module_name'] = $rule;

  return $export;
}
