<?php
/**
 * @file
 * LanguagesFeaturesBuilder.inc
 */

/**
 * LanguagesFeaturesBuilder class.
 */
class LanguagesFeaturesBuilder extends EntityFeaturesBuilder {

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
    return array('languages' => t('Languages'));
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
    $this->setAllComponents('language');
    // Locale-specific variables.
    if (module_exists('locale')) {
      $this->setRegexComponents('variable', '/language_.+/');
      $this->setRegexComponents('variable', '/locale_.+/');
    }
    // Localization-specific variables.
    if (module_exists('l10n')) {
      $this->setRegexComponents('variable', '/l10n_.+/');
    }
    // Localization-specific variables.
    if (module_exists('i18n')) {
      $this->setRegexComponents('variable', '/i18n_.+/');
    }
    // Entity_translation-specific variables.
    if (module_exists('entity_translation')) {
      $this->setRegexComponents('variable', '/entity_translation_.+/');
    }
    // Variable_realm-specific variables:
    // BEWARE: exporting language values from variable_realm
    // breaks language_default as it is reverted as array instead of object.
    if (module_exists('variable_realm')) {
      // $this->setAllComponents('variable_realm');.
    }
  }

}
