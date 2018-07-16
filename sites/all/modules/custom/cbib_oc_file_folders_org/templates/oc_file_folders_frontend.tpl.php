<div class="oc_file_folder_wrapper">
<?php 
echo "<div id='0'>";
foreach($items as $key => $item)
{
    if($item['data']['#default_value']['is_folder'])
    {
        $class = 'oc-is-folder file';
        $folder_name = isset($item['data']['#file']['description']) ? $item['data']['#file']['description'] : $item['data']['name'];
        echo "<div class='".$class."'><img style='margin-right:3px' src='/".drupal_get_path('module', 'cbib_oc_file_folders_org') . "/images/folder.png"."'><a class='' id='".$item['data']['mlid']['#value']."' >" .$folder_name ."</a></div>";
    }
    else
    {
        $file = file_load($item['data']['#file']['fid']);
        if(!empty( $item['data']['#file']['description']))
        {
            $file->description = $item['data']['#file']['description'];
        }
         echo "<div>" .  theme_file_link(array('file' => $file)) . "</div>";
    }
}
echo "</div>";
foreach($items as $key => $item)
{
    echo oc_file_folders_render_children_frontend($item['children'],$item['data']['mlid']['#value']);
}
?>
</div>