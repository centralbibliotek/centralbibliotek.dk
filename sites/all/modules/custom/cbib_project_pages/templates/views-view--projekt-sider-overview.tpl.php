<?php

?>
<div class="project_page_description">Velkommen til Centralbibliotekernes sider om projektudvikling. På disse sider får du introduktioner til principper om godt projektarbejde og skabeloner, som kan anvendes i arbejdet med projekter. Indholdet på siderne er opdelt efter de forskellige faser i et projekt. God fornøjelse med arbejdet.</div>
<?php

foreach($view->result as $item) {
$node = node_load($item->nid);    
?>
<a title="<?php echo $node->title ?>" target="_self" href="/<?php echo drupal_get_path_alias("node/".$node->nid) ?> " class="project_page_view_block_link" target="_blank">

<div class="project_page_view_block_wrap">
<div class="project_page_view_block_title">
<h2 style="border-bottom: 1px solid #ff5479;"><b><?php echo $node->title; ?></b></h2>
</div>
<div class="project_page_view_block_descrip">
<?php echo render(field_view_field('node', $node, 'body','teaser')); ?>
</div>
</div>
</a>
<?php } ?>
