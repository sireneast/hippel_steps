<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function hippel_steps_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function hippel_steps_imagecache_default_presets() {
  $items = array(
    'hippel-step' => array(
      'presetname' => 'hippel-step',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '160',
            'height' => '160',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function hippel_steps_node_info() {
  $items = array(
    'step' => array(
      'name' => t('Step'),
      'module' => 'features',
      'description' => t('A step on the "How it\'s done" page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
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
function hippel_steps_views_api() {
  return array(
    'api' => '2',
  );
}
