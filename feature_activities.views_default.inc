<?php
/**
 * @file
 * feature_activities.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_activities_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Actividades';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Actividades';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Fecha */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_activity_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_activity_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_activity_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_activity_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_activity_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_activity_date']['field_api_classes'] = 0;
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
    'activity' => 'activity',
  );

  /* Display: Actividades */
  $handler = $view->new_display('page', 'Actividades', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  $handler->display->display_options['style_options']['fields']['date_field'] = array(
    'field_activity_date' => 'field_activity_date',
  );
  $handler->display->display_options['style_options']['fields']['date'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'actividades';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['fields']['date_field'] = array(
    'field_activity_date' => 'field_activity_date',
  );
  $handler->display->display_options['style_options']['fields']['date'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Actividades';
  $export['activities'] = $view;

  return $export;
}
