<?php
/**
 * @file
 * BlockFeaturesBuilder.inc
 */

/**
 * BlockFeaturesBuilder class.
 */
class BlockFeaturesBuilder extends EntityFeaturesBuilder {
  /*
   * @var Array
   *   List dependencies.
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
    return array('block' => t('Blocks'));
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
    // Blocks-specific variables.
    if (module_exists('fe_block')) {
      $this->setRegexComponents('fe_block_settings', '/menu.+/');
      $this->setRegexComponents('fe_block_settings', '/views.+/');
    }
  }

}
