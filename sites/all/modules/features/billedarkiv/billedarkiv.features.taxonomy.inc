<?php
/**
 * @file
 * billedarkiv.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function billedarkiv_taxonomy_default_vocabularies() {
  return array(
    'billedarkiv_tags' => array(
      'name' => 'billedarkiv tags',
      'machine_name' => 'billedarkiv_tags',
      'description' => 'tags til billedarkiv',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
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
      ),
    ),
  );
}
