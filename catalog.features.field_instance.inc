<?php
/**
 * @file
 * catalog.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function catalog_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_groups_benefits-field_groups_benefits_full'
  $field_instances['field_collection_item-field_groups_benefits-field_groups_benefits_full'] = array(
    'bundle' => 'field_groups_benefits',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_benefits_full',
    'label' => 'Подробнее',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_groups_benefits-field_groups_benefits_short'
  $field_instances['field_collection_item-field_groups_benefits-field_groups_benefits_short'] = array(
    'bundle' => 'field_groups_benefits',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_benefits_short',
    'label' => 'Кратко',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_groups_factoids-field_groups_factoids_image'
  $field_instances['field_collection_item-field_groups_factoids-field_groups_factoids_image'] = array(
    'bundle' => 'field_groups_factoids',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_factoids_image',
    'label' => 'Изображение',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_groups_factoids-field_groups_factoids_text'
  $field_instances['field_collection_item-field_groups_factoids-field_groups_factoids_text'] = array(
    'bundle' => 'field_groups_factoids',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_factoids_text',
    'label' => 'Текст',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_product_benefits-field_product_benefits_full'
  $field_instances['field_collection_item-field_product_benefits-field_product_benefits_full'] = array(
    'bundle' => 'field_product_benefits',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_benefits_full',
    'label' => 'Полное описание',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_product_benefits-field_product_benefits_short'
  $field_instances['field_collection_item-field_product_benefits-field_product_benefits_short'] = array(
    'bundle' => 'field_product_benefits',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_benefits_short',
    'label' => 'Кратко',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_product_features-field_product_features_name'
  $field_instances['field_collection_item-field_product_features-field_product_features_name'] = array(
    'bundle' => 'field_product_features',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_features_name',
    'label' => 'Название характеристики',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_product_features-field_product_features_value'
  $field_instances['field_collection_item-field_product_features-field_product_features_value'] = array(
    'bundle' => 'field_product_features',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_features_value',
    'label' => 'Значение характеристики',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_product_package-field_product_package_type'
  $field_instances['field_collection_item-field_product_package-field_product_package_type'] = array(
    'bundle' => 'field_product_package',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_package_type',
    'label' => 'Тип упаковки',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_product_package-field_product_package_x'
  $field_instances['field_collection_item-field_product_package-field_product_package_x'] = array(
    'bundle' => 'field_product_package',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_package_x',
    'label' => 'Длина',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_product_package-field_product_package_y'
  $field_instances['field_collection_item-field_product_package-field_product_package_y'] = array(
    'bundle' => 'field_product_package',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_package_y',
    'label' => 'Ширина',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_product_package-field_product_package_z'
  $field_instances['field_collection_item-field_product_package-field_product_package_z'] = array(
    'bundle' => 'field_product_package',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_package_z',
    'label' => 'Высота',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-product-add_to_cart'
  $field_instances['node-product-add_to_cart'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'basic_cart',
        'settings' => array(
          'css_class' => 'button basic-cart-add-to-cart-link',
          'field_formatter_class' => '',
        ),
        'type' => 'basic_cart_add_to_cart',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'basic_cart',
        'settings' => array(
          'css_class' => 'button basic-cart-add-to-cart-link',
          'field_formatter_class' => '',
        ),
        'type' => 'basic_cart_add_to_cart',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'add_to_cart',
    'label' => 'Add to cart',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-product-body'
  $field_instances['node-product-body'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'body',
    'label' => 'Полное описание',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-product-field_product_area'
  $field_instances['node-product-field_product_area'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_area',
    'label' => 'Области применения ',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-product-field_product_benefits'
  $field_instances['node-product-field_product_benefits'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_benefits',
    'label' => 'Особенности материала',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_fieldset',
      'settings' => array(
        'collapsed' => 0,
        'field_as_label' => '',
        'last_item_collapsed' => 0,
        'new_item_open' => 0,
        'replace_label' => 0,
      ),
      'type' => 'field_collection_fieldset',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-product-field_product_cert'
  $field_instances['node-product-field_product_cert'] = array(
    'bundle' => 'product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fotorama',
        'settings' => array(
          'alwaysPadding' => FALSE,
          'arrowNext' => NULL,
          'arrowPrev' => NULL,
          'arrows' => TRUE,
          'arrowsColor' => NULL,
          'aspectRatio' => 'auto',
          'autoplay' => FALSE,
          'background' => NULL,
          'caption' => 'none',
          'click' => TRUE,
          'cropToFit' => FALSE,
          'dotColor' => NULL,
          'field_formatter_class' => '',
          'fitToWindowHeight' => FALSE,
          'flexible' => FALSE,
          'fullscreen' => FALSE,
          'fullscreenIcon' => FALSE,
          'hash' => FALSE,
          'height' => 'auto',
          'loop' => FALSE,
          'margin' => 5,
          'minPadding' => 10,
          'nav' => 'thumbs',
          'navBackground' => NULL,
          'navPosition' => 'auto',
          'preload' => 3,
          'preloader' => 'dark',
          'shadows' => TRUE,
          'startImg' => 1,
          'stopAutoplayOnAction' => TRUE,
          'thumbBorderColor' => NULL,
          'thumbBorderWidth' => 3,
          'thumbMargin' => 5,
          'thumbSize' => NULL,
          'touchStyle' => TRUE,
          'transitionDuration' => 333,
          'vertical' => FALSE,
          'width' => 'auto',
          'zoomToFit' => TRUE,
        ),
        'type' => 'fotorama',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'fotorama',
        'settings' => array(
          'alwaysPadding' => FALSE,
          'arrowNext' => NULL,
          'arrowPrev' => NULL,
          'arrows' => TRUE,
          'arrowsColor' => NULL,
          'aspectRatio' => 'auto',
          'autoplay' => FALSE,
          'background' => NULL,
          'caption' => 'none',
          'click' => TRUE,
          'cropToFit' => FALSE,
          'dotColor' => NULL,
          'field_formatter_class' => '',
          'fitToWindowHeight' => FALSE,
          'flexible' => FALSE,
          'fullscreen' => FALSE,
          'fullscreenIcon' => FALSE,
          'hash' => FALSE,
          'height' => 'auto',
          'loop' => FALSE,
          'margin' => 5,
          'minPadding' => 10,
          'nav' => 'thumbs',
          'navBackground' => NULL,
          'navPosition' => 'auto',
          'preload' => 3,
          'preloader' => 'dark',
          'shadows' => TRUE,
          'startImg' => 1,
          'stopAutoplayOnAction' => TRUE,
          'thumbBorderColor' => NULL,
          'thumbBorderWidth' => 3,
          'thumbMargin' => 5,
          'thumbSize' => NULL,
          'touchStyle' => TRUE,
          'transitionDuration' => 333,
          'vertical' => FALSE,
          'width' => 'auto',
          'zoomToFit' => TRUE,
        ),
        'type' => 'fotorama',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_cert',
    'label' => 'Сертификаты',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-product-field_product_features'
  $field_instances['node-product-field_product_features'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_features',
    'label' => 'Технические характеристики',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_table',
      'settings' => array(
        'collapsed' => 0,
        'field_as_label' => '',
        'last_item_collapsed' => 0,
        'new_item_open' => 0,
        'replace_label' => 0,
      ),
      'type' => 'field_collection_table',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-product-field_product_image'
  $field_instances['node-product-field_product_image'] = array(
    'bundle' => 'product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fotorama',
        'settings' => array(
          'alwaysPadding' => FALSE,
          'arrowNext' => NULL,
          'arrowPrev' => NULL,
          'arrows' => TRUE,
          'arrowsColor' => NULL,
          'aspectRatio' => 'auto',
          'autoplay' => FALSE,
          'background' => NULL,
          'caption' => 'none',
          'click' => TRUE,
          'cropToFit' => FALSE,
          'dotColor' => NULL,
          'field_formatter_class' => '',
          'fitToWindowHeight' => FALSE,
          'flexible' => FALSE,
          'fullscreen' => FALSE,
          'fullscreenIcon' => FALSE,
          'hash' => FALSE,
          'height' => 'auto',
          'loop' => FALSE,
          'margin' => 5,
          'minPadding' => 10,
          'nav' => 'thumbs',
          'navBackground' => NULL,
          'navPosition' => 'auto',
          'preload' => 3,
          'preloader' => 'dark',
          'shadows' => TRUE,
          'startImg' => 1,
          'stopAutoplayOnAction' => TRUE,
          'thumbBorderColor' => NULL,
          'thumbBorderWidth' => 3,
          'thumbMargin' => 5,
          'thumbSize' => NULL,
          'touchStyle' => TRUE,
          'transitionDuration' => 333,
          'vertical' => FALSE,
          'width' => 'auto',
          'zoomToFit' => TRUE,
        ),
        'type' => 'fotorama',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'fotorama',
        'settings' => array(
          'alwaysPadding' => FALSE,
          'arrowNext' => NULL,
          'arrowPrev' => NULL,
          'arrows' => TRUE,
          'arrowsColor' => NULL,
          'aspectRatio' => 'auto',
          'autoplay' => FALSE,
          'background' => NULL,
          'caption' => 'none',
          'click' => TRUE,
          'cropToFit' => FALSE,
          'dotColor' => NULL,
          'field_formatter_class' => '',
          'fitToWindowHeight' => FALSE,
          'flexible' => FALSE,
          'fullscreen' => FALSE,
          'fullscreenIcon' => FALSE,
          'hash' => FALSE,
          'height' => 'auto',
          'loop' => FALSE,
          'margin' => 5,
          'minPadding' => 10,
          'nav' => 'thumbs',
          'navBackground' => NULL,
          'navPosition' => 'auto',
          'preload' => 3,
          'preloader' => 'dark',
          'shadows' => TRUE,
          'startImg' => 1,
          'stopAutoplayOnAction' => TRUE,
          'thumbBorderColor' => NULL,
          'thumbBorderWidth' => 3,
          'thumbMargin' => 5,
          'thumbSize' => NULL,
          'touchStyle' => TRUE,
          'transitionDuration' => 333,
          'vertical' => FALSE,
          'width' => 'auto',
          'zoomToFit' => TRUE,
        ),
        'type' => 'fotorama',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_image',
    'label' => 'Изображения',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-product-field_product_label'
  $field_instances['node-product-field_product_label'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_label',
    'label' => 'Бирка',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-product-field_product_old_price'
  $field_instances['node-product-field_product_old_price'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'basic_cart',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'basic_cart_price',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'basic_cart',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'basic_cart_price',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_old_price',
    'label' => 'Цена. Старая',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-product-field_product_package'
  $field_instances['node-product-field_product_package'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_package',
    'label' => 'Упаковка',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_table',
      'settings' => array(
        'collapsed' => 0,
        'field_as_label' => '',
        'last_item_collapsed' => 0,
        'new_item_open' => 0,
        'replace_label' => 0,
      ),
      'type' => 'field_collection_table',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-product-field_product_producer'
  $field_instances['node-product-field_product_producer'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_producer',
    'label' => 'Производитель',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-product-field_product_quantity'
  $field_instances['node-product-field_product_quantity'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_quantity',
    'label' => 'Количество',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-product-price'
  $field_instances['node-product-price'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter this item\'s price.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'basic_cart',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'basic_cart_price',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'basic_cart',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'basic_cart_price',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'price',
    'label' => 'Цена',
    'required' => FALSE,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-product_line-body'
  $field_instances['node-product_line-body'] = array(
    'bundle' => 'product_line',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'body',
    'label' => 'Описание линейки',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 50,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-product_line-field_product_line_group'
  $field_instances['node-product_line-field_product_line_group'] = array(
    'bundle' => 'product_line',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_line_group',
    'label' => 'Группа товаров',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-product_line-field_product_line_products'
  $field_instances['node-product_line-field_product_line_products'] = array(
    'bundle' => 'product_line',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_class' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_product_line_products',
    'label' => 'Товары',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_groups-field_groups_area'
  $field_instances['taxonomy_term-product_groups-field_groups_area'] = array(
    'bundle' => 'product_groups',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_area',
    'label' => 'Область применения',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_groups-field_groups_benefits'
  $field_instances['taxonomy_term-product_groups-field_groups_benefits'] = array(
    'bundle' => 'product_groups',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_benefits',
    'label' => 'Преимущества группы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_fieldset',
      'settings' => array(
        'collapsed' => 0,
        'field_as_label' => '',
        'last_item_collapsed' => 0,
        'new_item_open' => 0,
        'replace_label' => 0,
      ),
      'type' => 'field_collection_fieldset',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_groups-field_groups_factoids'
  $field_instances['taxonomy_term-product_groups-field_groups_factoids'] = array(
    'bundle' => 'product_groups',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_factoids',
    'label' => 'Фактоиды',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_fieldset',
      'settings' => array(
        'collapsed' => 0,
        'field_as_label' => '',
        'last_item_collapsed' => 0,
        'new_item_open' => 0,
        'replace_label' => 0,
      ),
      'type' => 'field_collection_fieldset',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_groups-field_groups_image'
  $field_instances['taxonomy_term-product_groups-field_groups_image'] = array(
    'bundle' => 'product_groups',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_image',
    'label' => 'Изображение для страницы групп',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_groups-field_groups_images'
  $field_instances['taxonomy_term-product_groups-field_groups_images'] = array(
    'bundle' => 'product_groups',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fotorama',
        'settings' => array(
          'alwaysPadding' => 0,
          'arrowNext' => '',
          'arrowPrev' => '',
          'arrows' => TRUE,
          'arrowsColor' => '',
          'aspectRatio' => 'auto',
          'autoplay' => '',
          'background' => '',
          'caption' => 'none',
          'click' => TRUE,
          'cropToFit' => 0,
          'dotColor' => '',
          'field_formatter_class' => '',
          'fitToWindowHeight' => 0,
          'flexible' => 0,
          'fullscreen' => 0,
          'fullscreenIcon' => 0,
          'hash' => 0,
          'height' => 'auto',
          'loop' => 0,
          'margin' => 5,
          'minPadding' => 10,
          'nav' => 'thumbs',
          'navBackground' => '',
          'navPosition' => 'auto',
          'preload' => 3,
          'preloader' => 'dark',
          'shadows' => TRUE,
          'startImg' => 1,
          'stopAutoplayOnAction' => TRUE,
          'thumbBorderColor' => '',
          'thumbBorderWidth' => 3,
          'thumbMargin' => 5,
          'thumbSize' => '',
          'touchStyle' => TRUE,
          'transitionDuration' => 333,
          'vertical' => 0,
          'width' => 'auto',
          'zoomToFit' => TRUE,
        ),
        'type' => 'fotorama',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_images',
    'label' => 'Изображения',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_groups-field_groups_main_group'
  $field_instances['taxonomy_term-product_groups-field_groups_main_group'] = array(
    'bundle' => 'product_groups',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_main_group',
    'label' => 'Главная группа товаров',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_groups-field_groups_note'
  $field_instances['taxonomy_term-product_groups-field_groups_note'] = array(
    'bundle' => 'product_groups',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_note',
    'label' => 'Сноска',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_groups-field_groups_short_description'
  $field_instances['taxonomy_term-product_groups-field_groups_short_description'] = array(
    'bundle' => 'product_groups',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_groups_short_description',
    'label' => 'Краткое описание',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_producers-field_producer_city'
  $field_instances['taxonomy_term-product_producers-field_producer_city'] = array(
    'bundle' => 'product_producers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_producer_city',
    'label' => 'Город',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-product_producers-field_producer_country'
  $field_instances['taxonomy_term-product_producers-field_producer_country'] = array(
    'bundle' => 'product_producers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_producer_country',
    'label' => 'Страна',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Поиск',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add to cart');
  t('Please enter this item\'s price.');
  t('Бирка');
  t('Высота');
  t('Главная группа товаров');
  t('Город');
  t('Группа товаров');
  t('Длина');
  t('Значение характеристики');
  t('Изображение');
  t('Изображение для страницы групп');
  t('Изображения');
  t('Количество');
  t('Кратко');
  t('Краткое описание');
  t('Название характеристики');
  t('Области применения ');
  t('Область применения');
  t('Описание линейки');
  t('Особенности материала');
  t('Подробнее');
  t('Полное описание');
  t('Преимущества группы');
  t('Производитель');
  t('Сертификаты');
  t('Сноска');
  t('Страна');
  t('Текст');
  t('Технические характеристики');
  t('Тип упаковки');
  t('Товары');
  t('Упаковка');
  t('Фактоиды');
  t('Цена');
  t('Цена. Старая');
  t('Ширина');

  return $field_instances;
}
