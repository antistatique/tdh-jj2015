<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div class="container">
  <header>
    <div class="row">
      <div class="col-sm-4 col-md-3">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
          <img class="isolate img-responsive" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
        </a>
      </div>
      <div class="col-md-9 col-sm-12">
        <?php if (!empty($page['sub_nav'])): ?>
          <?php print render($page['sub_nav']); ?>
        <?php endif; ?>
        <h1 class="h3"><?php print $site_name; ?></h1>
      </div>
    </div>
  </header>
</div>
<div class="well-tdh isolate-inner">
  <div class="container">
    <div class="row">
      <div class="col-sm-12">
        <div class="isolate">
          <nav class="navbar navbar-default" role="navigation">
            <div class="container-fluid">
              <div class="navbar-header">
                <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-tdh">
                  <span class="sr-only">Toggle navigation</span>
                  <span class="icon-bar"></span>
                  <span class="icon-bar"></span>
                  <span class="icon-bar"></span>
                </button>
                <a class="navbar-brand visible-xs" href="<?php print $front_page; ?>">MENU</a>
              </div>
              <?php if (!empty($primary_nav)): ?>
                <div class="navbar-collapse collapse" id="navbar-tdh">
                  <?php if (!empty($primary_nav)): ?>
                    <?php print render($primary_nav); ?>
                  <?php endif; ?>
                </div>
              <?php endif; ?>
            </div><!-- /.container-fluid -->
          </nav>
        </div>
      </div>
    </div>
    <?php if (!empty($page['header'])): ?>
      <div class="row">
        <div class="col-sm-12">
          <div class="thumbnail clearfix">
            <?php print render($page['header']); ?>
          </div>
        </div>
      </div>
    <?php endif; ?>
    <div class="row">
      <div class="col-sm-12">
        <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
        <?php if (!empty($title) && !$hide_title): ?>
          <div class="page-header">
            <h1><?php print $title ?></h1>
          </div>
        <?php endif; ?>
      </div>
    </div>
    <?php if (!empty($page['highlighted'])): ?>
      <div class="row">
        <div class="col-sm-12">
          <div class="highlighted"><?php print render($page['highlighted']); ?></div>
        </div>
      </div>
    <?php endif; ?>
    <div class="row">
      <section <?php print $content_column_class; ?>>
        <a id="main-content"></a>
        <?php print $messages; ?>
        <?php if (!empty($tabs)): ?>
          <div class="col-sm-12">
            <?php print render($tabs); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
          <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>

        <div class="col-sm-12">
          <?php print render($page['content']); ?>
        </div>

        <div class="col-sm-8 col-sm-offset-4 spacer-bottom">
          <?php print render($page['content_bottom']); ?>
        </div>
      </section>
    </div>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>
</div>

<footer class="footer footer-tdh super-isolate-inner">
  <div class="container">
    <div class="row">
      <div class="col-sm-4">
        <?php print render($page['footer_1']); ?>
      </div>
      <div class="col-sm-4">
        <?php print render($page['footer_2']); ?>
      </div>
      <div class="col-sm-4">
        <div class="well">
          <?php print render($page['footer_3']); ?>
        </div>
      </div>
    </div>
    <?php print render($page['footer']); ?>
  </div>
</footer>