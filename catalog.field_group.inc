<?php
/**
 * @file
 * catalog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function catalog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups_benefits|taxonomy_term|product_groups|form';
  $field_group->group_name = 'group_groups_benefits';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'product_groups';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Преимущества группы',
    'weight' => '4',
    'children' => array(
      0 => 'field_groups_benefits',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-groups-benefits field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_groups_benefits|taxonomy_term|product_groups|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups_description|taxonomy_term|product_groups|form';
  $field_group->group_name = 'group_groups_description';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'product_groups';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Дополнительное описание',
    'weight' => '2',
    'children' => array(
      0 => 'field_groups_short_description',
      1 => 'field_groups_factoids',
      2 => 'field_groups_note',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Дополнительное описание',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-groups-description field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_groups_description|taxonomy_term|product_groups|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups_images|taxonomy_term|product_groups|form';
  $field_group->group_name = 'group_groups_images';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'product_groups';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Изображения',
    'weight' => '3',
    'children' => array(
      0 => 'field_groups_images',
      1 => 'field_groups_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_groups_images|taxonomy_term|product_groups|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_groups_main|taxonomy_term|product_groups|form';
  $field_group->group_name = 'group_groups_main';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'product_groups';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Основные настройки',
    'weight' => '0',
    'children' => array(
      0 => 'field_groups_area',
      1 => 'field_groups_main_group',
      2 => 'name',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_groups_main|taxonomy_term|product_groups|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htabs|node|product_line|form';
  $field_group->group_name = 'group_htabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_line';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Горизонтальные табы',
    'weight' => '0',
    'children' => array(
      0 => 'group_product_line_main',
      1 => 'group_product_line_description',
      2 => 'group_product_line_products',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-htabs field-group-htabs',
      ),
    ),
  );
  $export['group_htabs|node|product_line|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_area|node|product|form';
  $field_group->group_name = 'group_product_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_htabs';
  $field_group->data = array(
    'label' => 'Область применения',
    'weight' => '5',
    'children' => array(
      0 => 'field_product_area',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-area field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_area|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_benefits|node|product|form';
  $field_group->group_name = 'group_product_benefits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_htabs';
  $field_group->data = array(
    'label' => 'Особенности материала',
    'weight' => '6',
    'children' => array(
      0 => 'field_product_benefits',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-benefits field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_benefits|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_certs|node|product|form';
  $field_group->group_name = 'group_product_certs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_htabs';
  $field_group->data = array(
    'label' => 'Сертификаты',
    'weight' => '8',
    'children' => array(
      0 => 'field_product_cert',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-certs field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_certs|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_description|node|product|form';
  $field_group->group_name = 'group_product_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_htabs';
  $field_group->data = array(
    'label' => 'Описание',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-description field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_description|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_features|node|product|form';
  $field_group->group_name = 'group_product_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_htabs';
  $field_group->data = array(
    'label' => 'Технические характеристики',
    'weight' => '7',
    'children' => array(
      0 => 'field_product_features',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-features field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_features|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_htabs|node|product|form';
  $field_group->group_name = 'group_product_htabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Горизонтальные табы',
    'weight' => '0',
    'children' => array(
      0 => 'group_product_main',
      1 => 'group_product_images',
      2 => 'group_product_description',
      3 => 'group_product_package',
      4 => 'group_product_area',
      5 => 'group_product_certs',
      6 => 'group_product_benefits',
      7 => 'group_product_features',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-product-htabs field-group-htabs',
      ),
    ),
  );
  $export['group_product_htabs|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_images|node|product|form';
  $field_group->group_name = 'group_product_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_htabs';
  $field_group->data = array(
    'label' => 'Изображения',
    'weight' => '3',
    'children' => array(
      0 => 'field_product_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Изображения',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-product-images field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_product_images|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_line_description|node|product_line|form';
  $field_group->group_name = 'group_product_line_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_line';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'Описание',
    'weight' => '3',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_line_description|node|product_line|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_line_main|node|product_line|form';
  $field_group->group_name = 'group_product_line_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_line';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'Основные настройки',
    'weight' => '1',
    'children' => array(
      0 => 'field_product_line_group',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_line_main|node|product_line|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_line_products|node|product_line|form';
  $field_group->group_name = 'group_product_line_products';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_line';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs';
  $field_group->data = array(
    'label' => 'Список товаров',
    'weight' => '2',
    'children' => array(
      0 => 'field_product_line_products',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_line_products|node|product_line|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_main|node|product|form';
  $field_group->group_name = 'group_product_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_htabs';
  $field_group->data = array(
    'label' => 'Основные настройки',
    'weight' => '1',
    'children' => array(
      0 => 'field_product_label',
      1 => 'field_product_quantity',
      2 => 'price',
      3 => 'field_product_producer',
      4 => 'field_product_old_price',
      5 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-main field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_main|node|product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_package|node|product|form';
  $field_group->group_name = 'group_product_package';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_htabs';
  $field_group->data = array(
    'label' => 'Упаковка',
    'weight' => '4',
    'children' => array(
      0 => 'field_product_package',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-package field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_product_package|node|product|form'] = $field_group;

  return $export;
}
