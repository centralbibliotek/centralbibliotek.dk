<?php

/**
 * Migration class for migrating the group_event entities.
 *
 * We extend from CbibEventMigration (ordinary events) because group events only
 * differ in minor places. We override methods below to cater for the
 * differences.
 */
class CbibGroupEventMigration extends CbibEventMigration {
  /**
   * Map fields that are of the same type on source
   * and destination
   *
   * @return void.
   */
  protected function mapSameTypeFields() {
    $this->addFieldMapping('title_field', 'title');
    $this->addFieldMapping('field_comments', 'field_comments');
    $this->addFieldMapping('field_number_of_attendees', 'field_participants');

    $this->noLanguage(array(
      'title_field',
      'field_event_audience',
      'field_comments',
    ));
  }

  /**
   * Map migration of entity reference fields.
   *
   * @return void.
   */
  protected function mapEntityReferenceFields() {
    $this->addFieldMapping('og_group_ref', 'field_group_relation')
      ->sourceMigration('group');
    $this->addFieldMapping('field_organizers', 'uid')
      ->sourceMigration('user_profile');
  }

  /**
   * Map date fields.
   *
   * @return void.
   */
  protected function mapDateFields() {
    $this->addFieldMapping('field_date', 'field_event_time');
    $this->addFieldMapping('field_date:to', 'field_event_time:value2');
    $this->addFieldMapping('field_date:timezone')
      ->defaultValue('Europe/Copenhagen');

    $this->addUnmigratedDestinations(array(
      'field_date:rrule',
    ));
  }
}
