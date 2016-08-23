<?php

/**
 * @file
 * Features Builder definitions.
 */

/**
 * Implements hook_features_builders_info().
 */
function features_builder_bonus_features_builders_info() {
  $builders = array(
    'features_builder_comment' => array(
      'label' => t('Comment'),
      'class' => 'CommentFeaturesBuilder',
    ),
    'features_builder_bean' => array(
      'label' => t('Bean'),
      'class' => 'BeanFeaturesBuilder',
    ),
    'features_builder_block' => array(
      'label' => t('Block'),
      'class' => 'BlockFeaturesBuilder',
    ),
    'features_builder_date' => array(
      'label' => t('Date'),
      'class' => 'DateFeaturesBuilder',
    ),
    'features_builder_languages' => array(
      'label' => t('Languages'),
      'class' => 'LanguagesFeaturesBuilder',
    ),
    'features_builder_scald' => array(
      'label' => t('Scald'),
      'class' => 'ScaldFeaturesBuilder',
    ),
    'features_builder_semanticfields' => array(
      'label' => t('Semantic Fields'),
      'class' => 'SemanticfieldsFeaturesBuilder',
    ),
  );

  if (module_exists('features_builder_bonus') && !empty(variable_get('features_builder_views_enabled', FALSE))) {
    $builders['features_builder_enabledviews'] = array(
      'label' => t('Enabled Views'),
      'class' => 'EnabledViewsFeaturesBuilder',
    );
  }

  return $builders;
}
