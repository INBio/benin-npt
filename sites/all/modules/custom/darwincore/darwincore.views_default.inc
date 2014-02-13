<?php



/**
 * Implementation of hook_views_default_views().
 */
function darwincore_views_default_views(){
	$view = new view();
	$view->name = 'specimen_record';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'specimen_record';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'specimen_record';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'basis_of_record' => 'basis_of_record',
  'catalog_number' => 'catalog_number',
  'collection_code' => 'collection_code',
  'institution_code' => 'institution_code',
  'decimal_latitude' => 'decimal_latitude',
  'decimal_longitude' => 'decimal_longitude',
  'field_taxonomic_name' => 'field_taxonomic_name',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'basis_of_record' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'catalog_number' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'collection_code' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'institution_code' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'decimal_latitude' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'decimal_longitude' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_taxonomic_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Field: Content: Scientific Name */
$handler->display->display_options['fields']['field_taxonomic_name']['id'] = 'field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['table'] = 'field_data_field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['field'] = 'field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['alter']['path'] = 'darwincore/%2';
$handler->display->display_options['fields']['field_taxonomic_name']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['field_taxonomic_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_taxonomic_name']['type'] = 'taxonomy_term_reference_plain';
/* Field: Darwin Core Fields: Institution Code */
$handler->display->display_options['fields']['institution_code']['id'] = 'institution_code';
$handler->display->display_options['fields']['institution_code']['table'] = 'darwincore';
$handler->display->display_options['fields']['institution_code']['field'] = 'institution_code';
/* Field: Darwin Core Fields: Catalog Number */
$handler->display->display_options['fields']['catalog_number']['id'] = 'catalog_number';
$handler->display->display_options['fields']['catalog_number']['table'] = 'darwincore';
$handler->display->display_options['fields']['catalog_number']['field'] = 'catalog_number';
/* Field: Darwin Core Fields: Collection Code */
$handler->display->display_options['fields']['collection_code']['id'] = 'collection_code';
$handler->display->display_options['fields']['collection_code']['table'] = 'darwincore';
$handler->display->display_options['fields']['collection_code']['field'] = 'collection_code';
/* Field: Darwin Core Fields: Basis of Record */
$handler->display->display_options['fields']['basis_of_record']['id'] = 'basis_of_record';
$handler->display->display_options['fields']['basis_of_record']['table'] = 'darwincore';
$handler->display->display_options['fields']['basis_of_record']['field'] = 'basis_of_record';
/* Field: Darwin Core Fields: Decimal Latitude */
$handler->display->display_options['fields']['decimal_latitude']['id'] = 'decimal_latitude';
$handler->display->display_options['fields']['decimal_latitude']['table'] = 'darwincore';
$handler->display->display_options['fields']['decimal_latitude']['field'] = 'decimal_latitude';
$handler->display->display_options['fields']['decimal_latitude']['label'] = 'Latitude';
/* Field: Darwin Core Fields: Decimal Longitude */
$handler->display->display_options['fields']['decimal_longitude']['id'] = 'decimal_longitude';
$handler->display->display_options['fields']['decimal_longitude']['table'] = 'darwincore';
$handler->display->display_options['fields']['decimal_longitude']['field'] = 'decimal_longitude';
$handler->display->display_options['fields']['decimal_longitude']['label'] = 'Longitude';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'View more...';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'View more...';
$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['path'] = 'darwincore/[nid]';
$handler->display->display_options['fields']['nid']['alter']['target'] = '_blank';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'darwincore' => 'darwincore',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'node/%/darwincore';


	$views[$view->name] = $view;
	
	
	
	
	
	
	
	
	
	
	
$view = new view();
$view->name = 'specimen_record_individual';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'specimen_record_individual';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = '<none>';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['uses_fields'] = TRUE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Darwin Core Fields: Accepted Name Usage */
$handler->display->display_options['fields']['accepted_name_usage']['id'] = 'accepted_name_usage';
$handler->display->display_options['fields']['accepted_name_usage']['table'] = 'darwincore';
$handler->display->display_options['fields']['accepted_name_usage']['field'] = 'accepted_name_usage';
/* Field: Darwin Core Fields: Accepted Name Usage ID */
$handler->display->display_options['fields']['accepted_name_usage_id']['id'] = 'accepted_name_usage_id';
$handler->display->display_options['fields']['accepted_name_usage_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['accepted_name_usage_id']['field'] = 'accepted_name_usage_id';
/* Field: Darwin Core Fields: Access Rights */
$handler->display->display_options['fields']['access_rights']['id'] = 'access_rights';
$handler->display->display_options['fields']['access_rights']['table'] = 'darwincore';
$handler->display->display_options['fields']['access_rights']['field'] = 'access_rights';
/* Field: Darwin Core Fields: Associated Media */
$handler->display->display_options['fields']['associated_media']['id'] = 'associated_media';
$handler->display->display_options['fields']['associated_media']['table'] = 'darwincore';
$handler->display->display_options['fields']['associated_media']['field'] = 'associated_media';
/* Field: Darwin Core Fields: Associated Occurrences */
$handler->display->display_options['fields']['associated_occurrences']['id'] = 'associated_occurrences';
$handler->display->display_options['fields']['associated_occurrences']['table'] = 'darwincore';
$handler->display->display_options['fields']['associated_occurrences']['field'] = 'associated_occurrences';
/* Field: Darwin Core Fields: Associated References */
$handler->display->display_options['fields']['associated_references']['id'] = 'associated_references';
$handler->display->display_options['fields']['associated_references']['table'] = 'darwincore';
$handler->display->display_options['fields']['associated_references']['field'] = 'associated_references';
/* Field: Darwin Core Fields: Associated Sequences */
$handler->display->display_options['fields']['associated_sequences']['id'] = 'associated_sequences';
$handler->display->display_options['fields']['associated_sequences']['table'] = 'darwincore';
$handler->display->display_options['fields']['associated_sequences']['field'] = 'associated_sequences';
/* Field: Darwin Core Fields: Associated Taxa */
$handler->display->display_options['fields']['associated_taxa']['id'] = 'associated_taxa';
$handler->display->display_options['fields']['associated_taxa']['table'] = 'darwincore';
$handler->display->display_options['fields']['associated_taxa']['field'] = 'associated_taxa';
/* Field: Darwin Core Fields: Basis of Record */
$handler->display->display_options['fields']['basis_of_record']['id'] = 'basis_of_record';
$handler->display->display_options['fields']['basis_of_record']['table'] = 'darwincore';
$handler->display->display_options['fields']['basis_of_record']['field'] = 'basis_of_record';
/* Field: Darwin Core Fields: Bed */
$handler->display->display_options['fields']['bed']['id'] = 'bed';
$handler->display->display_options['fields']['bed']['table'] = 'darwincore';
$handler->display->display_options['fields']['bed']['field'] = 'bed';
/* Field: Darwin Core Fields: Behavior */
$handler->display->display_options['fields']['behavior']['id'] = 'behavior';
$handler->display->display_options['fields']['behavior']['table'] = 'darwincore';
$handler->display->display_options['fields']['behavior']['field'] = 'behavior';
/* Field: Darwin Core Fields: Bibliographic Citation */
$handler->display->display_options['fields']['bibliographic_citation']['id'] = 'bibliographic_citation';
$handler->display->display_options['fields']['bibliographic_citation']['table'] = 'darwincore';
$handler->display->display_options['fields']['bibliographic_citation']['field'] = 'bibliographic_citation';
/* Field: Darwin Core Fields: Catalog Number */
$handler->display->display_options['fields']['catalog_number']['id'] = 'catalog_number';
$handler->display->display_options['fields']['catalog_number']['table'] = 'darwincore';
$handler->display->display_options['fields']['catalog_number']['field'] = 'catalog_number';
/* Field: Darwin Core Fields: Class */
$handler->display->display_options['fields']['class']['id'] = 'class';
$handler->display->display_options['fields']['class']['table'] = 'darwincore';
$handler->display->display_options['fields']['class']['field'] = 'class';
/* Field: Darwin Core Fields: Collection Code */
$handler->display->display_options['fields']['collection_code']['id'] = 'collection_code';
$handler->display->display_options['fields']['collection_code']['table'] = 'darwincore';
$handler->display->display_options['fields']['collection_code']['field'] = 'collection_code';
/* Field: Darwin Core Fields: Collection ID */
$handler->display->display_options['fields']['collection_id']['id'] = 'collection_id';
$handler->display->display_options['fields']['collection_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['collection_id']['field'] = 'collection_id';
/* Field: Darwin Core Fields: Continent */
$handler->display->display_options['fields']['continent']['id'] = 'continent';
$handler->display->display_options['fields']['continent']['table'] = 'darwincore';
$handler->display->display_options['fields']['continent']['field'] = 'continent';
/* Field: Darwin Core Fields: Coordinate Precision */
$handler->display->display_options['fields']['coordinate_precision']['id'] = 'coordinate_precision';
$handler->display->display_options['fields']['coordinate_precision']['table'] = 'darwincore';
$handler->display->display_options['fields']['coordinate_precision']['field'] = 'coordinate_precision';
/* Field: Darwin Core Fields: Coordinate Uncertainty in Meters */
$handler->display->display_options['fields']['coordinate_uncertainty_in_meters']['id'] = 'coordinate_uncertainty_in_meters';
$handler->display->display_options['fields']['coordinate_uncertainty_in_meters']['table'] = 'darwincore';
$handler->display->display_options['fields']['coordinate_uncertainty_in_meters']['field'] = 'coordinate_uncertainty_in_meters';
/* Field: Darwin Core Fields: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'darwincore';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Field: Darwin Core Fields: Country Code */
$handler->display->display_options['fields']['country_code']['id'] = 'country_code';
$handler->display->display_options['fields']['country_code']['table'] = 'darwincore';
$handler->display->display_options['fields']['country_code']['field'] = 'country_code';
/* Field: Darwin Core Fields: County */
$handler->display->display_options['fields']['county']['id'] = 'county';
$handler->display->display_options['fields']['county']['table'] = 'darwincore';
$handler->display->display_options['fields']['county']['field'] = 'county';
/* Field: Darwin Core Fields: Data Generalizations */
$handler->display->display_options['fields']['data_generalizations']['id'] = 'data_generalizations';
$handler->display->display_options['fields']['data_generalizations']['table'] = 'darwincore';
$handler->display->display_options['fields']['data_generalizations']['field'] = 'data_generalizations';
/* Field: Darwin Core Fields: Dataset ID */
$handler->display->display_options['fields']['dataset_id']['id'] = 'dataset_id';
$handler->display->display_options['fields']['dataset_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['dataset_id']['field'] = 'dataset_id';
/* Field: Darwin Core Fields: Dataset Name */
$handler->display->display_options['fields']['dataset_name']['id'] = 'dataset_name';
$handler->display->display_options['fields']['dataset_name']['table'] = 'darwincore';
$handler->display->display_options['fields']['dataset_name']['field'] = 'dataset_name';
/* Field: Darwin Core Fields: Date Identified */
$handler->display->display_options['fields']['date_identified']['id'] = 'date_identified';
$handler->display->display_options['fields']['date_identified']['table'] = 'darwincore';
$handler->display->display_options['fields']['date_identified']['field'] = 'date_identified';
/* Field: Darwin Core Fields: Day */
$handler->display->display_options['fields']['day']['id'] = 'day';
$handler->display->display_options['fields']['day']['table'] = 'darwincore';
$handler->display->display_options['fields']['day']['field'] = 'day';
/* Field: Darwin Core Fields: Decimal Latitude */
$handler->display->display_options['fields']['decimal_latitude']['id'] = 'decimal_latitude';
$handler->display->display_options['fields']['decimal_latitude']['table'] = 'darwincore';
$handler->display->display_options['fields']['decimal_latitude']['field'] = 'decimal_latitude';
/* Field: Darwin Core Fields: Decimal Longitude */
$handler->display->display_options['fields']['decimal_longitude']['id'] = 'decimal_longitude';
$handler->display->display_options['fields']['decimal_longitude']['table'] = 'darwincore';
$handler->display->display_options['fields']['decimal_longitude']['field'] = 'decimal_longitude';
/* Field: Darwin Core Fields: Disposition */
$handler->display->display_options['fields']['disposition']['id'] = 'disposition';
$handler->display->display_options['fields']['disposition']['table'] = 'darwincore';
$handler->display->display_options['fields']['disposition']['field'] = 'disposition';
/* Field: Darwin Core Fields: Dynamic Properties */
$handler->display->display_options['fields']['dynamic_properties']['id'] = 'dynamic_properties';
$handler->display->display_options['fields']['dynamic_properties']['table'] = 'darwincore';
$handler->display->display_options['fields']['dynamic_properties']['field'] = 'dynamic_properties';
/* Field: Darwin Core Fields: Earliest Age or Lowest Stage */
$handler->display->display_options['fields']['earliest_age_or_lowest_stage']['id'] = 'earliest_age_or_lowest_stage';
$handler->display->display_options['fields']['earliest_age_or_lowest_stage']['table'] = 'darwincore';
$handler->display->display_options['fields']['earliest_age_or_lowest_stage']['field'] = 'earliest_age_or_lowest_stage';
/* Field: Darwin Core Fields: Earliest Eon or Lowest Eonothem */
$handler->display->display_options['fields']['earliest_eon_or_lowest_eonothem']['id'] = 'earliest_eon_or_lowest_eonothem';
$handler->display->display_options['fields']['earliest_eon_or_lowest_eonothem']['table'] = 'darwincore';
$handler->display->display_options['fields']['earliest_eon_or_lowest_eonothem']['field'] = 'earliest_eon_or_lowest_eonothem';
/* Field: Darwin Core Fields: Earliest Epoch or Lowest Series */
$handler->display->display_options['fields']['earliest_epoch_or_lowest_series']['id'] = 'earliest_epoch_or_lowest_series';
$handler->display->display_options['fields']['earliest_epoch_or_lowest_series']['table'] = 'darwincore';
$handler->display->display_options['fields']['earliest_epoch_or_lowest_series']['field'] = 'earliest_epoch_or_lowest_series';
/* Field: Darwin Core Fields: Earliest Era or Llowest Erathem */
$handler->display->display_options['fields']['earliest_era_or_lowest_erathem']['id'] = 'earliest_era_or_lowest_erathem';
$handler->display->display_options['fields']['earliest_era_or_lowest_erathem']['table'] = 'darwincore';
$handler->display->display_options['fields']['earliest_era_or_lowest_erathem']['field'] = 'earliest_era_or_lowest_erathem';
/* Field: Darwin Core Fields: Earliest Period or Lowest System */
$handler->display->display_options['fields']['earliest_period_or_lowest_system']['id'] = 'earliest_period_or_lowest_system';
$handler->display->display_options['fields']['earliest_period_or_lowest_system']['table'] = 'darwincore';
$handler->display->display_options['fields']['earliest_period_or_lowest_system']['field'] = 'earliest_period_or_lowest_system';
/* Field: Darwin Core Fields: End Day of Year */
$handler->display->display_options['fields']['end_day_of_year']['id'] = 'end_day_of_year';
$handler->display->display_options['fields']['end_day_of_year']['table'] = 'darwincore';
$handler->display->display_options['fields']['end_day_of_year']['field'] = 'end_day_of_year';
/* Field: Darwin Core Fields: Establishment Means */
$handler->display->display_options['fields']['establishment_means']['id'] = 'establishment_means';
$handler->display->display_options['fields']['establishment_means']['table'] = 'darwincore';
$handler->display->display_options['fields']['establishment_means']['field'] = 'establishment_means';
/* Field: Darwin Core Fields: Event Date */
$handler->display->display_options['fields']['event_date']['id'] = 'event_date';
$handler->display->display_options['fields']['event_date']['table'] = 'darwincore';
$handler->display->display_options['fields']['event_date']['field'] = 'event_date';
/* Field: Darwin Core Fields: Event ID */
$handler->display->display_options['fields']['event_id']['id'] = 'event_id';
$handler->display->display_options['fields']['event_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['event_id']['field'] = 'event_id';
/* Field: Darwin Core Fields: Event Remarks */
$handler->display->display_options['fields']['event_remarks']['id'] = 'event_remarks';
$handler->display->display_options['fields']['event_remarks']['table'] = 'darwincore';
$handler->display->display_options['fields']['event_remarks']['field'] = 'event_remarks';
/* Field: Darwin Core Fields: Event Time */
$handler->display->display_options['fields']['event_time']['id'] = 'event_time';
$handler->display->display_options['fields']['event_time']['table'] = 'darwincore';
$handler->display->display_options['fields']['event_time']['field'] = 'event_time';
/* Field: Darwin Core Fields: Family */
$handler->display->display_options['fields']['family']['id'] = 'family';
$handler->display->display_options['fields']['family']['table'] = 'darwincore';
$handler->display->display_options['fields']['family']['field'] = 'family';
/* Field: Darwin Core Fields: Field Notes */
$handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
$handler->display->display_options['fields']['field_notes']['table'] = 'darwincore';
$handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
/* Field: Darwin Core Fields: Field Number */
$handler->display->display_options['fields']['field_number']['id'] = 'field_number';
$handler->display->display_options['fields']['field_number']['table'] = 'darwincore';
$handler->display->display_options['fields']['field_number']['field'] = 'field_number';
/* Field: Darwin Core Fields: Footprint Spatial Fit */
$handler->display->display_options['fields']['footprint_spatial_fit']['id'] = 'footprint_spatial_fit';
$handler->display->display_options['fields']['footprint_spatial_fit']['table'] = 'darwincore';
$handler->display->display_options['fields']['footprint_spatial_fit']['field'] = 'footprint_spatial_fit';
/* Field: Darwin Core Fields: Footprint SRS */
$handler->display->display_options['fields']['footprint_srs']['id'] = 'footprint_srs';
$handler->display->display_options['fields']['footprint_srs']['table'] = 'darwincore';
$handler->display->display_options['fields']['footprint_srs']['field'] = 'footprint_srs';
/* Field: Darwin Core Fields: Footprint WKT */
$handler->display->display_options['fields']['footprint_wkt']['id'] = 'footprint_wkt';
$handler->display->display_options['fields']['footprint_wkt']['table'] = 'darwincore';
$handler->display->display_options['fields']['footprint_wkt']['field'] = 'footprint_wkt';
/* Field: Darwin Core Fields: Formation */
$handler->display->display_options['fields']['formation']['id'] = 'formation';
$handler->display->display_options['fields']['formation']['table'] = 'darwincore';
$handler->display->display_options['fields']['formation']['field'] = 'formation';
/* Field: Darwin Core Fields: Genus */
$handler->display->display_options['fields']['genus']['id'] = 'genus';
$handler->display->display_options['fields']['genus']['table'] = 'darwincore';
$handler->display->display_options['fields']['genus']['field'] = 'genus';
/* Field: Darwin Core Fields: Geodetic Datum */
$handler->display->display_options['fields']['geodetic_datum']['id'] = 'geodetic_datum';
$handler->display->display_options['fields']['geodetic_datum']['table'] = 'darwincore';
$handler->display->display_options['fields']['geodetic_datum']['field'] = 'geodetic_datum';
/* Field: Darwin Core Fields: Geological Context ID */
$handler->display->display_options['fields']['geological_context_id']['id'] = 'geological_context_id';
$handler->display->display_options['fields']['geological_context_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['geological_context_id']['field'] = 'geological_context_id';
/* Field: Darwin Core Fields: Georeference Protocol */
$handler->display->display_options['fields']['georeference_protocol']['id'] = 'georeference_protocol';
$handler->display->display_options['fields']['georeference_protocol']['table'] = 'darwincore';
$handler->display->display_options['fields']['georeference_protocol']['field'] = 'georeference_protocol';
/* Field: Darwin Core Fields: Georeference Remarks */
$handler->display->display_options['fields']['georeference_remarks']['id'] = 'georeference_remarks';
$handler->display->display_options['fields']['georeference_remarks']['table'] = 'darwincore';
$handler->display->display_options['fields']['georeference_remarks']['field'] = 'georeference_remarks';
/* Field: Darwin Core Fields: Georeference Sources */
$handler->display->display_options['fields']['georeference_sources']['id'] = 'georeference_sources';
$handler->display->display_options['fields']['georeference_sources']['table'] = 'darwincore';
$handler->display->display_options['fields']['georeference_sources']['field'] = 'georeference_sources';
/* Field: Darwin Core Fields: Georeference Verification Status */
$handler->display->display_options['fields']['georeference_verification_status']['id'] = 'georeference_verification_status';
$handler->display->display_options['fields']['georeference_verification_status']['table'] = 'darwincore';
$handler->display->display_options['fields']['georeference_verification_status']['field'] = 'georeference_verification_status';
/* Field: Darwin Core Fields: Georeferenced By */
$handler->display->display_options['fields']['georeferenced_by']['id'] = 'georeferenced_by';
$handler->display->display_options['fields']['georeferenced_by']['table'] = 'darwincore';
$handler->display->display_options['fields']['georeferenced_by']['field'] = 'georeferenced_by';
/* Field: Darwin Core Fields: Georeferenced Date */
$handler->display->display_options['fields']['georeferenced_date']['id'] = 'georeferenced_date';
$handler->display->display_options['fields']['georeferenced_date']['table'] = 'darwincore';
$handler->display->display_options['fields']['georeferenced_date']['field'] = 'georeferenced_date';
/* Field: Darwin Core Fields: Group */
$handler->display->display_options['fields']['group']['id'] = 'group';
$handler->display->display_options['fields']['group']['table'] = 'darwincore';
$handler->display->display_options['fields']['group']['field'] = 'group';
/* Field: Darwin Core Fields: Habitat */
$handler->display->display_options['fields']['habitat']['id'] = 'habitat';
$handler->display->display_options['fields']['habitat']['table'] = 'darwincore';
$handler->display->display_options['fields']['habitat']['field'] = 'habitat';
/* Field: Darwin Core Fields: Higher Classification */
$handler->display->display_options['fields']['higher_classification']['id'] = 'higher_classification';
$handler->display->display_options['fields']['higher_classification']['table'] = 'darwincore';
$handler->display->display_options['fields']['higher_classification']['field'] = 'higher_classification';
/* Field: Darwin Core Fields: Higher Geography */
$handler->display->display_options['fields']['higher_geography']['id'] = 'higher_geography';
$handler->display->display_options['fields']['higher_geography']['table'] = 'darwincore';
$handler->display->display_options['fields']['higher_geography']['field'] = 'higher_geography';
/* Field: Darwin Core Fields: Higher Geography ID */
$handler->display->display_options['fields']['higher_geography_id']['id'] = 'higher_geography_id';
$handler->display->display_options['fields']['higher_geography_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['higher_geography_id']['field'] = 'higher_geography_id';
/* Field: Darwin Core Fields: Highest Biostratigraphic Zone */
$handler->display->display_options['fields']['highest_biostratigraphic_zone']['id'] = 'highest_biostratigraphic_zone';
$handler->display->display_options['fields']['highest_biostratigraphic_zone']['table'] = 'darwincore';
$handler->display->display_options['fields']['highest_biostratigraphic_zone']['field'] = 'highest_biostratigraphic_zone';
/* Field: Darwin Core Fields: Identification ID */
$handler->display->display_options['fields']['identification_id']['id'] = 'identification_id';
$handler->display->display_options['fields']['identification_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['identification_id']['field'] = 'identification_id';
/* Field: Darwin Core Fields: Identification Qualifier */
$handler->display->display_options['fields']['identification_qualifier']['id'] = 'identification_qualifier';
$handler->display->display_options['fields']['identification_qualifier']['table'] = 'darwincore';
$handler->display->display_options['fields']['identification_qualifier']['field'] = 'identification_qualifier';
/* Field: Darwin Core Fields: Identification References */
$handler->display->display_options['fields']['identification_references']['id'] = 'identification_references';
$handler->display->display_options['fields']['identification_references']['table'] = 'darwincore';
$handler->display->display_options['fields']['identification_references']['field'] = 'identification_references';
/* Field: Darwin Core Fields: Identification Remarks */
$handler->display->display_options['fields']['identification_remarks']['id'] = 'identification_remarks';
$handler->display->display_options['fields']['identification_remarks']['table'] = 'darwincore';
$handler->display->display_options['fields']['identification_remarks']['field'] = 'identification_remarks';
/* Field: Darwin Core Fields: Identification Verification Status */
$handler->display->display_options['fields']['identification_verification_status']['id'] = 'identification_verification_status';
$handler->display->display_options['fields']['identification_verification_status']['table'] = 'darwincore';
$handler->display->display_options['fields']['identification_verification_status']['field'] = 'identification_verification_status';
/* Field: Darwin Core Fields: Identified By */
$handler->display->display_options['fields']['identified_by']['id'] = 'identified_by';
$handler->display->display_options['fields']['identified_by']['table'] = 'darwincore';
$handler->display->display_options['fields']['identified_by']['field'] = 'identified_by';
/* Field: Darwin Core Fields: Individual Count */
$handler->display->display_options['fields']['individual_count']['id'] = 'individual_count';
$handler->display->display_options['fields']['individual_count']['table'] = 'darwincore';
$handler->display->display_options['fields']['individual_count']['field'] = 'individual_count';
/* Field: Darwin Core Fields: Individual ID */
$handler->display->display_options['fields']['individual_id']['id'] = 'individual_id';
$handler->display->display_options['fields']['individual_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['individual_id']['field'] = 'individual_id';
/* Field: Darwin Core Fields: Information Withheld */
$handler->display->display_options['fields']['information_withheld']['id'] = 'information_withheld';
$handler->display->display_options['fields']['information_withheld']['table'] = 'darwincore';
$handler->display->display_options['fields']['information_withheld']['field'] = 'information_withheld';
/* Field: Darwin Core Fields: Infraspecific Epithet */
$handler->display->display_options['fields']['infraspecific_epithet']['id'] = 'infraspecific_epithet';
$handler->display->display_options['fields']['infraspecific_epithet']['table'] = 'darwincore';
$handler->display->display_options['fields']['infraspecific_epithet']['field'] = 'infraspecific_epithet';
/* Field: Darwin Core Fields: Institution Code */
$handler->display->display_options['fields']['institution_code']['id'] = 'institution_code';
$handler->display->display_options['fields']['institution_code']['table'] = 'darwincore';
$handler->display->display_options['fields']['institution_code']['field'] = 'institution_code';
/* Field: Darwin Core Fields: Institution ID */
$handler->display->display_options['fields']['institution_id']['id'] = 'institution_id';
$handler->display->display_options['fields']['institution_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['institution_id']['field'] = 'institution_id';
/* Field: Darwin Core Fields: Island */
$handler->display->display_options['fields']['island']['id'] = 'island';
$handler->display->display_options['fields']['island']['table'] = 'darwincore';
$handler->display->display_options['fields']['island']['field'] = 'island';
/* Field: Darwin Core Fields: Island Group */
$handler->display->display_options['fields']['island_group']['id'] = 'island_group';
$handler->display->display_options['fields']['island_group']['table'] = 'darwincore';
$handler->display->display_options['fields']['island_group']['field'] = 'island_group';
/* Field: Darwin Core Fields: Kingdom */
$handler->display->display_options['fields']['kingdom']['id'] = 'kingdom';
$handler->display->display_options['fields']['kingdom']['table'] = 'darwincore';
$handler->display->display_options['fields']['kingdom']['field'] = 'kingdom';
/* Field: Darwin Core Fields: Language */
$handler->display->display_options['fields']['language']['id'] = 'language';
$handler->display->display_options['fields']['language']['table'] = 'darwincore';
$handler->display->display_options['fields']['language']['field'] = 'language';
/* Field: Darwin Core Fields: Latest Age or Highest Stage */
$handler->display->display_options['fields']['latest_age_or_highest_stage']['id'] = 'latest_age_or_highest_stage';
$handler->display->display_options['fields']['latest_age_or_highest_stage']['table'] = 'darwincore';
$handler->display->display_options['fields']['latest_age_or_highest_stage']['field'] = 'latest_age_or_highest_stage';
/* Field: Darwin Core Fields: Latest Eon or Highest Eonothem */
$handler->display->display_options['fields']['latest_eon_or_highest_eonothem']['id'] = 'latest_eon_or_highest_eonothem';
$handler->display->display_options['fields']['latest_eon_or_highest_eonothem']['table'] = 'darwincore';
$handler->display->display_options['fields']['latest_eon_or_highest_eonothem']['field'] = 'latest_eon_or_highest_eonothem';
/* Field: Darwin Core Fields: Latest Epoch or Highest Series */
$handler->display->display_options['fields']['latest_epoch_or_highest_series']['id'] = 'latest_epoch_or_highest_series';
$handler->display->display_options['fields']['latest_epoch_or_highest_series']['table'] = 'darwincore';
$handler->display->display_options['fields']['latest_epoch_or_highest_series']['field'] = 'latest_epoch_or_highest_series';
/* Field: Darwin Core Fields: Latest Era or Highest Erathem */
$handler->display->display_options['fields']['latest_era_or_highest_erathem']['id'] = 'latest_era_or_highest_erathem';
$handler->display->display_options['fields']['latest_era_or_highest_erathem']['table'] = 'darwincore';
$handler->display->display_options['fields']['latest_era_or_highest_erathem']['field'] = 'latest_era_or_highest_erathem';
/* Field: Darwin Core Fields: Latest Period Or Highest System */
$handler->display->display_options['fields']['latest_period_or_highest_system']['id'] = 'latest_period_or_highest_system';
$handler->display->display_options['fields']['latest_period_or_highest_system']['table'] = 'darwincore';
$handler->display->display_options['fields']['latest_period_or_highest_system']['field'] = 'latest_period_or_highest_system';
/* Field: Darwin Core Fields: Life Stage */
$handler->display->display_options['fields']['life_stage']['id'] = 'life_stage';
$handler->display->display_options['fields']['life_stage']['table'] = 'darwincore';
$handler->display->display_options['fields']['life_stage']['field'] = 'life_stage';
/* Field: Darwin Core Fields: Lithostratigraphic Terms */
$handler->display->display_options['fields']['lithostratigraphic_terms']['id'] = 'lithostratigraphic_terms';
$handler->display->display_options['fields']['lithostratigraphic_terms']['table'] = 'darwincore';
$handler->display->display_options['fields']['lithostratigraphic_terms']['field'] = 'lithostratigraphic_terms';
/* Field: Darwin Core Fields: Locality */
$handler->display->display_options['fields']['locality']['id'] = 'locality';
$handler->display->display_options['fields']['locality']['table'] = 'darwincore';
$handler->display->display_options['fields']['locality']['field'] = 'locality';
/* Field: Darwin Core Fields: Location According To */
$handler->display->display_options['fields']['location_according_to']['id'] = 'location_according_to';
$handler->display->display_options['fields']['location_according_to']['table'] = 'darwincore';
$handler->display->display_options['fields']['location_according_to']['field'] = 'location_according_to';
/* Field: Darwin Core Fields: Location ID */
$handler->display->display_options['fields']['location_id']['id'] = 'location_id';
$handler->display->display_options['fields']['location_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['location_id']['field'] = 'location_id';
/* Field: Darwin Core Fields: Location Remarks */
$handler->display->display_options['fields']['location_remarks']['id'] = 'location_remarks';
$handler->display->display_options['fields']['location_remarks']['table'] = 'darwincore';
$handler->display->display_options['fields']['location_remarks']['field'] = 'location_remarks';
/* Field: Darwin Core Fields: Lowest Biostratigraphic Zone */
$handler->display->display_options['fields']['lowest_biostratigraphic_zone']['id'] = 'lowest_biostratigraphic_zone';
$handler->display->display_options['fields']['lowest_biostratigraphic_zone']['table'] = 'darwincore';
$handler->display->display_options['fields']['lowest_biostratigraphic_zone']['field'] = 'lowest_biostratigraphic_zone';
/* Field: Darwin Core Fields: Maximum Depth in Meters */
$handler->display->display_options['fields']['maximum_depth_in_meters']['id'] = 'maximum_depth_in_meters';
$handler->display->display_options['fields']['maximum_depth_in_meters']['table'] = 'darwincore';
$handler->display->display_options['fields']['maximum_depth_in_meters']['field'] = 'maximum_depth_in_meters';
/* Field: Darwin Core Fields: Maximum Distance Above Surface in Meters */
$handler->display->display_options['fields']['maximum_distance_above_surface_in_meters']['id'] = 'maximum_distance_above_surface_in_meters';
$handler->display->display_options['fields']['maximum_distance_above_surface_in_meters']['table'] = 'darwincore';
$handler->display->display_options['fields']['maximum_distance_above_surface_in_meters']['field'] = 'maximum_distance_above_surface_in_meters';
/* Field: Darwin Core Fields: Maximum Elevation in Meters */
$handler->display->display_options['fields']['maximum_elevation_in_meters']['id'] = 'maximum_elevation_in_meters';
$handler->display->display_options['fields']['maximum_elevation_in_meters']['table'] = 'darwincore';
$handler->display->display_options['fields']['maximum_elevation_in_meters']['field'] = 'maximum_elevation_in_meters';
/* Field: Darwin Core Fields: Member */
$handler->display->display_options['fields']['member']['id'] = 'member';
$handler->display->display_options['fields']['member']['table'] = 'darwincore';
$handler->display->display_options['fields']['member']['field'] = 'member';
/* Field: Darwin Core Fields: Minimum Depth in Meters */
$handler->display->display_options['fields']['minimum_depth_in_meters']['id'] = 'minimum_depth_in_meters';
$handler->display->display_options['fields']['minimum_depth_in_meters']['table'] = 'darwincore';
$handler->display->display_options['fields']['minimum_depth_in_meters']['field'] = 'minimum_depth_in_meters';
/* Field: Darwin Core Fields: Minimum Distance Above Surface in Meters */
$handler->display->display_options['fields']['minimum_distance_above_surface_in_meters']['id'] = 'minimum_distance_above_surface_in_meters';
$handler->display->display_options['fields']['minimum_distance_above_surface_in_meters']['table'] = 'darwincore';
$handler->display->display_options['fields']['minimum_distance_above_surface_in_meters']['field'] = 'minimum_distance_above_surface_in_meters';
/* Field: Darwin Core Fields: Minimum Elevation in Meters */
$handler->display->display_options['fields']['minimum_elevation_in_meters']['id'] = 'minimum_elevation_in_meters';
$handler->display->display_options['fields']['minimum_elevation_in_meters']['table'] = 'darwincore';
$handler->display->display_options['fields']['minimum_elevation_in_meters']['field'] = 'minimum_elevation_in_meters';
/* Field: Darwin Core Fields: Modified */
$handler->display->display_options['fields']['modified']['id'] = 'modified';
$handler->display->display_options['fields']['modified']['table'] = 'darwincore';
$handler->display->display_options['fields']['modified']['field'] = 'modified';
/* Field: Darwin Core Fields: Month */
$handler->display->display_options['fields']['month']['id'] = 'month';
$handler->display->display_options['fields']['month']['table'] = 'darwincore';
$handler->display->display_options['fields']['month']['field'] = 'month';
/* Field: Darwin Core Fields: Municipality */
$handler->display->display_options['fields']['municipality']['id'] = 'municipality';
$handler->display->display_options['fields']['municipality']['table'] = 'darwincore';
$handler->display->display_options['fields']['municipality']['field'] = 'municipality';
/* Field: Darwin Core Fields: Name According To */
$handler->display->display_options['fields']['name_according_to_id']['id'] = 'name_according_to_id';
$handler->display->display_options['fields']['name_according_to_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['name_according_to_id']['field'] = 'name_according_to_id';
/* Field: Darwin Core Fields: Name According To */
$handler->display->display_options['fields']['name_according_to']['id'] = 'name_according_to';
$handler->display->display_options['fields']['name_according_to']['table'] = 'darwincore';
$handler->display->display_options['fields']['name_according_to']['field'] = 'name_according_to';
/* Field: Darwin Core Fields: Name Published In */
$handler->display->display_options['fields']['name_published_in']['id'] = 'name_published_in';
$handler->display->display_options['fields']['name_published_in']['table'] = 'darwincore';
$handler->display->display_options['fields']['name_published_in']['field'] = 'name_published_in';
/* Field: Darwin Core Fields: Name Published In */
$handler->display->display_options['fields']['name_published_in_id']['id'] = 'name_published_in_id';
$handler->display->display_options['fields']['name_published_in_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['name_published_in_id']['field'] = 'name_published_in_id';
/* Field: Darwin Core Fields: Name Published In Year */
$handler->display->display_options['fields']['name_published_in_year']['id'] = 'name_published_in_year';
$handler->display->display_options['fields']['name_published_in_year']['table'] = 'darwincore';
$handler->display->display_options['fields']['name_published_in_year']['field'] = 'name_published_in_year';
/* Field: Darwin Core Fields: Nomenclatural Code */
$handler->display->display_options['fields']['nomenclatural_code']['id'] = 'nomenclatural_code';
$handler->display->display_options['fields']['nomenclatural_code']['table'] = 'darwincore';
$handler->display->display_options['fields']['nomenclatural_code']['field'] = 'nomenclatural_code';
/* Field: Darwin Core Fields: Nomenclatural Status */
$handler->display->display_options['fields']['nomenclatural_status']['id'] = 'nomenclatural_status';
$handler->display->display_options['fields']['nomenclatural_status']['table'] = 'darwincore';
$handler->display->display_options['fields']['nomenclatural_status']['field'] = 'nomenclatural_status';
/* Field: Darwin Core Fields: Occurrence Details */
$handler->display->display_options['fields']['occurrence_details']['id'] = 'occurrence_details';
$handler->display->display_options['fields']['occurrence_details']['table'] = 'darwincore';
$handler->display->display_options['fields']['occurrence_details']['field'] = 'occurrence_details';
/* Field: Darwin Core Fields: Occurrence ID */
$handler->display->display_options['fields']['occurrence_id']['id'] = 'occurrence_id';
$handler->display->display_options['fields']['occurrence_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['occurrence_id']['field'] = 'occurrence_id';
/* Field: Darwin Core Fields: Occurrence Remarks */
$handler->display->display_options['fields']['occurrence_remarks']['id'] = 'occurrence_remarks';
$handler->display->display_options['fields']['occurrence_remarks']['table'] = 'darwincore';
$handler->display->display_options['fields']['occurrence_remarks']['field'] = 'occurrence_remarks';
/* Field: Darwin Core Fields: Occurrence Status */
$handler->display->display_options['fields']['occurrence_status']['id'] = 'occurrence_status';
$handler->display->display_options['fields']['occurrence_status']['table'] = 'darwincore';
$handler->display->display_options['fields']['occurrence_status']['field'] = 'occurrence_status';
/* Field: Darwin Core Fields: Order */
$handler->display->display_options['fields']['order']['id'] = 'order';
$handler->display->display_options['fields']['order']['table'] = 'darwincore';
$handler->display->display_options['fields']['order']['field'] = 'order';
/* Field: Darwin Core Fields: Original Name Usage */
$handler->display->display_options['fields']['original_name_usage']['id'] = 'original_name_usage';
$handler->display->display_options['fields']['original_name_usage']['table'] = 'darwincore';
$handler->display->display_options['fields']['original_name_usage']['field'] = 'original_name_usage';
/* Field: Darwin Core Fields: Original Name Usage ID */
$handler->display->display_options['fields']['original_name_usage_id']['id'] = 'original_name_usage_id';
$handler->display->display_options['fields']['original_name_usage_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['original_name_usage_id']['field'] = 'original_name_usage_id';
/* Field: Darwin Core Fields: Other Catalog Numbers */
$handler->display->display_options['fields']['other_catalog_numbers']['id'] = 'other_catalog_numbers';
$handler->display->display_options['fields']['other_catalog_numbers']['table'] = 'darwincore';
$handler->display->display_options['fields']['other_catalog_numbers']['field'] = 'other_catalog_numbers';
/* Field: Darwin Core Fields: Owner Institution Code */
$handler->display->display_options['fields']['owner_institution_code']['id'] = 'owner_institution_code';
$handler->display->display_options['fields']['owner_institution_code']['table'] = 'darwincore';
$handler->display->display_options['fields']['owner_institution_code']['field'] = 'owner_institution_code';
/* Field: Darwin Core Fields: Parent Name Usage */
$handler->display->display_options['fields']['parent_name_usage']['id'] = 'parent_name_usage';
$handler->display->display_options['fields']['parent_name_usage']['table'] = 'darwincore';
$handler->display->display_options['fields']['parent_name_usage']['field'] = 'parent_name_usage';
/* Field: Darwin Core Fields: Parent Name Usage ID */
$handler->display->display_options['fields']['parent_name_usage_id']['id'] = 'parent_name_usage_id';
$handler->display->display_options['fields']['parent_name_usage_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['parent_name_usage_id']['field'] = 'parent_name_usage_id';
/* Field: Darwin Core Fields: Phylum */
$handler->display->display_options['fields']['phylum']['id'] = 'phylum';
$handler->display->display_options['fields']['phylum']['table'] = 'darwincore';
$handler->display->display_options['fields']['phylum']['field'] = 'phylum';
/* Field: Darwin Core Fields: Point Radius Spatial Fit */
$handler->display->display_options['fields']['point_radius_spatial_fit']['id'] = 'point_radius_spatial_fit';
$handler->display->display_options['fields']['point_radius_spatial_fit']['table'] = 'darwincore';
$handler->display->display_options['fields']['point_radius_spatial_fit']['field'] = 'point_radius_spatial_fit';
/* Field: Darwin Core Fields: Preparations */
$handler->display->display_options['fields']['preparations']['id'] = 'preparations';
$handler->display->display_options['fields']['preparations']['table'] = 'darwincore';
$handler->display->display_options['fields']['preparations']['field'] = 'preparations';
/* Field: Darwin Core Fields: Previous Identifications */
$handler->display->display_options['fields']['previous_identifications']['id'] = 'previous_identifications';
$handler->display->display_options['fields']['previous_identifications']['table'] = 'darwincore';
$handler->display->display_options['fields']['previous_identifications']['field'] = 'previous_identifications';
/* Field: Darwin Core Fields: Record Number */
$handler->display->display_options['fields']['record_number']['id'] = 'record_number';
$handler->display->display_options['fields']['record_number']['table'] = 'darwincore';
$handler->display->display_options['fields']['record_number']['field'] = 'record_number';
/* Field: Darwin Core Fields: Recorded By */
$handler->display->display_options['fields']['recorded_by']['id'] = 'recorded_by';
$handler->display->display_options['fields']['recorded_by']['table'] = 'darwincore';
$handler->display->display_options['fields']['recorded_by']['field'] = 'recorded_by';
/* Field: Darwin Core Fields: References */
$handler->display->display_options['fields']['references']['id'] = 'references';
$handler->display->display_options['fields']['references']['table'] = 'darwincore';
$handler->display->display_options['fields']['references']['field'] = 'references';
/* Field: Darwin Core Fields: Reproductive Condition */
$handler->display->display_options['fields']['reproductive_condition']['id'] = 'reproductive_condition';
$handler->display->display_options['fields']['reproductive_condition']['table'] = 'darwincore';
$handler->display->display_options['fields']['reproductive_condition']['field'] = 'reproductive_condition';
/* Field: Darwin Core Fields: Rights */
$handler->display->display_options['fields']['rights']['id'] = 'rights';
$handler->display->display_options['fields']['rights']['table'] = 'darwincore';
$handler->display->display_options['fields']['rights']['field'] = 'rights';
/* Field: Darwin Core Fields: Rights Holder */
$handler->display->display_options['fields']['rights_holder']['id'] = 'rights_holder';
$handler->display->display_options['fields']['rights_holder']['table'] = 'darwincore';
$handler->display->display_options['fields']['rights_holder']['field'] = 'rights_holder';
/* Field: Darwin Core Fields: Sampling Effort */
$handler->display->display_options['fields']['sampling_effort']['id'] = 'sampling_effort';
$handler->display->display_options['fields']['sampling_effort']['table'] = 'darwincore';
$handler->display->display_options['fields']['sampling_effort']['field'] = 'sampling_effort';
/* Field: Darwin Core Fields: Sampling Protocol */
$handler->display->display_options['fields']['sampling_protocol']['id'] = 'sampling_protocol';
$handler->display->display_options['fields']['sampling_protocol']['table'] = 'darwincore';
$handler->display->display_options['fields']['sampling_protocol']['field'] = 'sampling_protocol';
/* Field: Darwin Core Fields: Scientific Name Authorship */
$handler->display->display_options['fields']['scientific_name_authorship']['id'] = 'scientific_name_authorship';
$handler->display->display_options['fields']['scientific_name_authorship']['table'] = 'darwincore';
$handler->display->display_options['fields']['scientific_name_authorship']['field'] = 'scientific_name_authorship';
/* Field: Darwin Core Fields: Scientific Name ID */
$handler->display->display_options['fields']['scientific_name_id']['id'] = 'scientific_name_id';
$handler->display->display_options['fields']['scientific_name_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['scientific_name_id']['field'] = 'scientific_name_id';
/* Field: Darwin Core Fields: Sex */
$handler->display->display_options['fields']['sex']['id'] = 'sex';
$handler->display->display_options['fields']['sex']['table'] = 'darwincore';
$handler->display->display_options['fields']['sex']['field'] = 'sex';
/* Field: Darwin Core Fields: Source */
$handler->display->display_options['fields']['source']['id'] = 'source';
$handler->display->display_options['fields']['source']['table'] = 'darwincore';
$handler->display->display_options['fields']['source']['field'] = 'source';
/* Field: Darwin Core Fields: Specific Epithet */
$handler->display->display_options['fields']['specific_epithet']['id'] = 'specific_epithet';
$handler->display->display_options['fields']['specific_epithet']['table'] = 'darwincore';
$handler->display->display_options['fields']['specific_epithet']['field'] = 'specific_epithet';
/* Field: Darwin Core Fields: Start Day of Year */
$handler->display->display_options['fields']['start_day_of_year']['id'] = 'start_day_of_year';
$handler->display->display_options['fields']['start_day_of_year']['table'] = 'darwincore';
$handler->display->display_options['fields']['start_day_of_year']['field'] = 'start_day_of_year';
/* Field: Darwin Core Fields: State Province */
$handler->display->display_options['fields']['state_province']['id'] = 'state_province';
$handler->display->display_options['fields']['state_province']['table'] = 'darwincore';
$handler->display->display_options['fields']['state_province']['field'] = 'state_province';
/* Field: Darwin Core Fields: Subgenus */
$handler->display->display_options['fields']['subgenus']['id'] = 'subgenus';
$handler->display->display_options['fields']['subgenus']['table'] = 'darwincore';
$handler->display->display_options['fields']['subgenus']['field'] = 'subgenus';
/* Field: Darwin Core Fields: Taxon Concept ID */
$handler->display->display_options['fields']['taxon_concept_id']['id'] = 'taxon_concept_id';
$handler->display->display_options['fields']['taxon_concept_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['taxon_concept_id']['field'] = 'taxon_concept_id';
/* Field: Darwin Core Fields: Taxon ID */
$handler->display->display_options['fields']['taxon_id']['id'] = 'taxon_id';
$handler->display->display_options['fields']['taxon_id']['table'] = 'darwincore';
$handler->display->display_options['fields']['taxon_id']['field'] = 'taxon_id';
/* Field: Darwin Core Fields: Taxon Rank */
$handler->display->display_options['fields']['taxon_rank']['id'] = 'taxon_rank';
$handler->display->display_options['fields']['taxon_rank']['table'] = 'darwincore';
$handler->display->display_options['fields']['taxon_rank']['field'] = 'taxon_rank';
/* Field: Darwin Core Fields: Taxon Remarks */
$handler->display->display_options['fields']['taxon_remarks']['id'] = 'taxon_remarks';
$handler->display->display_options['fields']['taxon_remarks']['table'] = 'darwincore';
$handler->display->display_options['fields']['taxon_remarks']['field'] = 'taxon_remarks';
/* Field: Darwin Core Fields: Taxonomic Status */
$handler->display->display_options['fields']['taxonomic_status']['id'] = 'taxonomic_status';
$handler->display->display_options['fields']['taxonomic_status']['table'] = 'darwincore';
$handler->display->display_options['fields']['taxonomic_status']['field'] = 'taxonomic_status';
/* Field: Darwin Core Fields: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'darwincore';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Darwin Core Fields: Type Status */
$handler->display->display_options['fields']['type_status']['id'] = 'type_status';
$handler->display->display_options['fields']['type_status']['table'] = 'darwincore';
$handler->display->display_options['fields']['type_status']['field'] = 'type_status';
/* Field: Darwin Core Fields: Verbatim Coordinate System */
$handler->display->display_options['fields']['verbatim_coordinate_system']['id'] = 'verbatim_coordinate_system';
$handler->display->display_options['fields']['verbatim_coordinate_system']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_coordinate_system']['field'] = 'verbatim_coordinate_system';
/* Field: Darwin Core Fields: Verbatim Coordinates */
$handler->display->display_options['fields']['verbatim_coordinates']['id'] = 'verbatim_coordinates';
$handler->display->display_options['fields']['verbatim_coordinates']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_coordinates']['field'] = 'verbatim_coordinates';
/* Field: Darwin Core Fields: Verbatim Depth */
$handler->display->display_options['fields']['verbatim_depth']['id'] = 'verbatim_depth';
$handler->display->display_options['fields']['verbatim_depth']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_depth']['field'] = 'verbatim_depth';
/* Field: Darwin Core Fields: Verbatim Elevation */
$handler->display->display_options['fields']['verbatim_elevation']['id'] = 'verbatim_elevation';
$handler->display->display_options['fields']['verbatim_elevation']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_elevation']['field'] = 'verbatim_elevation';
/* Field: Darwin Core Fields: Verbatim Event Date */
$handler->display->display_options['fields']['verbatim_event_date']['id'] = 'verbatim_event_date';
$handler->display->display_options['fields']['verbatim_event_date']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_event_date']['field'] = 'verbatim_event_date';
/* Field: Darwin Core Fields: Verbatim Latitude */
$handler->display->display_options['fields']['verbatim_latitude']['id'] = 'verbatim_latitude';
$handler->display->display_options['fields']['verbatim_latitude']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_latitude']['field'] = 'verbatim_latitude';
/* Field: Darwin Core Fields: Verbatim Locality */
$handler->display->display_options['fields']['verbatim_locality']['id'] = 'verbatim_locality';
$handler->display->display_options['fields']['verbatim_locality']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_locality']['field'] = 'verbatim_locality';
/* Field: Darwin Core Fields: Verbatim Longitude */
$handler->display->display_options['fields']['verbatim_longitude']['id'] = 'verbatim_longitude';
$handler->display->display_options['fields']['verbatim_longitude']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_longitude']['field'] = 'verbatim_longitude';
/* Field: Darwin Core Fields: Verbatim SRS */
$handler->display->display_options['fields']['verbatim_srs']['id'] = 'verbatim_srs';
$handler->display->display_options['fields']['verbatim_srs']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_srs']['field'] = 'verbatim_srs';
/* Field: Darwin Core Fields: Verbatim Taxon Rank */
$handler->display->display_options['fields']['verbatim_taxon_rank']['id'] = 'verbatim_taxon_rank';
$handler->display->display_options['fields']['verbatim_taxon_rank']['table'] = 'darwincore';
$handler->display->display_options['fields']['verbatim_taxon_rank']['field'] = 'verbatim_taxon_rank';
/* Field: Darwin Core Fields: Vernacular Name */
$handler->display->display_options['fields']['vernacular_name']['id'] = 'vernacular_name';
$handler->display->display_options['fields']['vernacular_name']['table'] = 'darwincore';
$handler->display->display_options['fields']['vernacular_name']['field'] = 'vernacular_name';
/* Field: Darwin Core Fields: Water Body */
$handler->display->display_options['fields']['water_body']['id'] = 'water_body';
$handler->display->display_options['fields']['water_body']['table'] = 'darwincore';
$handler->display->display_options['fields']['water_body']['field'] = 'water_body';
/* Field: Darwin Core Fields: Year */
$handler->display->display_options['fields']['year']['id'] = 'year';
$handler->display->display_options['fields']['year']['table'] = 'darwincore';
$handler->display->display_options['fields']['year']['field'] = 'year';
/* Field: Content: Scientific Name */
$handler->display->display_options['fields']['field_taxonomic_name']['id'] = 'field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['table'] = 'field_data_field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['field'] = 'field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['type'] = 'taxonomy_term_reference_plain';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'darwincore' => 'darwincore',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'darwincore/%';	
	
	
	
	
	
	
	
	
	
	return $views;

}
