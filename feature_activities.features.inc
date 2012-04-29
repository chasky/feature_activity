<?php
/**
 * @file
 * feature_activities.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_activities_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_activities_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Actividad'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Actividad'),
      'help' => '',
    ),
  );
  return $items;
}
