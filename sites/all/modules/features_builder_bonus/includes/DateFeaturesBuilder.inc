<?php
/**
 * @file
 * DateFeaturesBuilder.inc
 */

/**
 * DateFeaturesBuilder class.
 */
class DateFeaturesBuilder extends EntityFeaturesBuilder {

  /*
   * @var Array
   * List dependencies.
   */
  protected $dependencies = array();

  /**
   * Constructor.
   *
   * @param string $name
   *   Name of object.
   */
  public function __construct($name) {
    parent::__construct($name);
  }

  /**
   * Get list features.
   */
  public static function listFeatures() {
    return array('date' => t('Date'));
  }

  /**
   * {@inheritdoc}
   */
  public function package() {
    return 'Configuration';
  }

  /**
   * Set components.
   */
  protected function setComponents() {
    $this->setAllComponents('fe_date_custom_date_formats');
    $this->setAllComponents('fe_date_date_format_types');
    $this->setAllComponents('fe_date_locale_date_format');
  }

}
