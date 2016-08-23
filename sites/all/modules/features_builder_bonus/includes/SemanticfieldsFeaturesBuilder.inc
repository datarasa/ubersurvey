<?php
/**
 * @file
 * SemanticfieldsFeaturesBuilder.inc
 */

/**
 * SemanticfieldsFeaturesBuilder class.
 */
class SemanticfieldsFeaturesBuilder extends EntityFeaturesBuilder {
  protected $dependencies = array();
  protected $type;

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
    return array('semanticfields' => t('Semantic Fields'));
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
    $this->setAllComponents('semantic_fields_preset');
  }

}
