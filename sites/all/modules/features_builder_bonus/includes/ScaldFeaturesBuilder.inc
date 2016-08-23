<?php
/**
 * @file
 * ScaldFeaturesBuilder.inc
 */

/**
 * ScaldFeaturesBuilder class.
 */
class ScaldFeaturesBuilder extends EntityFeaturesBuilder {

  /*
   * @var Array
   *   List types scald.
   */
  protected $scaldTypes = array(
    'Scald Audio' => 'scald_audio',
    'Scald Flash' => 'scald_flash',
    'Scald iFrame' => 'scald_iframe',
    'Scald Image' => 'scald_image',
    'Scald Video' => 'scald_video',
    'Scald Text' => 'scald_text',
    'Scald File' => 'scald_file',
  );

  /*
   * @var Array
   *   List of dependencies.
   */
  protected $dependencies = array(
    'scald',
    'scald_dnd_library',
  );

  /*
   * @var Array
   *   Variables are included in bulk, we'll pluck these out afterwards.
   */
  protected $exclude = array(
    'pathauto_taxonomy_term_scald_authors_pattern',
    'pathauto_taxonomy_term_scald_tags_pattern',
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
    return array('scald' => t('Scald'));
  }

  /**
   * {@inheritdoc}
   */
  public function package() {
    return 'Scald';
  }

  /**
   * Set components.
   */
  protected function setComponents() {
    // Scald-specific variables.
    if (module_exists('scald')) {
      $this->setRegexComponents('variable', '/scald_.+/');
      $this->setRegexComponents('variable', '/dnd_modal_.+/');
      $this->excludeRegexComponents('variable', '/entity_translation_.+scald_.+/');
    }
    if (module_exists('mee')) {
      $this->setRegexComponents('variable', '/mee_.+/');
    }
    $this->setNamedComponents('scald_context_config', array('sdl_library_item'));
    // Add Fields and Field Groups assigned to the bundle.
    $this->setNamedComponents('dependencies', array($this->prefix . '_fields'));

    foreach ($this->scaldTypes as $type) {
      if (module_exists($type)) {
        $this->dependencies[] = $type;
        $bundle = substr($type, 6);
        $this->setFields('scald_atom', $bundle);
        $this->setNamedComponents('scald_atom', array($type));
      }
    }
  }

}
