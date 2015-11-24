# Create Jira issue for important project updates

Install this module and its dependencies and configure a Jira username
and password either at `admin/config/services/jira_rest` or better in
`settings.php` on the production server:

```php
$conf['jira_rest_username'] = 'marianne';
$conf['jira_rest_password'] = 'correcthorsebatterystaple';
```

Whenever Drupal runs its project update check the module creates an
issue in Jira for newly discovered security updates, revoked modules,
and unsupported modules.

## Dependencies

The dependencies are (including indirect dependencies):

 * `ctools`
 * `entity`
 * `features`
 * `jira_rest`
 * `jira_rest_rules`
 * `rules`
 * `strongarm`
 * `ultimate_cron`
 * `update_rules`
   * Including [patch](https://www.drupal.org/files/issues/update_rules-release_link_for_recommended_release-2477835-4.patch) from [#2477835](https://www.drupal.org/node/2477835).
