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
    'folksontology_node' => array(
      'name' => t('folksontology-node'),
      'base' => 'node_content',
      'description' => t('Nodes within the folksontology-project'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
