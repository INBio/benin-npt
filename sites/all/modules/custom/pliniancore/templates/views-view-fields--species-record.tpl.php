<style type="text/css">
@import url("pliniancore.css");
</style>

<table id="gradient-style" summary="Plinian Core Record">
<thead>
<tr><td colspan="2" id="scientific">
<?php 
  $scientificName = $fields['field_taxonomic_name'];
  print t($scientificName->content)?>
</td></tr>

</thead>
<tbody>

<tr><td colspan="2" id="groups">
<?php print t("General Information")?>
</td></tr>

<tr>
  <td><div id="name"><?php print t($fields['institution_code']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['institution_code']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['author_year_of_scientific_name']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['author_year_of_scientific_name']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['abstract']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['abstract']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['global_unique_identifier']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['global_unique_identifier']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['scientific_description']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['scientific_description']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['date_created']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['date_created']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['creators']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['creators']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['date_last_modified']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['date_last_modified']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['taxon_record_id']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['taxon_record_id']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['contributors']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['contributors']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['target_audiences']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['target_audiences']->content; ?></div></td>
</tr>


<?php if (isset($fields['language'])) { ?>
<tr>
  <td><div id="name"><?php print t($fields['language']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['language']->content; ?></div></td>
</tr>
<?php } ?>

<tr><td colspan="2" id="groups">
<?php print t("Taxonomic Information")?>
</td></tr>

<tr>
  <td><div id="name"><?php print t($fields['kingdom']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['kingdom']->content; ?></div></td>
</tr>
<tr>
  <td><div id="name"><?php print t($fields['phylum']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['phylum']->content; ?></div></td>
</tr>
<tr>
  <td><div id="name"><?php print t($fields['class']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['class']->content; ?></div></td>
</tr>
<tr>
  <td><div id="name"><?php print t($fields['order']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['order']->content; ?></div></td>
</tr>
<tr>
  <td><div id="name"><?php print t($fields['family']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['family']->content; ?></div></td>
</tr>
<tr>
  <td><div id="name"><?php print t($fields['genus']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['genus']->content; ?></div></td>
</tr>
<tr>
  <td><div id="name"><?php print t($fields['common_names']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['common_names']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['synonyms']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['synonyms']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['species_publication_reference']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['species_publication_reference']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['molecular_data']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['molecular_data']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['references']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['references']->content; ?></div></td>
</tr>


<tr><td colspan="2" id="groups">
<?php print t("Natural History")?>
</td></tr>
<tr>
  <td><div id="name"><?php print t($fields['habit']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['habit']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['migratory_data']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['migratory_data']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['life_cycle']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['life_cycle']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['reproduction']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['reproduction']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['annual_cycle']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['annual_cycle']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['feeding']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['feeding']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['behavior']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['behavior']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['interactions']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['interactions']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['habitat']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['habitat']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['territory']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['territory']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['uses']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['uses']->content; ?></div></td>
</tr>

<?php if (isset($fields['typification'])) { ?>
<tr>
  <td><div id="name"><?php print t($fields['typification']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['typification']->content; ?></div></td>
</tr>
<?php } ?>

<tr>
  <td><div id="name"><?php print t($fields['endemicity']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['endemicity']->content; ?></div></td>
</tr>


<tr>
  <td><div id="name"><?php print t($fields['population_biology']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['population_biology']->content; ?></div></td>
</tr>


<tr>
  <td><div id="name"><?php print t($fields['management']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['management']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['invasiveness_data']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['invasiveness_data']->content; ?></div></td>
</tr>


<tr>
  <td><div id="name"><?php print t($fields['distribution']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['distribution']->content; ?></div></td>
</tr>

<tr><td colspan="2" id="groups">
<?php print t("Demography and Conservation")?>
</td></tr>

<tr>
  <td><div id="name"><?php print t($fields['threat_status']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['threat_status']->content; ?></div></td>
</tr>

<tr>
  <td><div id="name"><?php print t($fields['legislation']->label) ?>:</div></td>
  <td><div id="content"><?php print $fields['legislation']->content; ?></div></td>
</tr>


</tbody>
</table>