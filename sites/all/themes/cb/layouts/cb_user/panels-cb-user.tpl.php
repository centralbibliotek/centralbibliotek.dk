<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>

<?php 
/*global $user;
  if (in_array('administrator', $user->roles) ){
    echo "<span class='user-button'>Administrator</span>";} 
  else if (in_array('authenticated user', $user->roles) && $user->uid == $renderer->display->args[0] ){
    echo "<span class='user-button'>Egen profil</span>";}
  else if (in_array('authenticated user', $user->roles) ){
    echo "<span class='user-button'>Andres profil</span>";}
  else echo "<div class='user-button'>Anonym bruger</div>";
*/
?>

<div class="panel-display panel-cb-user clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

    <?php if ($content['info']): ?>
      <div class="panel-panel panel-col-info">
        <div class="inside"><?php print $content['info']; ?></div>
      </div>
    <?php endif ?>


    <?php if ($content['top_left']): ?>
      <div class="panel-panel panel-col-top-left card">
        <div class="inside"><?php print $content['top_left']; ?></div>
      </div>
    <?php endif ?>
    <?php if ($content['top_right']): ?>
      <div class="panel-panel panel-col-top-right">
        <?php print $content['top_right']; ?>
      </div>
    <?php endif ?>


    <?php if ($content['center']): ?>
        <div class="panel-panel panel-col-center">
          <div class="inside"><?php print $content['center']; ?></div>
        </div>
      <?php endif ?>
 
      <?php if ($content['middle_left']): ?>
        <div class="panel-panel panel-col-middle-left">
          <div class="inside"><?php print $content['middle_left']; ?></div>
        </div>
      <?php endif ?>
      <?php if ($content['middle_right']): ?>
        <div class="panel-panel panel-col-middle-right">
          <div class="inside"><?php print $content['middle_right']; ?></div>
        </div>
      <?php endif ?>



    <?php if ($content['bottom_left']): ?>
      <div class="panel-panel panel-col-bottom-left">
        <div class="inside"><?php print $content['bottom_left']; ?></div>
      </div>
    <?php endif ?>
    <?php if ($content['bottom_center']): ?>
      <div class="panel-panel panel-col-bottom-center">
        <div class="inside"><?php print $content['bottom_center']; ?></div>
      </div>
    <?php endif ?>

    <?php if ($content['bottom_right']): ?>
        <div class="panel-panel panel-col-bottom-right">
          <div class="inside"><?php print $content['bottom_right']; ?></div>
        </div>
      <?php endif ?>

</div>
