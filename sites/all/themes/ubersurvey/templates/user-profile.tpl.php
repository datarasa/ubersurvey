<?php
/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>

<div class="profile"<?php print $attributes; ?>>
 <?php 
   global $user;
   $user_id = $user->uid;
   $user_info = user_load($user_id);
   $fname = '';
   $lname = '';
   if(!empty($user_info->field_first_name) || !empty($user_info->field_last_name)):
     $fname = $user_info->field_first_name["und"][0]["value"];
     $lname = $user_info->field_last_name["und"][0]["value"];
   endif;

   if($user_info->picture!="" && isset($user_info->picture)):
     $pic_uri = $user_info->picture->uri;
   else:
     $pic_uri = 'public://pictures/user-default.png';
   endif;  
 ?>
  <div class="col-md-12 col-sm-2 col-xs-12 p-0">
    <div id="pro-pic" class="col-md-1 col-sm-1 col-xs-12 p-0">
      <div class="user-pic">
        <?php echo theme('image_style', array('path' => $pic_uri, 'style_name' => 'user_pic__on__profile_view_page'));; ?>
      </div>
    </div>
    <div id="details" class="col-md-11 col-sm-11 col-xs-12 p-0">
      <div id="usr-name"><?php 
       
	  echo $fname." ".$lname ?></div>
    </div>
  </div>
  
</div>
