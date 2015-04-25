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
 * `update_rules`
