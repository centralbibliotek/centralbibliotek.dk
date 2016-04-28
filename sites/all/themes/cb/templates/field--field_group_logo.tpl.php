<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>
          
          
           <?php  
           if(isset($element['#object']->view)){
               $html_image =  render($item);
                if(isset($item['#item']['field_kilde']['und'][0]['value']))
                {
                     $photo_source = $item['#item']['field_kilde']['und'][0]['value'];
                    $dom = new DOMDocument();
                    $dom->loadHTML($html_image);
                    # remove <!DOCTYPE 
                    $dom->removeChild($dom->doctype);           

                    # remove <html><body></body></html> 
                    $dom->replaceChild($dom->firstChild->firstChild->firstChild, $dom->firstChild);
                    foreach ($dom->getElementsByTagName('img') as $item) {
                        if($item->hasAttribute('title'))
                        {
                            $old_string =  $item->getAttribute('title');
                            $old_string = utf8_decode($old_string) ."\r\n" .t('Photo: ') . $photo_source;
                            $item->setAttribute('title',  $old_string);
                        }
                        else
                        {
                           $item->setAttribute('title', t('Photo: ') . $photo_source);
                        }
                    }
                    $html_image = $dom->saveHTML();
                }
               print $html_image;
           }
           else
           {
                print render($item);
                if(isset($item['#item']['field_kilde']['und'][0]['value']))
                {
                    echo "<div class='field_kilde'>".t('Photo: ').$item['#item']['field_kilde']['und'][0]['value'] . "</div>"; //;
                }
           }?>
      </div>
       <?php endforeach; ?>
  </div>
</div>
   

