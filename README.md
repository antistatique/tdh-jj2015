jj2015.ch
==========

**Terre des Hommes - Justice Juvénile 2015**


## Installation

```shell
$ bundle
$ npm install
$ bower install
$ gulp --production
```

## First Installation (for reference)

```shell
$ git clone git@github.com:antistatique/tdh-styleguide.git
$ git clone git@github.com:antistatique/tdh-jj2015.git
```

### Theme installation

We use a subtheme of Bootstrap Theme. The theme repo is on https://github.com/antistatique/tdh-styleguide. To compile the theme into the right place, simply run gulp on both repos.

```shell
# in the styleguide
$ gulp serve
# in the drupal project
$ gulp
```

### Modules

```shell
# For tasty_backend
admin_menu admin_menu_source ctools page_manager context_admin entity field_group menu_admin override_node_options role_delegation user_settings_access view_unpublished views menu_admin_per_menu views_bulk_operations

# Custom
bootstrap module_filter entityreference_filter context pathauto features field_group link views_bootstrap colorbox youtube adminimal_theme adminimal_admin_menu backup_migrate ckeditor admin_devel admin_views date date_views devel email entity_rules jquery_update metatag
```
