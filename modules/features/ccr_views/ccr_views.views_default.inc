<?php
/**
 * @file
 * ccr_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ccr_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_modules';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Modules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Commerce Modules';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_url' => 'field_url',
    'title' => 'title',
    'field_downloads' => 'field_downloads',
    'field_last_release' => 'field_last_release',
    'field_latest_version' => 'field_latest_version',
    'field_open_bugs' => 'field_open_bugs',
    'field_open_issues' => 'field_open_issues',
    'field_module_name' => 'field_module_name',
    'field_issues_created_last_month' => 'field_issues_created_last_month',
    'field_issues_closed_last_month' => 'field_issues_closed_last_month',
    'field_issues_changed_last_month' => 'field_issues_changed_last_month',
    'field_issue_created_last_6_month' => 'field_issue_created_last_6_month',
    'field_issue_closed_last_6_months' => 'field_issue_closed_last_6_months',
    'field_issue_changed_last_6_month' => 'field_issue_changed_last_6_month',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_downloads' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_release' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_latest_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_bugs' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_issues' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_module_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issues_created_last_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issues_closed_last_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issues_changed_last_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_created_last_6_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_closed_last_6_months' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_changed_last_6_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['caption'] = 'List of all modules in the commerce ecosystem within the Drupal Community.';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Informational area';
  $handler->display->display_options['header']['area']['content'] = '<div class="alert alert-info">
<p>This list shows all of the modules that have a <code>commerce_</code> or <code>dc_</code> prefix sorted by the number of installs. All data from this list is pulled using <a href="https://www.drupal.org/api">Drupal.org\'s API</a>.</p>
</div>

Entries that do not have any downloads are either empty repositories or have no tagged releases.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'View summary';
  $handler->display->display_options['footer']['result']['content'] = 'Displaying @total total modules.';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Downloads */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Last release */
  $handler->display->display_options['fields']['field_last_release']['id'] = 'field_last_release';
  $handler->display->display_options['fields']['field_last_release']['table'] = 'field_data_field_last_release';
  $handler->display->display_options['fields']['field_last_release']['field'] = 'field_last_release';
  $handler->display->display_options['fields']['field_last_release']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_last_release']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Latest version */
  $handler->display->display_options['fields']['field_latest_version']['id'] = 'field_latest_version';
  $handler->display->display_options['fields']['field_latest_version']['table'] = 'field_data_field_latest_version';
  $handler->display->display_options['fields']['field_latest_version']['field'] = 'field_latest_version';
  /* Field: Content: Open bugs */
  $handler->display->display_options['fields']['field_open_bugs']['id'] = 'field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['table'] = 'field_data_field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['field'] = 'field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Open issues */
  $handler->display->display_options['fields']['field_open_issues']['id'] = 'field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['table'] = 'field_data_field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['field'] = 'field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Module name */
  $handler->display->display_options['fields']['field_module_name']['id'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['table'] = 'field_data_field_module_name';
  $handler->display->display_options['fields']['field_module_name']['field'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['exclude'] = TRUE;
  /* Field: Content: Issues created last month */
  $handler->display->display_options['fields']['field_issues_created_last_month']['id'] = 'field_issues_created_last_month';
  $handler->display->display_options['fields']['field_issues_created_last_month']['table'] = 'field_data_field_issues_created_last_month';
  $handler->display->display_options['fields']['field_issues_created_last_month']['field'] = 'field_issues_created_last_month';
  $handler->display->display_options['fields']['field_issues_created_last_month']['label'] = '1M+';
  $handler->display->display_options['fields']['field_issues_created_last_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issues_created_last_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issues closed last month */
  $handler->display->display_options['fields']['field_issues_closed_last_month']['id'] = 'field_issues_closed_last_month';
  $handler->display->display_options['fields']['field_issues_closed_last_month']['table'] = 'field_data_field_issues_closed_last_month';
  $handler->display->display_options['fields']['field_issues_closed_last_month']['field'] = 'field_issues_closed_last_month';
  $handler->display->display_options['fields']['field_issues_closed_last_month']['label'] = '1M-';
  $handler->display->display_options['fields']['field_issues_closed_last_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issues_closed_last_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issues changed last month */
  $handler->display->display_options['fields']['field_issues_changed_last_month']['id'] = 'field_issues_changed_last_month';
  $handler->display->display_options['fields']['field_issues_changed_last_month']['table'] = 'field_data_field_issues_changed_last_month';
  $handler->display->display_options['fields']['field_issues_changed_last_month']['field'] = 'field_issues_changed_last_month';
  $handler->display->display_options['fields']['field_issues_changed_last_month']['label'] = '1M~';
  $handler->display->display_options['fields']['field_issues_changed_last_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issues_changed_last_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issue created last 6 months */
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['id'] = 'field_issue_created_last_6_month';
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['table'] = 'field_data_field_issue_created_last_6_month';
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['field'] = 'field_issue_created_last_6_month';
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['label'] = '6M+';
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issue closed last 6 months */
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['id'] = 'field_issue_closed_last_6_months';
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['table'] = 'field_data_field_issue_closed_last_6_months';
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['field'] = 'field_issue_closed_last_6_months';
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['label'] = '6M-';
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issue changed last 6 months */
  $handler->display->display_options['fields']['field_issue_changed_last_6_month']['id'] = 'field_issue_changed_last_6_month';
  $handler->display->display_options['fields']['field_issue_changed_last_6_month']['table'] = 'field_data_field_issue_changed_last_6_month';
  $handler->display->display_options['fields']['field_issue_changed_last_6_month']['field'] = 'field_issue_changed_last_6_month';
  $handler->display->display_options['fields']['field_issue_changed_last_6_month']['label'] = '6M~';
  $handler->display->display_options['fields']['field_issue_changed_last_6_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_changed_last_6_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Other Links';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="http://contribkanban.com/#/board/[field_module_name]">Kanban</a>';
  /* Sort criterion: Content: Downloads (field_downloads) */
  $handler->display->display_options['sorts']['field_downloads_value']['id'] = 'field_downloads_value';
  $handler->display->display_options['sorts']['field_downloads_value']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['sorts']['field_downloads_value']['field'] = 'field_downloads_value';
  $handler->display->display_options['sorts']['field_downloads_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'module' => 'module',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-modules';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Modules';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['all_modules'] = $view;

  $view = new view();
  $view->name = 'module_name_contextual_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Module name contextual filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Module name contextual filter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Module name */
  $handler->display->display_options['fields']['field_module_name']['id'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['table'] = 'field_data_field_module_name';
  $handler->display->display_options['fields']['field_module_name']['field'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['label'] = '';
  $handler->display->display_options['fields']['field_module_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Module name (field_module_name) */
  $handler->display->display_options['sorts']['field_module_name_value']['id'] = 'field_module_name_value';
  $handler->display->display_options['sorts']['field_module_name_value']['table'] = 'field_data_field_module_name';
  $handler->display->display_options['sorts']['field_module_name_value']['field'] = 'field_module_name_value';
  /* Contextual filter: Content: Module name (field_module_name) */
  $handler->display->display_options['arguments']['field_module_name_value']['id'] = 'field_module_name_value';
  $handler->display->display_options['arguments']['field_module_name_value']['table'] = 'field_data_field_module_name';
  $handler->display->display_options['arguments']['field_module_name_value']['field'] = 'field_module_name_value';
  $handler->display->display_options['arguments']['field_module_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_module_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_module_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_module_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_module_name_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'module' => 'module',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'module-name-contextual-filter';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Whateves';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_module_name' => 'field_module_name',
    'title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['module_name_contextual_filter'] = $view;

  $view = new view();
  $view->name = 'payment_modules';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Payment Modules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Payment Modules';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_url' => 'field_url',
    'title' => 'title',
    'field_downloads' => 'field_downloads',
    'field_last_release' => 'field_last_release',
    'field_latest_version' => 'field_latest_version',
    'field_open_bugs' => 'field_open_bugs',
    'field_open_issues' => 'field_open_issues',
    'field_card_on_file_support' => 'field_card_on_file_support',
    'field_offsite_payment' => 'field_offsite_payment',
    'field_terminal_support' => 'field_terminal_support',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_downloads' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_release' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_latest_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_bugs' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_issues' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_card_on_file_support' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_offsite_payment' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_terminal_support' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Downloads */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Last release */
  $handler->display->display_options['fields']['field_last_release']['id'] = 'field_last_release';
  $handler->display->display_options['fields']['field_last_release']['table'] = 'field_data_field_last_release';
  $handler->display->display_options['fields']['field_last_release']['field'] = 'field_last_release';
  $handler->display->display_options['fields']['field_last_release']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_last_release']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Latest version */
  $handler->display->display_options['fields']['field_latest_version']['id'] = 'field_latest_version';
  $handler->display->display_options['fields']['field_latest_version']['table'] = 'field_data_field_latest_version';
  $handler->display->display_options['fields']['field_latest_version']['field'] = 'field_latest_version';
  /* Field: Content: Open bugs */
  $handler->display->display_options['fields']['field_open_bugs']['id'] = 'field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['table'] = 'field_data_field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['field'] = 'field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Open issues */
  $handler->display->display_options['fields']['field_open_issues']['id'] = 'field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['table'] = 'field_data_field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['field'] = 'field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Card on file support */
  $handler->display->display_options['fields']['field_card_on_file_support']['id'] = 'field_card_on_file_support';
  $handler->display->display_options['fields']['field_card_on_file_support']['table'] = 'field_data_field_card_on_file_support';
  $handler->display->display_options['fields']['field_card_on_file_support']['field'] = 'field_card_on_file_support';
  /* Field: Content: Offsite payment */
  $handler->display->display_options['fields']['field_offsite_payment']['id'] = 'field_offsite_payment';
  $handler->display->display_options['fields']['field_offsite_payment']['table'] = 'field_data_field_offsite_payment';
  $handler->display->display_options['fields']['field_offsite_payment']['field'] = 'field_offsite_payment';
  /* Field: Content: Terminal support */
  $handler->display->display_options['fields']['field_terminal_support']['id'] = 'field_terminal_support';
  $handler->display->display_options['fields']['field_terminal_support']['table'] = 'field_data_field_terminal_support';
  $handler->display->display_options['fields']['field_terminal_support']['field'] = 'field_terminal_support';
  /* Field: Content: Module name */
  $handler->display->display_options['fields']['field_module_name']['id'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['table'] = 'field_data_field_module_name';
  $handler->display->display_options['fields']['field_module_name']['field'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Other Links';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="http://contribkanban.com/#/board/[field_module_name]">Kanban</a>';
  /* Sort criterion: Content: Downloads (field_downloads) */
  $handler->display->display_options['sorts']['field_downloads_value']['id'] = 'field_downloads_value';
  $handler->display->display_options['sorts']['field_downloads_value']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['sorts']['field_downloads_value']['field'] = 'field_downloads_value';
  $handler->display->display_options['sorts']['field_downloads_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'payment_module' => 'payment_module',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'payment-modules';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Payment Modules';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['payment_modules'] = $view;

  $view = new view();
  $view->name = 'sandboxes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sandboxes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sandboxes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_url' => 'field_url',
    'title' => 'title',
    'field_author' => 'field_author',
    'field_maintenance_status' => 'field_maintenance_status',
    'field_development_status' => 'field_development_status',
    'field_last_commit' => 'field_last_commit',
    'field_first_commit' => 'field_first_commit',
    'field_total_commits' => 'field_total_commits',
    'field_open_issues' => 'field_open_issues',
    'field_open_bugs' => 'field_open_bugs',
    'field_issue_closed_last_6_months' => 'field_issue_closed_last_6_months',
    'field_issue_created_last_6_month' => 'field_issue_created_last_6_month',
    'field_issues_closed_last_month' => 'field_issues_closed_last_month',
    'field_issues_created_last_month' => 'field_issues_created_last_month',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_commit';
  $handler->display->display_options['style_options']['info'] = array(
    'field_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maintenance_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_development_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_commit' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_commit' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_commits' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_issues' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_bugs' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_closed_last_6_months' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issue_created_last_6_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issues_closed_last_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_issues_created_last_month' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['path'] = '[field_url-url]';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  /* Field: Content: Maintenance status */
  $handler->display->display_options['fields']['field_maintenance_status']['id'] = 'field_maintenance_status';
  $handler->display->display_options['fields']['field_maintenance_status']['table'] = 'field_data_field_maintenance_status';
  $handler->display->display_options['fields']['field_maintenance_status']['field'] = 'field_maintenance_status';
  /* Field: Content: Development status */
  $handler->display->display_options['fields']['field_development_status']['id'] = 'field_development_status';
  $handler->display->display_options['fields']['field_development_status']['table'] = 'field_data_field_development_status';
  $handler->display->display_options['fields']['field_development_status']['field'] = 'field_development_status';
  /* Field: Content: Last commit */
  $handler->display->display_options['fields']['field_last_commit']['id'] = 'field_last_commit';
  $handler->display->display_options['fields']['field_last_commit']['table'] = 'field_data_field_last_commit';
  $handler->display->display_options['fields']['field_last_commit']['field'] = 'field_last_commit';
  $handler->display->display_options['fields']['field_last_commit']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_last_commit']['settings'] = array(
    'interval' => '1',
    'interval_display' => 'time ago',
  );
  /* Field: Content: First commit */
  $handler->display->display_options['fields']['field_first_commit']['id'] = 'field_first_commit';
  $handler->display->display_options['fields']['field_first_commit']['table'] = 'field_data_field_first_commit';
  $handler->display->display_options['fields']['field_first_commit']['field'] = 'field_first_commit';
  $handler->display->display_options['fields']['field_first_commit']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_first_commit']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Total commits */
  $handler->display->display_options['fields']['field_total_commits']['id'] = 'field_total_commits';
  $handler->display->display_options['fields']['field_total_commits']['table'] = 'field_data_field_total_commits';
  $handler->display->display_options['fields']['field_total_commits']['field'] = 'field_total_commits';
  $handler->display->display_options['fields']['field_total_commits']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Open issues */
  $handler->display->display_options['fields']['field_open_issues']['id'] = 'field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['table'] = 'field_data_field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['field'] = 'field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Open bugs */
  $handler->display->display_options['fields']['field_open_bugs']['id'] = 'field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['table'] = 'field_data_field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['field'] = 'field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issue closed last 6 months */
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['id'] = 'field_issue_closed_last_6_months';
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['table'] = 'field_data_field_issue_closed_last_6_months';
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['field'] = 'field_issue_closed_last_6_months';
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['label'] = '6M-';
  $handler->display->display_options['fields']['field_issue_closed_last_6_months']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issue created last 6 months */
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['id'] = 'field_issue_created_last_6_month';
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['table'] = 'field_data_field_issue_created_last_6_month';
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['field'] = 'field_issue_created_last_6_month';
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['label'] = '6M+';
  $handler->display->display_options['fields']['field_issue_created_last_6_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issues closed last month */
  $handler->display->display_options['fields']['field_issues_closed_last_month']['id'] = 'field_issues_closed_last_month';
  $handler->display->display_options['fields']['field_issues_closed_last_month']['table'] = 'field_data_field_issues_closed_last_month';
  $handler->display->display_options['fields']['field_issues_closed_last_month']['field'] = 'field_issues_closed_last_month';
  $handler->display->display_options['fields']['field_issues_closed_last_month']['label'] = '1M-';
  $handler->display->display_options['fields']['field_issues_closed_last_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Issues created last month */
  $handler->display->display_options['fields']['field_issues_created_last_month']['id'] = 'field_issues_created_last_month';
  $handler->display->display_options['fields']['field_issues_created_last_month']['table'] = 'field_data_field_issues_created_last_month';
  $handler->display->display_options['fields']['field_issues_created_last_month']['field'] = 'field_issues_created_last_month';
  $handler->display->display_options['fields']['field_issues_created_last_month']['label'] = '1M+';
  $handler->display->display_options['fields']['field_issues_created_last_month']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sandbox' => 'sandbox',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Author (field_author) */
  $handler->display->display_options['filters']['field_author_value']['id'] = 'field_author_value';
  $handler->display->display_options['filters']['field_author_value']['table'] = 'field_data_field_author';
  $handler->display->display_options['filters']['field_author_value']['field'] = 'field_author_value';
  $handler->display->display_options['filters']['field_author_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_author_value']['group'] = 1;
  $handler->display->display_options['filters']['field_author_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_value']['expose']['operator_id'] = 'field_author_value_op';
  $handler->display->display_options['filters']['field_author_value']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_author_value']['expose']['operator'] = 'field_author_value_op';
  $handler->display->display_options['filters']['field_author_value']['expose']['identifier'] = 'field_author_value';
  $handler->display->display_options['filters']['field_author_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_author_value']['group_info']['label'] = 'Author (field_author)';
  $handler->display->display_options['filters']['field_author_value']['group_info']['identifier'] = 'field_author_value';
  $handler->display->display_options['filters']['field_author_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_author_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Development status (field_development_status) */
  $handler->display->display_options['filters']['field_development_status_value']['id'] = 'field_development_status_value';
  $handler->display->display_options['filters']['field_development_status_value']['table'] = 'field_data_field_development_status';
  $handler->display->display_options['filters']['field_development_status_value']['field'] = 'field_development_status_value';
  $handler->display->display_options['filters']['field_development_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_development_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_development_status_value']['expose']['operator_id'] = 'field_development_status_value_op';
  $handler->display->display_options['filters']['field_development_status_value']['expose']['label'] = 'Development status';
  $handler->display->display_options['filters']['field_development_status_value']['expose']['operator'] = 'field_development_status_value_op';
  $handler->display->display_options['filters']['field_development_status_value']['expose']['identifier'] = 'field_development_status_value';
  $handler->display->display_options['filters']['field_development_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Maintenance status (field_maintenance_status) */
  $handler->display->display_options['filters']['field_maintenance_status_value']['id'] = 'field_maintenance_status_value';
  $handler->display->display_options['filters']['field_maintenance_status_value']['table'] = 'field_data_field_maintenance_status';
  $handler->display->display_options['filters']['field_maintenance_status_value']['field'] = 'field_maintenance_status_value';
  $handler->display->display_options['filters']['field_maintenance_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_maintenance_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_maintenance_status_value']['expose']['operator_id'] = 'field_maintenance_status_value_op';
  $handler->display->display_options['filters']['field_maintenance_status_value']['expose']['label'] = 'Maintenance status';
  $handler->display->display_options['filters']['field_maintenance_status_value']['expose']['operator'] = 'field_maintenance_status_value_op';
  $handler->display->display_options['filters']['field_maintenance_status_value']['expose']['identifier'] = 'field_maintenance_status_value';
  $handler->display->display_options['filters']['field_maintenance_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sandboxes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sandboxes';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['sandboxes'] = $view;

  $view = new view();
  $view->name = 'shipping_modules';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Shipping Modules';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shipping Modules';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_url' => 'field_url',
    'title' => 'title',
    'field_downloads' => 'field_downloads',
    'field_last_release' => 'field_last_release',
    'field_latest_version' => 'field_latest_version',
    'field_open_bugs' => 'field_open_bugs',
    'field_open_issues' => 'field_open_issues',
    'field_module_name' => 'field_module_name',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_downloads' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_release' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_latest_version' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_bugs' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_open_issues' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_module_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_module_reference_target_id']['id'] = 'field_module_reference_target_id';
  $handler->display->display_options['relationships']['field_module_reference_target_id']['table'] = 'field_data_field_module_reference';
  $handler->display->display_options['relationships']['field_module_reference_target_id']['field'] = 'field_module_reference_target_id';
  $handler->display->display_options['relationships']['field_module_reference_target_id']['required'] = TRUE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['relationship'] = 'field_module_reference_target_id';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_module_reference_target_id';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Downloads */
  $handler->display->display_options['fields']['field_downloads']['id'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['fields']['field_downloads']['field'] = 'field_downloads';
  $handler->display->display_options['fields']['field_downloads']['relationship'] = 'field_module_reference_target_id';
  $handler->display->display_options['fields']['field_downloads']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Last release */
  $handler->display->display_options['fields']['field_last_release']['id'] = 'field_last_release';
  $handler->display->display_options['fields']['field_last_release']['table'] = 'field_data_field_last_release';
  $handler->display->display_options['fields']['field_last_release']['field'] = 'field_last_release';
  $handler->display->display_options['fields']['field_last_release']['relationship'] = 'field_module_reference_target_id';
  $handler->display->display_options['fields']['field_last_release']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_last_release']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Content: Latest version */
  $handler->display->display_options['fields']['field_latest_version']['id'] = 'field_latest_version';
  $handler->display->display_options['fields']['field_latest_version']['table'] = 'field_data_field_latest_version';
  $handler->display->display_options['fields']['field_latest_version']['field'] = 'field_latest_version';
  $handler->display->display_options['fields']['field_latest_version']['relationship'] = 'field_module_reference_target_id';
  /* Field: Content: Open bugs */
  $handler->display->display_options['fields']['field_open_bugs']['id'] = 'field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['table'] = 'field_data_field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['field'] = 'field_open_bugs';
  $handler->display->display_options['fields']['field_open_bugs']['relationship'] = 'field_module_reference_target_id';
  $handler->display->display_options['fields']['field_open_bugs']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Open issues */
  $handler->display->display_options['fields']['field_open_issues']['id'] = 'field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['table'] = 'field_data_field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['field'] = 'field_open_issues';
  $handler->display->display_options['fields']['field_open_issues']['relationship'] = 'field_module_reference_target_id';
  $handler->display->display_options['fields']['field_open_issues']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Module name */
  $handler->display->display_options['fields']['field_module_name']['id'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['table'] = 'field_data_field_module_name';
  $handler->display->display_options['fields']['field_module_name']['field'] = 'field_module_name';
  $handler->display->display_options['fields']['field_module_name']['relationship'] = 'field_module_reference_target_id';
  $handler->display->display_options['fields']['field_module_name']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Other Links';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="http://contribkanban.com/#/board/[field_module_name]">Kanban</a>';
  /* Sort criterion: Content: Downloads (field_downloads) */
  $handler->display->display_options['sorts']['field_downloads_value']['id'] = 'field_downloads_value';
  $handler->display->display_options['sorts']['field_downloads_value']['table'] = 'field_data_field_downloads';
  $handler->display->display_options['sorts']['field_downloads_value']['field'] = 'field_downloads_value';
  $handler->display->display_options['sorts']['field_downloads_value']['relationship'] = 'field_module_reference_target_id';
  $handler->display->display_options['sorts']['field_downloads_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'shipping_module' => 'shipping_module',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'shipping-modules';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Shipping Modules';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['shipping_modules'] = $view;

  return $export;
}
