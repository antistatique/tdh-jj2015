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
hide($content['field_file_type']);
?>
<ul class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <li class="content"<?php print $content_attributes; ?>>
    <p class="media-heading"><?php print render($content['field_resource_title']); ?> <small class="text-muted"><em><?php print t('By'); ?></em><?php print render($content['field_author']) ?> <?php print render($content['field_copyright']) ?> <?php print render($content['field_year']) ?></small> <small class="text-success"><?php print render($content['field_language']); ?></small> - <?php print render($content['field_url']); ?></p>
      <?php print render($content); ?>
  </li>
</ul>