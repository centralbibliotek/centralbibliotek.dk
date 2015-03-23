<?php

class CbibMigrateDrupalNode6Migration extends DrupalNode6Migration {

  /**
   * Map the migration of an address field.
   * REQUIRED altering the query and adding a
   * join to the relevant table, where address
   * information is stored.
   * See CbibCentralLibraryMigration::query().
   *
   * @param $dest_field_name
   *   The name of the field to map.
   * @param $source_field_name
   *   The name of the source field.
   * @return void.
   */
  protected function mapAddressField($dest_field_name, $source_field_name) {
    self::mapAddressFieldFor($this, $dest_field_name, $source_field_name);
  }

  /**
   * Set no language for fields.
   * @see CbibMigrateDrupalNode6Migration::noLanguage().
   */
  protected function noLanguage($fields) {
    CbibMigrateDrupalNode6Migration::noLanguageFor($this, $fields);
  }

  /**
   * Radioactivity field needs to be set up in a special way. Run this in prepare().
   *
   * @return void.
   */
  protected function fixRadioactivityField($node) {
    $node->field_radioactivity = array(
      LANGUAGE_NONE => array(
        0 => array(
          'radioactivity_energy' => 0,
          'radioactivity_timestamp' => '0',
        ),
      ),
    );
  }

  /**
   * Mark all metatag fields as not mapped.
   *
   * @return void.
   */
  protected function mapNoMapMetaFields() {
    $this->addUnmigratedDestinations(array(
      'metatag_title',
      'metatag_description',
      'metatag_abstract',
      'metatag_keywords',
      'metatag_robots',
      'metatag_news_keywords',
      'metatag_standout',
      'metatag_generator',
      'metatag_rights',
      'metatag_image_src',
      'metatag_canonical',
      'metatag_shortlink',
      'metatag_publisher',
      'metatag_author',
      'metatag_original-source',
      'metatag_revisit-after',
      'metatag_content-language',
    ));
  }

  /**
   * Actually map the address field.
   *
   * @see CbibMigrateDrupalNode6Migration::mapAddressField().
   */
  public static function mapAddressFieldFor($ctx, $dest_field_name, $source_field_name) {
    $address_arguments = array(
      'administrative_area' => array('source_field' => 'province'),
      'locality' => array('source_field' => 'city'),
      'thoroughfare' => array('source_field' => 'street'),
      'premise' => array('source_field' => 'additional'),
      'postal_code' => array('source_field' => 'postal_code'),
    );
    $ctx->addFieldMapping($dest_field_name, 'country')
         ->arguments($address_arguments);
    // Hide these sources because they are added as arguments
    $ctx->addUnmigratedSources(array(
      $source_field_name,
      'province',
      'city',
      'street',
      'additional',
      'postal_code',
    ));
    $ctx->addUnmigratedDestinations(array(
      $dest_field_name . ':administrative_area',
      $dest_field_name . ':sub_administrative_area',
      $dest_field_name . ':locality',
      $dest_field_name . ':dependent_locality',
      $dest_field_name . ':postal_code',
      $dest_field_name . ':thoroughfare',
      $dest_field_name . ':premise',
      $dest_field_name . ':sub_premise',
      $dest_field_name . ':organisation_name',
      $dest_field_name . ':name_line',
      $dest_field_name . ':first_name',
      $dest_field_name . ':last_name',
      $dest_field_name . ':data',
    ));
  }

  /**
   * Set no language on fields
   *
   * @param $ctx
   *   The context to use.
   * @param $fields
   *   Array of fields to set no language on.
   * @return void.
   */
  public static function noLanguageFor($ctx, array $fields) {
    foreach ($fields as $field) {
      $ctx->addFieldMapping($field . ':language')
        ->defaultValue(LANGUAGE_NONE);
    }
  }

  public function complete($node, stdClass $row) {
    $org_users = Database::getConnection('default', $this->sourceConnection)
      ->select('og_uid', 'o')
      ->fields('o')
      ->condition('o.nid', $row->nid)
      ->execute()
      ->fetchAllAssoc('uid');

    $org_uids = array();
    foreach ($org_users as $org_user) {
      $org_uids[] = $org_user->uid;
    }

    if ($org_uids) {
      $uids = db_select('migrate_map_user_profile', 'u')
        ->fields('u', array('sourceid1', 'destid1'))
        ->condition('u.sourceid1', $org_uids, 'IN')
        ->execute()
        ->fetchAllKeyed();
    }
    else {
      $uids = array();
    }

    // Migrate root user to root user.
    $uids[1] = 1;

    foreach ($org_users as $org_user) {
      if (empty($uids[$org_user->uid])) {
        cbib_migrate_register_message("No mapping found for $org_user->uid");
        continue;
      }
      $user = user_load($uids[$org_user->uid]);
      if ($user) {
        $this->grantOgMembershipAndRole($node, $user, $org_user->is_admin);
      }
      else {
        cbib_migrate_register_message("No user found for mapping $org_user->uid => " . $uids[$org_user->uid]);
      }
    }
  }

  public function grantOgMembershipAndRole($node, $user, $admin = FALSE, $follow = TRUE) {
    // Sign the user up for this group.
    og_group('node', $node->nid, array(
      "entity type" => "user",
      "entity" => $user,
    ));

    $roles = array_flip(og_roles('node', $node->type, $node->nid));

    $gid = $admin ? $roles["administrator member"] : $roles["member"];
    if (!$gid) {
      cbib_migrate_register_message("No acceptable role found for $node->type:$node->nid (" . join(', ', $roles) . ")");
    }


    // Grant role.
    og_role_grant('node', $node->nid, $user->uid, $gid);

    // Have the user automatically follow the event if Commons Follow (Node) is
    // enabled.
    if ($follow && module_exists('commons_follow_node')) {
      commons_follow_node_follow_node($node->nid, $node->type, $user->uid);
    }
  }
}
