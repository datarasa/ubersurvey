<?php
/**
 * @file
 * EnabledViewsFeaturesBuilder.inc
 */

/**
 * EnabledViewsFeaturesBuilder class.
 */
class EnabledViewsFeaturesBuilder extends FeaturesBuilderBase {

  /*
   * @var Array $variables
   * views list.
   */
  protected $variables = array(
    'views_devel_output',
    'views_devel_region',
    'views_exposed_filter_any_label',
    'views_localization_plugin',
    'views_no_javascript',
    'views_show_additional_queries',
    'views_skip_cache',
    'views_sql_signature',
  );

  /**
   * Get list features.
   */
  public static function listFeatures() {
    return array('views' => t('Views'));
  }

  /**
   * {@inheritdoc}
   */
  public function package() {
    return 'CTools';
  }

  /**
   * Set components.
   */
  protected function setComponents() {
    $views = views_get_all_views();
    foreach ($views as $viewname => $view) {
      if (empty($view->disabled)) {
        $enabledviews[] = $viewname;
      }
    }
    $this->setNamedComponents('views_view', $enabledviews);
    $this->setNamedComponents('variable', $this->variables);

    if (module_exists('admin_views')) {
      $this->setNamedComponents('dependencies', array('admin_views'));
    }
    if (module_exists('date_views')) {
      $this->setNamedComponents('dependencies', array('date_views'));
    }
  }

}
