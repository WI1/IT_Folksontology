<?php
/**
 * @file
 * folksontology.features.inc
 */

/**
 * Implements hook_node_info().
 */
function folksontology_node_info() {
  $items = array(
    'test' => array(
      'name' => t('Test'),
      'base' => 'node_content',
      'description' => t('Test Content Type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
