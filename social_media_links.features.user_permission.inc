<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function social_media_links_user_default_permissions() {
  $permissions = array();

  // Exported permission: create social_media_link content
  $permissions['create social_media_link content'] = array(
    'name' => 'create social_media_link content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: delete any social_media_link content
  $permissions['delete any social_media_link content'] = array(
    'name' => 'delete any social_media_link content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: delete own social_media_link content
  $permissions['delete own social_media_link content'] = array(
    'name' => 'delete own social_media_link content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: edit any social_media_link content
  $permissions['edit any social_media_link content'] = array(
    'name' => 'edit any social_media_link content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: edit own social_media_link content
  $permissions['edit own social_media_link content'] = array(
    'name' => 'edit own social_media_link content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  return $permissions;
}
