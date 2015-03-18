<?php
/**
 * @file
 * catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function catalog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function catalog_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Товар'),
      'base' => 'node_content',
      'description' => t('Страница товара'),
      'has_title' => '1',
      'title_label' => t('Название товара'),
      'help' => '',
    ),
    'product_line' => array(
      'name' => t('Линейка товаров'),
      'base' => 'node_content',
      'description' => t('Страница линейки товаров'),
      'has_title' => '1',
      'title_label' => t('Название линейки товаров'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
