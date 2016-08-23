<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
function ubersurvey_preprocess_page(&$vars){
  if (arg(0) == "user" and arg(2) != "edit") {
    drupal_set_title('');
  }
}
/**
 * implements hook_form_alter().
 */
function ubersurvey_form_alter(&$form, &$form_state, $form_id)
{
  switch($form_id)
  {
    case 'user_login':
      $form['actions']['links'] = array(
        array('#markup' => '<ul class="forget-links"><li><a href="/user/password/">Request new password</a></li></ul>'),
        '#weight' => -100,
      );
      break;
  } 
}
