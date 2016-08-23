<?php
/**
 * @file
 * Features Builder Bean code.
 */

/**
 * BeanFeaturesBuilder class.
 */
class BeanFeaturesBuilder extends EntityFeaturesBuilder {
  /*
   * @var String
   *   type of bean.
   */
  protected $type;

  /**
   * Constuctor.
   *
   * @param string $name
   *   Name of bean.
   */
  public function __construct($name) {
    parent::__construct($name);
    $this->type = substr($this->name, 10);
  }

  /**
   * Get list features.
   */
  public static function listFeatures() {
    $features = array();
    foreach (features_builder_get_exportables('bean_type') as $name => $label) {
      $features["bean_type_$name"] = $label;
    }
    return $features;
  }

  /**
   * {@inheritdoc}
   */
  public function package() {
    return 'Bean';
  }

  /**
   * Set Components.
   */
  protected function setComponents() {
    // Bean-specific variables.
    $this->setNamedComponents('bean_type', array($this->type));

    // Add Fields and Field Groups assigned to the bundle.
    $this->setNamedComponents('dependencies', array($this->prefix . '_fields'));

    $this->setNamedComponents('dependencies', array('bean'));

    $bundle = substr($this->name, 10);
    $this->setFields('bean', $bundle);
  }

}
