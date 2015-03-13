<?php

/**
 *
 */
function cbib_license_pages_create_licensgroup() {
  $node_array = array(
    'uid' => '1',
    'title' => 'Licenser',
    'log' => '',
    'status' => '1',
    'comment' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'group',
    'language' => LANGUAGE_NONE,
    'created' => '1426166746',
    'changed' => '1426166746',
    'tnid' => '0',
    'translate' => '0',
    'revision_timestamp' => '1426166746',
    'revision_uid' => '1',
    'field_og_subscribe_settings' =>
    array (
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'value' => 'anyone',
        ),
      ),
    ),
    'field_og_access_default_value' =>
    array (
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'value' => '0',
        ),
      ),
    ),
    'og_roles_permissions' =>
    array (
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'value' => '1',
        ),
      ),
    ),
    'body' =>
    array (
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'value' => '<p>Lidt generelt om licenser</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lidt generelt om licenser</p>',
          'safe_summary' => '',
        ),
      ),
    ),
    'group_group' =>
    array (
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'value' => '1',
        ),
      ),
    ),
    'group_access' =>
    array (
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'value' => '0',
        ),
      ),
    ),
    'field_group_logo' =>
    array (
    ),
    'title_field' =>
    array (
      'da' =>
      array (
        0 =>
        array (
          'value' => 'Licenser',
          'format' => NULL,
          'safe_value' => 'Licenser',
        ),
      ),
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'value' => 'Licenser',
          'format' => NULL,
          'safe_value' => 'Licenser',
        ),
      ),
    ),
    'field_topics' =>
    array (
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'tid' => '19',
        ),
      ),
    ),
    'field_radioactivity' =>
    array (
      LANGUAGE_NONE =>
      array (
        0 =>
        array (
          'radioactivity_energy' => '108',
          'radioactivity_timestamp' => '1426167716',
        ),
      ),
    ),
    'og_group_ref' =>
    array (
    ),
    'field_document_file' =>
    array (
    ),
    'title_original' => 'Licenser',
    'metatags' =>
    array (
    ),
    'rdf_mapping' =>
    array (
      'rdftype' =>
      array (
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' =>
      array (
        'predicates' =>
        array (
          0 => 'dc:title',
        ),
      ),
      'created' =>
      array (
        'predicates' =>
        array (
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' =>
      array (
        'predicates' =>
        array (
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' =>
      array (
        'predicates' =>
        array (
          0 => 'content:encoded',
        ),
      ),
      'uid' =>
      array (
        'predicates' =>
        array (
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' =>
      array (
        'predicates' =>
        array (
          0 => 'foaf:name',
        ),
      ),
      'comment_count' =>
      array (
        'predicates' =>
        array (
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' =>
      array (
        'predicates' =>
        array (
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'cid' => '0',
    'last_comment_timestamp' => '1426166746',
    'last_comment_name' => NULL,
    'last_comment_uid' => '1',
    'comment_count' => '0',
    'name' => 'admin',
    'picture' => '0',
    'data' => '',
    'menu' => array(
      'enabled' => TRUE,
      'link_title' => 'Licenser',
      'menu_name' => 'main-menu',
      'module' => 'cbib_license_pages',
    ),
  );

  // Save the group node.
  $node = (object) $node_array;
  node_save($node);

  // Store the nid for other use cases.
  variable_set('cbib_license_pages_front_nid', $node->nid);

  // Remove auto generated aliases for the license front node.
  path_delete(array('source' => 'node/' . $node->nid));

  // Set an alias for the license front node.
  $alias = array(
    'source' => 'node/' . $node->nid,
    'alias' => 'licens',
    'language' => LANGUAGE_NONE,
  );
  path_save($alias);
}
