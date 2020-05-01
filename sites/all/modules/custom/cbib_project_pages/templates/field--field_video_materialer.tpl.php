<?php
foreach($items as $item)
{
     $file_path = drupal_realpath($item['#file']->uri);
     $thumbnail_uri = cbib_project_create_video_preview_thumbnail($file_path,$item['#file']->fid);
     
     $style = "teaser";
     $filename = "thumb_".$style."_".$item['#file']->fid.".jpg";
     $targetfolder = 'public://styles/' . $style ."/public/videothumbs/" .$filename;
     image_style_create_derivative(image_style_load($style),$thumbnail_uri,$targetfolder);
     //$test = image_style_url('Large',$thumbnail_uri);

     echo theme('image_style', array('style_name' => $style, 'path' => "videothumbs/".$filename));
}
//Check if preview exists for file

    //if not then create

//display video if preview creation success
