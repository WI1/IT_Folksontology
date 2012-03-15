<?php
/**
 * @file
 * folksontology_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function folksontology_feature_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_rdf_default_mappings().
 */
function folksontology_feature_rdf_default_mappings() {
  $rdf_mappings = array();

  // Exported RDF mapping: taxonomy_vocabulary
  $rdf_mappings['taxonomy_vocabulary']['taxonomy_vocabulary'] = array(
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
  );

  // Exported RDF mapping: tags
  $rdf_mappings['taxonomy_term']['tags'] = array(
    'rdftype' => array(
      0 => 'skos:Concept',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'rdfs:label',
        1 => 'skos:prefLabel',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'skos:definition',
      ),
    ),
    'vid' => array(
      'predicates' => array(
        0 => 'skos:inScheme',
      ),
      'type' => 'rel',
    ),
    'parent' => array(
      'predicates' => array(
        0 => 'skos:broader',
      ),
      'type' => 'rel',
    ),
    'synonyms_synonym' => array(
      'type' => 'property',
      'predicates' => array(
        0 => 'skos:exactMatch',
      ),
    ),
  );

  return $rdf_mappings;
}
