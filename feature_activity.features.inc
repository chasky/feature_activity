<?php
/**
 * @file
 * feature_activity.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_activity_node_info() {
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
