<?php
/**
 * @file
 * debut_feature_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function debut_feature_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_--:press_list
  $menu_links['main-menu_--:press_list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'press_list',
    'router_path' => 'press_list',
    'link_title' => 'Пресса о премии',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_--:press_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_-:<front>
  $menu_links['main-menu_-:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Летопись Дебюта',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_-:http://fondskocha.ru/
  $menu_links['main-menu_-:http://fondskocha.ru/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://fondskocha.ru/',
    'router_path' => '',
    'link_title' => 'Фонд «Поколение»',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_-:http://fondskocha.ru/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_-:master_class
  $menu_links['main-menu_-:master_class'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'master_class',
    'router_path' => 'master_class',
    'link_title' => 'Мастер-классы',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_-:master_class',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_-:<front>',
  );
  // Exported menu link: main-menu_-:nobel_speech
  $menu_links['main-menu_-:nobel_speech'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'nobel_speech',
    'router_path' => 'nobel_speech',
    'link_title' => '«Нобелевские речи»',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_-:nobel_speech',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_-:<front>',
  );
  // Exported menu link: main-menu_-:prize_jury
  $menu_links['main-menu_-:prize_jury'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'prize_jury',
    'router_path' => 'prize_jury',
    'link_title' => 'Жюри премии',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_-:prize_jury',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_-:prize_persons
  $menu_links['main-menu_-:prize_persons'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'prize_persons',
    'router_path' => 'prize_persons',
    'link_title' => 'Лица премии',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_-:prize_persons',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_-:send_manuscript
  $menu_links['main-menu_-:send_manuscript'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'send_manuscript',
    'router_path' => 'send_manuscript',
    'link_title' => 'Отправить рукопись',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_-:send_manuscript',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_-i:ikniga
  $menu_links['main-menu_-i:ikniga'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ikniga',
    'router_path' => 'ikniga',
    'link_title' => 'Проект iКнига',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_-i:ikniga',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:books_list
  $menu_links['main-menu_:books_list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'books_list',
    'router_path' => 'books_list',
    'link_title' => 'Книги',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_:books_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:documents_list
  $menu_links['main-menu_:documents_list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'documents_list',
    'router_path' => 'documents_list',
    'link_title' => 'Документы',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_:documents_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:news_list
  $menu_links['main-menu_:news_list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news_list',
    'router_path' => 'news_list',
    'link_title' => 'Новости',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_:news_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:photo_listing
  $menu_links['main-menu_:photo_listing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'photo_listing',
    'router_path' => 'photo_listing',
    'link_title' => 'Фоторепортажи',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_:photo_listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:travels
  $menu_links['main-menu_:travels'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'travels',
    'router_path' => 'travels',
    'link_title' => 'Поездки',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_:travels',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_-:<front>',
  );
  // Exported menu link: main-menu_:video_list
  $menu_links['main-menu_:video_list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'video_list',
    'router_path' => 'video_list',
    'link_title' => 'Видео',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_:video_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_--:press_list
  $menu_links['menu-main-menu-mobile_--:press_list'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'press_list',
    'router_path' => 'press_list',
    'link_title' => 'Пресса о премии',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_--:press_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_-:<front>
  $menu_links['menu-main-menu-mobile_-:<front>'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Летопись Дебюта',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_-:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_-:http://fondskocha.ru/
  $menu_links['menu-main-menu-mobile_-:http://fondskocha.ru/'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'http://fondskocha.ru/',
    'router_path' => '',
    'link_title' => 'Фонд «Поколение»',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_-:http://fondskocha.ru/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_-:master_class
  $menu_links['menu-main-menu-mobile_-:master_class'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'master_class',
    'router_path' => 'master_class',
    'link_title' => 'Мастер-классы',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_-:master_class',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-main-menu-mobile_-:<front>',
  );
  // Exported menu link: menu-main-menu-mobile_-:nobel_speech
  $menu_links['menu-main-menu-mobile_-:nobel_speech'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'nobel_speech',
    'router_path' => 'nobel_speech',
    'link_title' => '«Нобелевские речи»',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_-:nobel_speech',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-main-menu-mobile_-:<front>',
  );
  // Exported menu link: menu-main-menu-mobile_-:prize_jury
  $menu_links['menu-main-menu-mobile_-:prize_jury'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'prize_jury',
    'router_path' => 'prize_jury',
    'link_title' => 'Жюри премии',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_-:prize_jury',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_-:prize_persons
  $menu_links['menu-main-menu-mobile_-:prize_persons'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'prize_persons',
    'router_path' => 'prize_persons',
    'link_title' => 'Лица премии',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_-:prize_persons',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_-:send_manuscript
  $menu_links['menu-main-menu-mobile_-:send_manuscript'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'send_manuscript',
    'router_path' => 'send_manuscript',
    'link_title' => 'Правила подачи',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_-:send_manuscript',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_-i:ikniga
  $menu_links['menu-main-menu-mobile_-i:ikniga'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'ikniga',
    'router_path' => 'ikniga',
    'link_title' => 'Проект iКнига',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_-i:ikniga',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_:books_list
  $menu_links['menu-main-menu-mobile_:books_list'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'books_list',
    'router_path' => 'books_list',
    'link_title' => 'Книги',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_:books_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_:documents_list
  $menu_links['menu-main-menu-mobile_:documents_list'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'documents_list',
    'router_path' => 'documents_list',
    'link_title' => 'Документы',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_:documents_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_:news_list
  $menu_links['menu-main-menu-mobile_:news_list'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'news_list',
    'router_path' => 'news_list',
    'link_title' => 'Новости',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_:news_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_:photo_listing
  $menu_links['menu-main-menu-mobile_:photo_listing'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'photo_listing',
    'router_path' => 'photo_listing',
    'link_title' => 'Фоторепортажи',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_:photo_listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-mobile_:travels
  $menu_links['menu-main-menu-mobile_:travels'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'travels',
    'router_path' => 'travels',
    'link_title' => 'Поездки',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_:travels',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-main-menu-mobile_-:<front>',
  );
  // Exported menu link: menu-main-menu-mobile_:video_list
  $menu_links['menu-main-menu-mobile_:video_list'] = array(
    'menu_name' => 'menu-main-menu-mobile',
    'link_path' => 'video_list',
    'router_path' => 'video_list',
    'link_title' => 'Видео',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-main-menu-mobile_:video_list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('«Нобелевские речи»');
  t('Видео');
  t('Документы');
  t('Жюри премии');
  t('Книги');
  t('Летопись Дебюта');
  t('Лица премии');
  t('Мастер-классы');
  t('Новости');
  t('Отправить рукопись');
  t('Поездки');
  t('Правила подачи');
  t('Пресса о премии');
  t('Проект iКнига');
  t('Фонд «Поколение»');
  t('Фоторепортажи');


  return $menu_links;
}
