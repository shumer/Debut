/**
 * @file Plugin for replacement html tag P to BR .
 */

(function() {
  CKEDITOR.plugins.add('paragraph_replacement', {
    init: function(editor) {
      editor.addCommand('replace_paragraph', {
        exec: function(editor) {
          var $content = editor.getData();
          $content = $content.replace(/<p>/g,'');
          $content = $content.replace(/<\/p>/g,'<BR />');          
          editor.setData($content);
        }
      });
      editor.ui.addButton('ParagraphReplacement', {
        label: 'Replace P to BR',
        command: 'replace_paragraph',
        icon: this.path + 'icons/drupalbreak.png',
      });
    }
  });
})();