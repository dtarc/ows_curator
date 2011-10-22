<?php
/**
 * @file
 * ows_curator.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ows_curator_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Feeds item: Owner feed */
  $handler->display->display_options['relationships']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['relationships']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['relationships']['feed_nid']['required'] = 1;
  /* Field: Channel Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'feed_nid';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Channel Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Link Source */
  $handler->display->display_options['fields']['field_link_source']['id'] = 'field_link_source';
  $handler->display->display_options['fields']['field_link_source']['table'] = 'field_data_field_link_source';
  $handler->display->display_options['fields']['field_link_source']['field'] = 'field_link_source';
  $handler->display->display_options['fields']['field_link_source']['label'] = '';
  $handler->display->display_options['fields']['field_link_source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_source']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_link_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_source']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_source']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_source']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_link_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_source']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Articles Page */
  $handler = $view->new_display('page', 'Articles Page', 'page');
  $handler->display->display_options['path'] = 'articles';
  $handler->display->display_options['menu']['title'] = 'Home';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Articles by Channel Block */
  $handler = $view->new_display('block', 'Articles by Channel Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'feed_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_class'] = 'uppercase';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Link Source */
  $handler->display->display_options['fields']['field_link_source']['id'] = 'field_link_source';
  $handler->display->display_options['fields']['field_link_source']['table'] = 'field_data_field_link_source';
  $handler->display->display_options['fields']['field_link_source']['field'] = 'field_link_source';
  $handler->display->display_options['fields']['field_link_source']['label'] = '';
  $handler->display->display_options['fields']['field_link_source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_source']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_link_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_source']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_source']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_source']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_link_source']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_source']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Feeds item: Owner feed nid */
  $handler->display->display_options['arguments']['feed_nid']['id'] = 'feed_nid';
  $handler->display->display_options['arguments']['feed_nid']['table'] = 'feeds_item';
  $handler->display->display_options['arguments']['feed_nid']['field'] = 'feed_nid';
  $handler->display->display_options['arguments']['feed_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['feed_nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['feed_nid']['title'] = 'Articles in %1';
  $handler->display->display_options['arguments']['feed_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['feed_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['feed_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['feed_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['feed_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['feed_nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['feed_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['feed_nid']['validate_options']['types'] = array(
    'channel' => 'channel',
  );
  $handler->display->display_options['arguments']['feed_nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['feed_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['feed_nid']['not'] = 0;
  $handler->display->display_options['block_description'] = 'Articles by Channel';
  $export['articles'] = $view;

  $view = new view;
  $view->name = 'channels';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Channels';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Channels';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'channel' => 'channel',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Channels';
  $export['channels'] = $view;

  return $export;
}
