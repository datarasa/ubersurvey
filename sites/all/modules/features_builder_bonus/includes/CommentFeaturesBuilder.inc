<?php
/**
 * @file
 * CommentFeaturesBuilder.inc
 */

/**
 * CommentFeaturesBuilder class.
 */
class CommentFeaturesBuilder extends EntityFeaturesBuilder {
  /*
   * @var Array
   *   List dependencies.
   */
  protected $dependencies = array(
    'comment',
  );

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
    return array('comment' => t('Comment'));
  }

  /**
   * {@inheritdoc}
   */
  public function package() {
    return 'Comment';
  }

  /**
   * Set components.
   */
  protected function setComponents() {
    if (module_exists('comment')) {
      $this->setRegexComponents('variable', '/comment_.+/');
      $this->setRegexComponents('field_instance', '/comment-.+/');
      // Add Fields and Field Groups assigned to the bundle.
      $this->setNamedComponents('dependencies', array($this->prefix . '_fields'));
    }
    else {
      $pattern = '/comment.*/';
      $this->excludeRegexComponents('variable', $pattern);
    }
  }

}
