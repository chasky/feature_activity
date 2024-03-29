<?php
/**
 * @file
 * feature_activities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_activities_taxonomy_default_vocabularies() {
  return array(
    'activity_type' => array(
      'name' => 'Tipo de actividad',
      'machine_name' => 'activity_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'public' => array(
      'name' => 'Público',
      'machine_name' => 'public',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'subjects' => array(
      'name' => 'Temas',
      'machine_name' => 'subjects',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
