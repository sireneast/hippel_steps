<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function hippel_steps_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:how-it-works
  $menu_links['primary-links:how-it-works'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'how-it-works',
    'router_path' => 'how-it-works',
    'link_title' => 'How it works',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('How it works');


  return $menu_links;
}
