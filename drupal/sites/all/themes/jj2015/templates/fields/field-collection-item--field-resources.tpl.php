<?php

/**
 * @file
 * Default theme implementation for field collection items.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) field collection item label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-field-collection-item
 *   - field-collection-item-{field_name}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
hide($content['field_file']);
?>
<?php if (isset($content['field_file']) && isset($content['field_file_type'])): ?>
  <div class="<?php print $classes; ?> col-sm-12 clearfix"<?php print $attributes; ?>>
    <div class="content"<?php print $content_attributes; ?>>
      <?php hide($content['field_file_type']); ?>
      <span class="pull-left media-object glyphicon glyphicon-<?php if (isset($content['field_file_type'][0])): print $content['field_file_type'][0]['#markup']; endif;?>"></span>
      <div class="media-body pull-left">
        <p class="media-heading"><?php print render($content['field_resource_title']); ?> <small class="text-muted"><?php if (isset($content['field_author'])): ?><em><?php print t('By'); ?></em><?php endif ?><?php print render($content['field_author']) ?> <?php print render($content['field_copyright']) ?> <?php print render($content['field_year']) ?></small></p>
        <p><a href="<?php print $content['field_file'][0]['#markup']; ?>" class="btn btn-xs btn-primary">Download</a></strong> <small class="text-success"><?php print render($content['field_language']); ?></small></p>
          <?php print render($content); ?>
      </div>
    </div>
  </div>
<?php else: ?>
  <p class="text-muted"><?php print t('Aucune ressource.'); ?></p>
<?php endif; ?>