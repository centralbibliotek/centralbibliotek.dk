<?php
/**
 * @file
 * cbib_oc_license_pr_bw_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cbib_oc_license_pr_bw_feature_taxonomy_default_vocabularies() {
  return array(
    'formidling_og_pr' => array(
      'name' => 'Formidling og Pr',
      'machine_name' => 'formidling_og_pr',
      'description' => 'Indeholde opmærkning til formidling og pr typer',
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
