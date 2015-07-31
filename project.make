api = 2
core = 7.x

; Drupal core.
projects[drupal][type] = core
projects[drupal][version] = 7.38
projects[drupal][patch][] = "https://drupal.org/files/issues/install-redirect-on-empty-database-728702-36.patch"

; Drush make allows a default sub directory for all contributed projects.
defaults[projects][subdir] = contrib

; Platform indicator module.
projects[platform][version] = 1.3

; Prereqs
projects[job_scheduler][version] = 2.0-alpha3
projects[entity][version] = 1.6
projects[jquery_update][version] = 2.6
projects[date][version] = 2.8
projects[field_tools][version] = 1.0-alpha8
projects[field_validation][version] = 2.6
projects[token][version] = 1.6
projects[feeds_tamper_string2id][version] = 1.0
projects[entityreference][version] = 1.1

; Data I/O
projects[restws][version] = 2.4

projects[feeds][version] = 2.0-beta1
projects[feeds_tamper][version] = 1.1
projects[feeds_ex][version] = 1.0-beta2

; Jsonpath for Feeds
libraries[feeds_jsonpath_parser][download][type] = get
libraries[feeds_jsonpath_parser][download][url] = http://jsonpath.googlecode.com/files/jsonpath-0.8.1.php
libraries[feeds_jsonpath_parser][destination] = modules/contrib
libraries[feeds_jsonpath_parser][install_path] = sites/allows

; Field types
projects[link][version] = 1.3

; Views
projects[views][version] = 3.11
projects[ctools][version] = 1.7

; Misc
projects[bootstrap][version] = 3.x-dev
projects[css_injector][version] = 1.10
projects[block_class][version] = 2.1

; Features
projects[features][version] = 2.6
projects[features_extra][version] = 1.0-beta1

; Admin
projects[module_filter][version] = 2.0
projects[admin_menu][version] = 3.0-rc5
projects[adminimal_theme][version] = 1.21
projects[banish][version] = 1.x-dev

; Reporting / Charts
projects[views_date_format_sql][version] = 3.1
projects[charts][version] = 2.0-rc1
