<?php

/**
 * Implementation of hook_strongarm().
 */
function social_media_links_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_social_media_link';
  $strongarm->value = '0';
  $export['comment_anonymous_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_social_media_link';
  $strongarm->value = '3';
  $export['comment_controls_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_social_media_link';
  $strongarm->value = '4';
  $export['comment_default_mode_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_social_media_link';
  $strongarm->value = '1';
  $export['comment_default_order_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_social_media_link';
  $strongarm->value = '50';
  $export['comment_default_per_page_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_social_media_link';
  $strongarm->value = '0';
  $export['comment_form_location_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_social_media_link';
  $strongarm->value = '1';
  $export['comment_preview_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_social_media_link';
  $strongarm->value = '0';
  $export['comment_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_social_media_link';
  $strongarm->value = '1';
  $export['comment_subject_field_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_social_media_link';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '-2',
    'comment_settings' => '6',
    'menu' => '1',
    'book' => '2',
    'path' => '4',
    'path_redirect' => '5',
    'xmlsitemap' => '3',
  );
  $export['content_extra_weights_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_social_media_link';
  $strongarm->value = '0';
  $export['language_content_type_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_social_media_link';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_social_media_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_social_media_link_pattern';
  $strongarm->value = 'social-media-link/[title-raw]';
  $export['pathauto_node_social_media_link_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_social_media_link';
  $strongarm->value = '0';
  $export['upload_social_media_link'] = $strongarm;

  return $export;
}
