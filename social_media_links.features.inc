<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function social_media_links_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function social_media_links_node_info() {
  $items = array(
    'social_media_link' => array(
      'name' => t('Social Media Link'),
      'module' => 'features',
      'description' => t('Use for creating a list of social media links.'),
      'has_title' => '1',
      'title_label' => t('Link Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function social_media_links_views_api() {
  return array(
    'api' => '2',
  );
}
