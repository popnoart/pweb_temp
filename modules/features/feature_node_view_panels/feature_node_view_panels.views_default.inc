<?php
/**
 * @file
 * feature_node_view_panels.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_node_view_panels_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'articles_in_the_same_tema';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Articles in the same tema';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Articles in the same tema';
  $handler->display->display_options['css_class'] = 'list-tiles';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tile vgrid-1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Content: Tema (field_tema) */
  $handler->display->display_options['relationships']['field_tema_nid']['id'] = 'field_tema_nid';
  $handler->display->display_options['relationships']['field_tema_nid']['table'] = 'field_data_field_tema';
  $handler->display->display_options['relationships']['field_tema_nid']['field'] = 'field_tema_nid';
  $handler->display->display_options['relationships']['field_tema_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_tema_nid']['delta'] = '-1';
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['relationship'] = 'field_tema_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'pweb_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Tema */
  $handler->display->display_options['fields']['field_tema']['id'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['table'] = 'field_data_field_tema';
  $handler->display->display_options['fields']['field_tema']['field'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tema']['element_label_type'] = 'em';
  $handler->display->display_options['fields']['field_tema']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_wrapper_class'] = 'label-theme text-secondary';
  $handler->display->display_options['fields']['field_tema']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tema']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tema']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tema']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tema']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title-tile tile-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Articles (field_articles:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_articles';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['relationship'] = 'field_tema_nid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid_1']['not'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
    'nid_1' => array(
      'type' => 'none',
      'context' => 'entity:node.nid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['articles_in_the_same_tema'] = array(
    t('Master'),
    t('Articles in the same tema'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_tema'),
    t('field_articles'),
    t('Tema'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['articles_in_the_same_tema'] = $view;

  $view = new view;
  $view->name = 'byline';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Byline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'block-content clearfix';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Content: Tema (field_tema) */
  $handler->display->display_options['relationships']['field_tema_nid']['id'] = 'field_tema_nid';
  $handler->display->display_options['relationships']['field_tema_nid']['table'] = 'field_data_field_tema';
  $handler->display->display_options['relationships']['field_tema_nid']['field'] = 'field_tema_nid';
  $handler->display->display_options['relationships']['field_tema_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_tema_nid']['delta'] = '-1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Content: Tema */
  $handler->display->display_options['fields']['field_tema']['id'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['table'] = 'field_data_field_tema';
  $handler->display->display_options['fields']['field_tema']['field'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['label'] = '';
  $handler->display->display_options['fields']['field_tema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tema']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['text'] = 'i temaet [field_tema]';
  $handler->display->display_options['fields']['field_tema']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tema']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tema']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_tema']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tema']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tema']['field_api_classes'] = 0;
  /* Field: Content: Municipality */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organization']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organization']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organization']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organization']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organization']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_organization']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_organization']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organization']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_organization']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_organization']['separator'] = ' ';
  $handler->display->display_options['fields']['field_organization']['field_api_classes'] = 0;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_organization_region']['id'] = 'field_organization_region';
  $handler->display->display_options['fields']['field_organization_region']['table'] = 'field_data_field_organization_region';
  $handler->display->display_options['fields']['field_organization_region']['field'] = 'field_organization_region';
  $handler->display->display_options['fields']['field_organization_region']['label'] = '';
  $handler->display->display_options['fields']['field_organization_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_region']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organization_region']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organization_region']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['element_type'] = '0';
  $handler->display->display_options['fields']['field_organization_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_region']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_organization_region']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organization_region']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_organization_region']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_organization_region']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organization_region']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_organization_region']['separator'] = ' ';
  $handler->display->display_options['fields']['field_organization_region']['field_api_classes'] = 0;
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_organization_other']['id'] = 'field_organization_other';
  $handler->display->display_options['fields']['field_organization_other']['table'] = 'field_data_field_organization_other';
  $handler->display->display_options['fields']['field_organization_other']['field'] = 'field_organization_other';
  $handler->display->display_options['fields']['field_organization_other']['label'] = '';
  $handler->display->display_options['fields']['field_organization_other']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_other']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organization_other']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organization_other']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['element_type'] = '0';
  $handler->display->display_options['fields']['field_organization_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_other']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_organization_other']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_organization_other']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_organization_other']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_organization_other']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_organization_other']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_organization_other']['separator'] = ' ';
  $handler->display->display_options['fields']['field_organization_other']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Af: [name] [field_tema]
[field_organization] [field_organization_region] [field_organization_other]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'text-secondary';
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['external'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['sharethis']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['sharethis']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['sharethis']['alter']['html'] = 0;
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['sharethis']['hide_empty'] = 0;
  $handler->display->display_options['fields']['sharethis']['empty_zero'] = 0;
  $handler->display->display_options['fields']['sharethis']['hide_alter_empty'] = 1;
  /* Field: Global: Print button */
  $handler->display->display_options['fields']['propeople_print']['id'] = 'propeople_print';
  $handler->display->display_options['fields']['propeople_print']['table'] = 'views';
  $handler->display->display_options['fields']['propeople_print']['field'] = 'propeople_print';
  $handler->display->display_options['fields']['propeople_print']['label'] = '';
  $handler->display->display_options['fields']['propeople_print']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['external'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['propeople_print']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['propeople_print']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['propeople_print']['alter']['html'] = 0;
  $handler->display->display_options['fields']['propeople_print']['element_type'] = '0';
  $handler->display->display_options['fields']['propeople_print']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['propeople_print']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['propeople_print']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['propeople_print']['hide_empty'] = 0;
  $handler->display->display_options['fields']['propeople_print']['empty_zero'] = 0;
  $handler->display->display_options['fields']['propeople_print']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['byline'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_tema'),
    t('author'),
    t('i temaet [field_tema]'),
    t('Af: [name] [field_tema]
[field_organization] [field_organization_region] [field_organization_other]'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['byline'] = $view;

  $view = new view;
  $view->name = 'related_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related articles';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tile vgrid-1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'terms';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 0;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'field_business_area' => 'field_business_area',
    'glossary' => 'glossary',
    'mountain_tags' => 'mountain_tags',
    'organization' => 'organization',
    'paramount_tags' => 'paramount_tags',
    'role' => 'role',
    'tags' => 'tags',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'pweb_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Tema */
  $handler->display->display_options['fields']['field_tema']['id'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['table'] = 'field_data_field_tema';
  $handler->display->display_options['fields']['field_tema']['field'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tema']['element_label_type'] = 'em';
  $handler->display->display_options['fields']['field_tema']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_wrapper_class'] = 'label-theme text-secondary';
  $handler->display->display_options['fields']['field_tema']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tema']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tema']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tema']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tema']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title-tile tile-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'field_business_area' => 'field_business_area',
    'glossary' => 'glossary',
    'mountain_tags' => 'mountain_tags',
    'organization' => 'organization',
    'paramount_tags' => 'paramount_tags',
    'role' => 'role',
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 1;
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
    'article' => 'article',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['machine_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Machine name';
  $handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['machine_name']['expose']['reduce'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'terms.tids',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['related_articles'] = array(
    t('Master'),
    t('Related articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('terms'),
    t('Tema'),
    t('All'),
    t('Machine name'),
    t('Content pane'),
    t('View panes'),
  );
  $export['related_articles'] = $view;

  $view = new view;
  $view->name = 'tags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tags';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'content-footer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'text-secondary';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = 'Emner';
  $handler->display->display_options['fields']['field_section']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['text'] = 'Emner:  [field_section] [field_mountain_tags]';
  $handler->display->display_options['fields']['field_section']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_section']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_section']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_section']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_section']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_section']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_section']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_section']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_section']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_section']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_section']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_section']['field_api_classes'] = 0;
  /* Field: Content: Mountain tags */
  $handler->display->display_options['fields']['field_mountain_tags']['id'] = 'field_mountain_tags';
  $handler->display->display_options['fields']['field_mountain_tags']['table'] = 'field_data_field_mountain_tags';
  $handler->display->display_options['fields']['field_mountain_tags']['field'] = 'field_mountain_tags';
  $handler->display->display_options['fields']['field_mountain_tags']['label'] = 'Emneord';
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_mountain_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_mountain_tags']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_mountain_tags']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mountain_tags']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_mountain_tags']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_mountain_tags']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_mountain_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_mountain_tags']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_mountain_tags']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Dato';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'news_date';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['tags'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Emner'),
    t('Emner:  [field_section] [field_mountain_tags]'),
    t('Emneord'),
    t('Dato'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['tags'] = $view;

  $view = new view;
  $view->name = 'tema_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tema articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tema articles';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tile vgrid-1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Content: Articles (field_articles) */
  $handler->display->display_options['relationships']['field_articles_nid']['id'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['table'] = 'field_data_field_articles';
  $handler->display->display_options['relationships']['field_articles_nid']['field'] = 'field_articles_nid';
  $handler->display->display_options['relationships']['field_articles_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_articles_nid']['delta'] = '-1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'list-media';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Tema */
  $handler->display->display_options['fields']['field_tema']['id'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['table'] = 'field_data_field_tema';
  $handler->display->display_options['fields']['field_tema']['field'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_tema']['label'] = '';
  $handler->display->display_options['fields']['field_tema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tema']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tema']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_tema']['element_wrapper_class'] = 'label-theme';
  $handler->display->display_options['fields']['field_tema']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tema']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tema']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tema']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tema']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'label-theme';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_summary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_summary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_summary']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_summary']['element_class'] = 'text-teaser';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_summary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_summary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_summary']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_summary']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-tiles';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list-content';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'list-media';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Tema */
  $handler->display->display_options['fields']['field_tema']['id'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['table'] = 'field_data_field_tema';
  $handler->display->display_options['fields']['field_tema']['field'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_tema']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tema']['element_label_type'] = 'em';
  $handler->display->display_options['fields']['field_tema']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_wrapper_class'] = 'label-theme';
  $handler->display->display_options['fields']['field_tema']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tema']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tema']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tema']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tema']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_class'] = 'text-teaser';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_summary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_summary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_summary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_summary']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_summary']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_summary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_summary']['element_type'] = '0';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_summary']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_summary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_summary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_summary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_summary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_summary']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_summary']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'tema-articles';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-tiles grid-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'pweb_small',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Tema */
  $handler->display->display_options['fields']['field_tema']['id'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['table'] = 'field_data_field_tema';
  $handler->display->display_options['fields']['field_tema']['field'] = 'field_tema';
  $handler->display->display_options['fields']['field_tema']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['field_tema']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tema']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tema']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tema']['element_label_type'] = 'em';
  $handler->display->display_options['fields']['field_tema']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_tema']['element_wrapper_class'] = 'label-theme text-secondary';
  $handler->display->display_options['fields']['field_tema']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tema']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tema']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tema']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tema']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_articles_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title-tile tile-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['tema_articles'] = array(
    t('Master'),
    t('Tema articles'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_articles'),
    t('All'),
    t('Page'),
    t('Tema'),
    t('Content pane'),
    t('View panes'),
  );
  $export['tema_articles'] = $view;

  $view = new view;
  $view->name = 'text_blocks_files_and_contact_info_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Text blocks, files and contact info view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'text-secondary';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'block-secondary clearfix';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Content: Files (field_files) */
  $handler->display->display_options['relationships']['field_files_value']['id'] = 'field_files_value';
  $handler->display->display_options['relationships']['field_files_value']['table'] = 'field_data_field_files';
  $handler->display->display_options['relationships']['field_files_value']['field'] = 'field_files_value';
  $handler->display->display_options['relationships']['field_files_value']['required'] = 1;
  $handler->display->display_options['relationships']['field_files_value']['delta'] = '-1';
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_text_blocks_title']['id'] = 'field_text_blocks_title';
  $handler->display->display_options['fields']['field_text_blocks_title']['table'] = 'field_data_field_text_blocks_title';
  $handler->display->display_options['fields']['field_text_blocks_title']['field'] = 'field_text_blocks_title';
  $handler->display->display_options['fields']['field_text_blocks_title']['relationship'] = 'field_text_blocks_value';
  $handler->display->display_options['fields']['field_text_blocks_title']['label'] = '';
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_text_blocks_title']['element_class'] = 'title-block';
  $handler->display->display_options['fields']['field_text_blocks_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_blocks_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_text_blocks_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_text_blocks_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_text_blocks_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_text_blocks_title']['field_api_classes'] = 0;
  /* Field: Field collection item: Text */
  $handler->display->display_options['fields']['field_text_text']['id'] = 'field_text_text';
  $handler->display->display_options['fields']['field_text_text']['table'] = 'field_data_field_text_text';
  $handler->display->display_options['fields']['field_text_text']['field'] = 'field_text_text';
  $handler->display->display_options['fields']['field_text_text']['relationship'] = 'field_text_blocks_value';
  $handler->display->display_options['fields']['field_text_text']['label'] = '';
  $handler->display->display_options['fields']['field_text_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_text_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_text_text']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_text_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_text_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_text_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_text_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_text_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_text_text']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Text block */
  $handler = $view->new_display('panel_pane', 'Text block', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Text blocks (field_text_blocks) */
  $handler->display->display_options['relationships']['field_text_blocks_value']['id'] = 'field_text_blocks_value';
  $handler->display->display_options['relationships']['field_text_blocks_value']['table'] = 'field_data_field_text_blocks';
  $handler->display->display_options['relationships']['field_text_blocks_value']['field'] = 'field_text_blocks_value';
  $handler->display->display_options['relationships']['field_text_blocks_value']['required'] = 1;
  $handler->display->display_options['relationships']['field_text_blocks_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Files */
  $handler = $view->new_display('panel_pane', 'Files', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Files (field_files) */
  $handler->display->display_options['relationships']['field_files_value']['id'] = 'field_files_value';
  $handler->display->display_options['relationships']['field_files_value']['table'] = 'field_data_field_files';
  $handler->display->display_options['relationships']['field_files_value']['field'] = 'field_files_value';
  $handler->display->display_options['relationships']['field_files_value']['required'] = 1;
  $handler->display->display_options['relationships']['field_files_value']['delta'] = '-1';
  /* Relationship: Field collection item: File (field_files_file:fid) */
  $handler->display->display_options['relationships']['field_files_file_fid']['id'] = 'field_files_file_fid';
  $handler->display->display_options['relationships']['field_files_file_fid']['table'] = 'field_data_field_files_file';
  $handler->display->display_options['relationships']['field_files_file_fid']['field'] = 'field_files_file_fid';
  $handler->display->display_options['relationships']['field_files_file_fid']['relationship'] = 'field_files_value';
  $handler->display->display_options['relationships']['field_files_file_fid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_files_file_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uri']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uri']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uri']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uri']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uri']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uri']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uri']['link_to_file'] = 0;
  $handler->display->display_options['fields']['uri']['file_download_path'] = 1;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_files_title']['id'] = 'field_files_title';
  $handler->display->display_options['fields']['field_files_title']['table'] = 'field_data_field_files_title';
  $handler->display->display_options['fields']['field_files_title']['field'] = 'field_files_title';
  $handler->display->display_options['fields']['field_files_title']['relationship'] = 'field_files_value';
  $handler->display->display_options['fields']['field_files_title']['label'] = '';
  $handler->display->display_options['fields']['field_files_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_files_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_files_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_files_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_files_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_files_title']['element_class'] = 'title-block';
  $handler->display->display_options['fields']['field_files_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_files_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_files_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_files_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_files_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_files_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_files_title']['field_api_classes'] = 0;
  /* Field: Field collection item: Thumbnail */
  $handler->display->display_options['fields']['field_files_thumbnail']['id'] = 'field_files_thumbnail';
  $handler->display->display_options['fields']['field_files_thumbnail']['table'] = 'field_data_field_files_thumbnail';
  $handler->display->display_options['fields']['field_files_thumbnail']['field'] = 'field_files_thumbnail';
  $handler->display->display_options['fields']['field_files_thumbnail']['relationship'] = 'field_files_value';
  $handler->display->display_options['fields']['field_files_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_files_thumbnail']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_files_thumbnail']['element_wrapper_class'] = 'image-block';
  $handler->display->display_options['fields']['field_files_thumbnail']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_files_thumbnail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_files_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_files_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_files_thumbnail']['field_api_classes'] = 0;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['relationship'] = 'field_files_file_fid';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['filename']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['filename']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['filename']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filename']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filename']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filename']['element_type'] = 'p';
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filename']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filename']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filename']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['filename']['link_to_file'] = 0;
  /* Field: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['relationship'] = 'field_files_file_fid';
  $handler->display->display_options['fields']['filemime']['label'] = '';
  $handler->display->display_options['fields']['filemime']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filemime']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filemime']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filemime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filemime']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filemime']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filemime']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filemime']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['filemime']['link_to_file'] = 0;
  $handler->display->display_options['fields']['filemime']['filemime_image'] = 1;
  /* Field: File: Size */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['relationship'] = 'field_files_file_fid';
  $handler->display->display_options['fields']['filesize']['label'] = '';
  $handler->display->display_options['fields']['filesize']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['external'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['filesize']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['filesize']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['filesize']['alter']['html'] = 0;
  $handler->display->display_options['fields']['filesize']['element_type'] = 'p';
  $handler->display->display_options['fields']['filesize']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filesize']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['filesize']['hide_empty'] = 0;
  $handler->display->display_options['fields']['filesize']['empty_zero'] = 0;
  $handler->display->display_options['fields']['filesize']['hide_alter_empty'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Contact info */
  $handler = $view->new_display('panel_pane', 'Contact info', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Contact Info (field_contact_info) */
  $handler->display->display_options['relationships']['field_contact_info_value']['id'] = 'field_contact_info_value';
  $handler->display->display_options['relationships']['field_contact_info_value']['table'] = 'field_data_field_contact_info';
  $handler->display->display_options['relationships']['field_contact_info_value']['field'] = 'field_contact_info_value';
  $handler->display->display_options['relationships']['field_contact_info_value']['required'] = 1;
  $handler->display->display_options['relationships']['field_contact_info_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_contact_info_title']['id'] = 'field_contact_info_title';
  $handler->display->display_options['fields']['field_contact_info_title']['table'] = 'field_data_field_contact_info_title';
  $handler->display->display_options['fields']['field_contact_info_title']['field'] = 'field_contact_info_title';
  $handler->display->display_options['fields']['field_contact_info_title']['relationship'] = 'field_contact_info_value';
  $handler->display->display_options['fields']['field_contact_info_title']['label'] = '';
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_contact_info_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_info_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_info_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_info_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_info_title']['field_api_classes'] = 0;
  /* Field: Field collection item: Region */
  $handler->display->display_options['fields']['field_contact_info_region']['id'] = 'field_contact_info_region';
  $handler->display->display_options['fields']['field_contact_info_region']['table'] = 'field_data_field_contact_info_region';
  $handler->display->display_options['fields']['field_contact_info_region']['field'] = 'field_contact_info_region';
  $handler->display->display_options['fields']['field_contact_info_region']['relationship'] = 'field_contact_info_value';
  $handler->display->display_options['fields']['field_contact_info_region']['label'] = '';
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_contact_info_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_info_region']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_info_region']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_info_region']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_info_region']['field_api_classes'] = 0;
  /* Field: Field collection item: Position */
  $handler->display->display_options['fields']['field_contact_info_position']['id'] = 'field_contact_info_position';
  $handler->display->display_options['fields']['field_contact_info_position']['table'] = 'field_data_field_contact_info_position';
  $handler->display->display_options['fields']['field_contact_info_position']['field'] = 'field_contact_info_position';
  $handler->display->display_options['fields']['field_contact_info_position']['relationship'] = 'field_contact_info_value';
  $handler->display->display_options['fields']['field_contact_info_position']['label'] = '';
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_contact_info_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_info_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_info_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_info_position']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_info_position']['field_api_classes'] = 0;
  /* Field: Field collection item: E-mail */
  $handler->display->display_options['fields']['field_contact_info_email']['id'] = 'field_contact_info_email';
  $handler->display->display_options['fields']['field_contact_info_email']['table'] = 'field_data_field_contact_info_email';
  $handler->display->display_options['fields']['field_contact_info_email']['field'] = 'field_contact_info_email';
  $handler->display->display_options['fields']['field_contact_info_email']['relationship'] = 'field_contact_info_value';
  $handler->display->display_options['fields']['field_contact_info_email']['label'] = '';
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['text'] = '<span>E-mail:</span> [field_contact_info_email]';
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_contact_info_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_info_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_info_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_info_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_info_email']['field_api_classes'] = 0;
  /* Field: Field collection item: Phone */
  $handler->display->display_options['fields']['field_contact_info_phone']['id'] = 'field_contact_info_phone';
  $handler->display->display_options['fields']['field_contact_info_phone']['table'] = 'field_data_field_contact_info_phone';
  $handler->display->display_options['fields']['field_contact_info_phone']['field'] = 'field_contact_info_phone';
  $handler->display->display_options['fields']['field_contact_info_phone']['relationship'] = 'field_contact_info_value';
  $handler->display->display_options['fields']['field_contact_info_phone']['label'] = '';
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['text'] = '<span>tlf:</span> [field_contact_info_phone]';
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_contact_info_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_info_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contact_info_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contact_info_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contact_info_phone']['field_api_classes'] = 0;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $translatables['text_blocks_files_and_contact_info_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field collection item from field_files'),
    t('All'),
    t('Text block'),
    t('field collection item from field_text_blocks'),
    t('View panes'),
    t('Files'),
    t('file from field_files_file'),
    t('[uri]'),
    t('_blank'),
    t('Contact info'),
    t('field collection item from field_contact_info'),
    t('<span>E-mail:</span> [field_contact_info_email]'),
    t('<span>tlf:</span> [field_contact_info_phone]'),
  );
  $export['text_blocks_files_and_contact_info_view'] = $view;

  return $export;
}
