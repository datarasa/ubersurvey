<?php

/**
 * @file
 * Default theme implementation for displaying search results.
 *
 * This template collects each invocation of theme_search_result(). This and
 * the child template are dependent to one another sharing the markup for
 * definition lists.
 *
 * Note that modules may implement their own search type and theme function
 * completely bypassing this template.
 *
 * Available variables:
 * - $search_results: All results as it is rendered through
 *   search-result.tpl.php
 * - $module: The machine-readable name of the module (tab) being searched, such
 *   as "node" or "user".
 *
 *
 * @see template_preprocess_search_results()
 *
 * @ingroup themeable
 */
?>
<?php if ($search_results): ?>
  <div class="box box-color box-bordered">
    <div class="box-title">
      <h3><i class="fa fa-search"></i><?php print t('Search results');?></h3>
    </div>
    <div class="box-content nopadding">
      <div class="highlight-toolbar">
        <div class="pull-left">
			<?php print $pager; ?>							
         </div>
         <div class="pull-right">
		 </div>
      </div> 
      <div class="search-results">
        <ul class="search-results <?php print $module; ?>-results">
          <?php print $search_results; ?>
        </ul>
      </div>
      <div class="highlight-toolbar bottom">
        <div class="pull-left">
			<?php print $pager; ?>							
         </div>
         <div class="pull-right">
		 </div>
      </div>
    </div>
  </div>
<?php else : ?>
  <div class="box box-color box-bordered">
    <div class="box-title">
      <h3><i class="fa fa-search"></i><?php print t('Your search yielded no results');?></h3>
    </div>
    <div class="box-content nopadding"> 
      <div class="search-results">
        <?php print search_help('search#noresults', drupal_help_arg()); ?>
      </div>
    </div>
  </div>
<?php endif; ?>
