<style type="text/css">
@import url("darwincore.css");
</style>

<table id="gradient-style" summary="Darwin Core Record">
<thead>
<tr><td colspan="2" id="scientific">
<?php 
  $scientificName = $fields['field_taxonomic_name'];
  print t($scientificName->content)?>
</td></tr>

</thead>
    <tfoot>
    	<tr>
        	<td colspan="4">IE 6 users won't see the transparent background if the hack is not applied</td>
        </tr>
    </tfoot>
<tbody>
<?php foreach ($fields as $id => $field): ?>
<?php if ($field->raw) { ?>
<tr>
  <td><div id="name"><?php print t($field->label) ?>:</div></td>
  <td><div id="content"><?php print $field->raw; ?></div></td>
</tr>
<?php } ?>
<?php endforeach; ?>
</tbody>
</table>