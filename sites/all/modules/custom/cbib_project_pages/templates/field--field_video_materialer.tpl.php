<?php
foreach($items as $item)
{
     $file_path = drupal_realpath($item['#file']->uri);
     $thumbnail_uri = cbib_project_create_video_preview_thumbnail($file_path,$item['#file']->fid);
     
     $style = "medium";
     $filename = "thumb_".$style."_".$item['#file']->fid.".jpg";
     $targetfolder = 'public://styles/' . $style ."/public/videothumbs/" .$filename;
     image_style_create_derivative(image_style_load($style),$thumbnail_uri,$targetfolder);
     //$test = image_style_url('Large',$thumbnail_uri);
     ?>
     <div class="cbib_project_video_preview_play_btn_wrap">
     <?php
     echo theme('image_style', array('style_name' => $style, 'path' => "videothumbs/".$filename));
     ?>
     <a target="_blank" href="<?php echo file_create_url($item['#file']->uri); ?>"><i class="fa fa-play cbib_project_video_preview_play_btn"></i></a>
     </div>

<?php     
}
//Check if preview exists for file

    //if not then create

//display video if preview creation success
