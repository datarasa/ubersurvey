<?php
/**
 * @file
 * ubersurvey_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ubersurvey_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_section'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'footer_section',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['hybridauth-hybridauth'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'hybridauth',
    'module' => 'hybridauth',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'ubersurvey' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ubersurvey',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ubersurvey_blocks-ubersurvey_active_survey_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ubersurvey_active_survey_block',
    'module' => 'ubersurvey_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'ubersurvey',
        'weight' => -9,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ubersurvey_blocks-ubersurvey_user_dashboard_blocks'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ubersurvey_user_dashboard_blocks',
    'module' => 'ubersurvey_blocks',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['ubersurvey_blocks-ubersurvey_user_dropdown'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ubersurvey_user_dropdown',
    'module' => 'ubersurvey_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'ubersurvey',
        'weight' => -10,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ubersurvey_blocks-ubersurvey_user_submissions'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ubersurvey_user_submissions',
    'module' => 'ubersurvey_blocks',
    'node_types' => array(),
    'pages' => '<?php 
if(arg(0) == \'user\' && arg(2) != \'edit\' )
return true;
else 
return false 
?>',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => 'Participated Surveys',
    'visibility' => 2,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'ubersurvey' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-archive-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'archive-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-backlinks-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'backlinks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-comments_recent-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'comments_recent-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'ubersurvey' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ubersurvey',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
