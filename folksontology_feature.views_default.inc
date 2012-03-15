<?php
/**
 * @file
 * folksontology_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function folksontology_feature_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'all_tags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'All Tags';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Edit Tags';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Show all Tags';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'edit_term' => 'edit_term',
    'field_vote' => 'field_vote',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_term' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vote' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[edit_term]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Taxonomy term: Term edit link */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['text'] = '[name]';
  $handler->display->display_options['fields']['edit_term']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['edit_term']['alter']['path'] = '[edit_term]';
  $handler->display->display_options['fields']['edit_term']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_term']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_term']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_term']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_term']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_term']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_term']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_term']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_term']['text'] = 'edit';
  /* Field: Taxonomy term: Vote */
  $handler->display->display_options['fields']['field_vote']['id'] = 'field_vote';
  $handler->display->display_options['fields']['field_vote']['table'] = 'field_data_field_vote';
  $handler->display->display_options['fields']['field_vote']['field'] = 'field_vote';
  $handler->display->display_options['fields']['field_vote']['label'] = '';
  $handler->display->display_options['fields']['field_vote']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_vote']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_vote']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_vote']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_vote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vote']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_vote']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_vote']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_vote']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_vote']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_vote']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_vote']['field_api_classes'] = 0;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-tags';

  /* Display: Edit Tags */
  $handler = $view->new_display('block', 'Edit Tags', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $export['all_tags'] = $view;

  $view = new view;
  $view->name = 'root_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Root Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse Root Terms';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'root-terms';

  /* Display: Browse Root Terms */
  $handler = $view->new_display('block', 'Browse Root Terms', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Show all Tags -';
  $export['root_terms'] = $view;

  return $export;
}
