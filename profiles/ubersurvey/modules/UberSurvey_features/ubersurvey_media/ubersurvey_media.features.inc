<?php
/**
 * @file
 * ubersurvey_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ubersurvey_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ubersurvey_media_image_default_styles() {
  $styles = array();

  // Exported image style: large.
  $styles['large'] = array(
    'label' => 'Large (480x480)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: medium.
  $styles['medium'] = array(
    'label' => 'Medium (220x220)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'label' => 'Thumbnail (100x100)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: top_right_user_prof_pic.
  $styles['top_right_user_prof_pic'] = array(
    'label' => 'top_right_user_prof_pic',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 33,
          'height' => 33,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_pic__on__profile_view_page.
  $styles['user_pic__on__profile_view_page'] = array(
    'label' => 'user pic. on  profile view page',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 98,
          'height' => 98,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
