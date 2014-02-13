<?php


/**
 * Implement hook_views_data().
 *
 * Describe table "darwincore" so that it can be used by views
 */
function darwincore_views_data() {
	
	$data = array();
	$data['darwincore']['table']['group'] = t('Darwin Core Fields');
	$data['darwincore']['table']['join']['node'] = array(
		'left_field' => 'nid',
		'field' => 'nid',
	);

	$data['darwincore']['event_id'] = array(
		'title' => t('Event ID'),
		'help' => t('Event ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);	
	
	$data['darwincore']['sampling_protocol'] = array(
		'title' => t('Sampling Protocol'),
		'help' => t('Sampling Protocol'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['sampling_effort'] = array(
		'title' => t('Sampling Effort'),
		'help' => t('Sampling Effort'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['event_date'] = array(
		'title' => t('Event Date'),
		'help' => t('Event Date'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['event_time'] = array(
		'title' => t('Event Time'),
		'help' => t('Event Time'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['start_day_of_year'] = array(
		'title' => t('Start Day of Year'),
		'help' => t('Start Day of Year'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['end_day_of_year'] = array(
		'title' => t('End Day of Year'),
		'help' => t('End Day of Year'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['year'] = array(
		'title' => t('Year'),
		'help' => t('Year'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['month'] = array(
		'title' => t('Month'),
		'help' => t('Month'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['day'] = array(
		'title' => t('Day'),
		'help' => t('Day'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_event_date'] = array(
		'title' => t('Verbatim Event Date'),
		'help' => t('Verbatim Event Date'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['habitat'] = array(
		'title' => t('Habitat'),
		'help' => t('Habitat'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['field_number'] = array(
		'title' => t('Field Number'),
		'help' => t('Field Number'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['field_notes'] = array(
		'title' => t('Field Notes'),
		'help' => t('Field Notes'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['event_remarks'] = array(
		'title' => t('Event Remarks'),
		'help' => t('Event Remarks'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['geological_context_id'] = array(
		'title' => t('Geological Context ID'),
		'help' => t('Geological Context ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['earliest_eon_or_lowest_eonothem'] = array(
		'title' => t('Earliest Eon or Lowest Eonothem'),
		'help' => t('Earliest Eon or Lowest Eonothem'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['latest_eon_or_highest_eonothem'] = array(
		'title' => t('Latest Eon or Highest Eonothem'),
		'help' => t('Latest Eon or Highest Eonothem'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['earliest_era_or_lowest_erathem'] = array(
		'title' => t('Earliest Era or Llowest Erathem'),
		'help' => t('Earliest Era or Llowest Erathem'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['latest_era_or_highest_erathem'] = array(
		'title' => t('Latest Era or Highest Erathem'),
		'help' => t('Latest Era or Highest Erathem'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['earliest_period_or_lowest_system'] = array(
		'title' => t('Earliest Period or Lowest System'),
		'help' => t('Earliest Period or Lowest System'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['latest_period_or_highest_system'] = array(
		'title' => t('Latest Period Or Highest System'),
		'help' => t('Latest Period Or Highest System'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['earliest_epoch_or_lowest_series'] = array(
		'title' => t('Earliest Epoch or Lowest Series'),
		'help' => t('Earliest Epoch or Lowest Series'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['latest_epoch_or_highest_series'] = array(
		'title' => t('Latest Epoch or Highest Series'),
		'help' => t('Latest Epoch or Highest Series'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['earliest_age_or_lowest_stage'] = array(
		'title' => t('Earliest Age or Lowest Stage'),
		'help' => t('Earliest Age or Lowest Stage'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['latest_age_or_highest_stage'] = array(
		'title' => t('Latest Age or Highest Stage'),
		'help' => t('Latest Age or Highest Stage'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['lowest_biostratigraphic_zone'] = array(
		'title' => t('Lowest Biostratigraphic Zone'),
		'help' => t('Lowest Biostratigraphic Zone'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['highest_biostratigraphic_zone'] = array(
		'title' => t('Highest Biostratigraphic Zone'),
		'help' => t('Highest Biostratigraphic Zone'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['lithostratigraphic_terms'] = array(
		'title' => t('Lithostratigraphic Terms'),
		'help' => t('Lithostratigraphic Terms'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['group'] = array(
		'title' => t('Group'),
		'help' => t('Group'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['formation'] = array(
		'title' => t('Formation'),
		'help' => t('Formation'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['member'] = array(
		'title' => t('Member'),
		'help' => t('Member'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['bed'] = array(
		'title' => t('Bed'),
		'help' => t('Bed'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['identification_id'] = array(
		'title' => t('Identification ID'),
		'help' => t('Identification ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['identified_by'] = array(
		'title' => t('Identified By'),
		'help' => t('Identified By'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['date_identified'] = array(
		'title' => t('Date Identified'),
		'help' => t('Date Identified'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['identification_references'] = array(
		'title' => t('Identification References'),
		'help' => t('Identification References'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['identification_remarks'] = array(
		'title' => t('Identification Remarks'),
		'help' => t('Identification Remarks'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['identification_qualifier'] = array(
		'title' => t('Identification Qualifier'),
		'help' => t('Identification Qualifier'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['identification_verification_status'] = array(
		'title' => t('Identification Verification Status'),
		'help' => t('Identification Verification Status'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['type_status'] = array(
		'title' => t('Type Status'),
		'help' => t('Type Status'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['location_id'] = array(
		'title' => t('Location ID'),
		'help' => t('Location ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['higher_geography_id'] = array(
		'title' => t('Higher Geography ID'),
		'help' => t('Higher Geography ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['higher_geography'] = array(
		'title' => t('Higher Geography'),
		'help' => t('Higher Geography'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['continent'] = array(
		'title' => t('Continent'),
		'help' => t('Continent'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['water_body'] = array(
		'title' => t('Water Body'),
		'help' => t('Water Body'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['island_group'] = array(
		'title' => t('Island Group'),
		'help' => t('Island Group'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['island'] = array(
		'title' => t('Island'),
		'help' => t('Island'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['country'] = array(
		'title' => t('Country'),
		'help' => t('Country'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['country_code'] = array(
		'title' => t('Country Code'),
		'help' => t('Country Code'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['state_province'] = array(
		'title' => t('State Province'),
		'help' => t('State Province'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['county'] = array(
		'title' => t('County'),
		'help' => t('County'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['municipality'] = array(
		'title' => t('Municipality'),
		'help' => t('Municipality'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['locality'] = array(
		'title' => t('Locality'),
		'help' => t('Locality'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_locality'] = array(
		'title' => t('Verbatim Locality'),
		'help' => t('Verbatim Locality'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_elevation'] = array(
		'title' => t('Verbatim Elevation'),
		'help' => t('Verbatim Elevation'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['minimum_elevation_in_meters'] = array(
		'title' => t('Minimum Elevation in Meters'),
		'help' => t('Minimum Elevation in Meters'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['maximum_elevation_in_meters'] = array(
		'title' => t('Maximum Elevation in Meters'),
		'help' => t('Maximum Elevation in Meters'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_depth'] = array(
		'title' => t('Verbatim Depth'),
		'help' => t('Verbatim Depth'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['minimum_depth_in_meters'] = array(
		'title' => t('Minimum Depth in Meters'),
		'help' => t('Minimum Depth in Meters'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['maximum_depth_in_meters'] = array(
		'title' => t('Maximum Depth in Meters'),
		'help' => t('Maximum Depth in Meters'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['minimum_distance_above_surface_in_meters'] = array(
		'title' => t('Minimum Distance Above Surface in Meters'),
		'help' => t('Minimum Distance Above Surface in Meters'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['maximum_distance_above_surface_in_meters'] = array(
		'title' => t('Maximum Distance Above Surface in Meters'),
		'help' => t('Maximum Distance Above Surface in Meters'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['location_according_to'] = array(
		'title' => t('Location According To'),
		'help' => t('Location According To'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['location_remarks'] = array(
		'title' => t('Location Remarks'),
		'help' => t('Location Remarks'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_coordinates'] = array(
		'title' => t('Verbatim Coordinates'),
		'help' => t('Verbatim Coordinates'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_latitude'] = array(
		'title' => t('Verbatim Latitude'),
		'help' => t('Verbatim Latitude'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_longitude'] = array(
		'title' => t('Verbatim Longitude'),
		'help' => t('Verbatim Longitude'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_coordinate_system'] = array(
		'title' => t('Verbatim Coordinate System'),
		'help' => t('Verbatim Coordinate System'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_srs'] = array(
		'title' => t('Verbatim SRS'),
		'help' => t('Verbatim SRS'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['decimal_latitude'] = array(
		'title' => t('Decimal Latitude'),
		'help' => t('Decimal Latitude'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['decimal_longitude'] = array(
		'title' => t('Decimal Longitude'),
		'help' => t('Decimal Longitude'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['geodetic_datum'] = array(
		'title' => t('Geodetic Datum'),
		'help' => t('Geodetic Datum'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['coordinate_uncertainty_in_meters'] = array(
		'title' => t('Coordinate Uncertainty in Meters'),
		'help' => t('Coordinate Uncertainty in Meters'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['coordinate_precision'] = array(
		'title' => t('Coordinate Precision'),
		'help' => t('Coordinate Precision'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['point_radius_spatial_fit'] = array(
		'title' => t('Point Radius Spatial Fit'),
		'help' => t('Point Radius Spatial Fit'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['footprint_wkt'] = array(
		'title' => t('Footprint WKT'),
		'help' => t('Footprint WKT'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['footprint_srs'] = array(
		'title' => t('Footprint SRS'),
		'help' => t('Footprint SRS'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['footprint_spatial_fit'] = array(
		'title' => t('Footprint Spatial Fit'),
		'help' => t('Footprint Spatial Fit'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['georeferenced_by'] = array(
		'title' => t('Georeferenced By'),
		'help' => t('Georeferenced By'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['georeferenced_date'] = array(
		'title' => t('Georeferenced Date'),
		'help' => t('Georeferenced Date'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['georeference_protocol'] = array(
		'title' => t('Georeference Protocol'),
		'help' => t('Georeference Protocol'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['georeference_sources'] = array(
		'title' => t('Georeference Sources'),
		'help' => t('Georeference Sources'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['georeference_verification_status'] = array(
		'title' => t('Georeference Verification Status'),
		'help' => t('Georeference Verification Status'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['georeference_remarks'] = array(
		'title' => t('Georeference Remarks'),
		'help' => t('Georeference Remarks'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['occurrence_id'] = array(
		'title' => t('Occurrence ID'),
		'help' => t('Occurrence ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['catalog_number'] = array(
		'title' => t('Catalog Number'),
		'help' => t('Catalog Number'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['occurrence_remarks'] = array(
		'title' => t('Occurrence Remarks'),
		'help' => t('Occurrence Remarks'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['record_number'] = array(
		'title' => t('Record Number'),
		'help' => t('Record Number'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['recorded_by'] = array(
		'title' => t('Recorded By'),
		'help' => t('Recorded By'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['individual_id'] = array(
		'title' => t('Individual ID'),
		'help' => t('Individual ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['individual_count'] = array(
		'title' => t('Individual Count'),
		'help' => t('Individual Count'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['sex'] = array(
		'title' => t('Sex'),
		'help' => t('Sex'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['life_stage'] = array(
		'title' => t('Life Stage'),
		'help' => t('Life Stage'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['reproductive_condition'] = array(
		'title' => t('Reproductive Condition'),
		'help' => t('Reproductive Condition'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['behavior'] = array(
		'title' => t('Behavior'),
		'help' => t('Behavior'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['establishment_means'] = array(
		'title' => t('Establishment Means'),
		'help' => t('Establishment Means'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['occurrence_status'] = array(
		'title' => t('Occurrence Status'),
		'help' => t('Occurrence Status'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['preparations'] = array(
		'title' => t('Preparations'),
		'help' => t('Preparations'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['disposition'] = array(
		'title' => t('Disposition'),
		'help' => t('Disposition'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['other_catalog_numbers'] = array(
		'title' => t('Other Catalog Numbers'),
		'help' => t('Other Catalog Numbers'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['previous_identifications'] = array(
		'title' => t('Previous Identifications'),
		'help' => t(''),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['associated_media'] = array(
		'title' => t('Associated Media'),
		'help' => t('Associated Media'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['associated_references'] = array(
		'title' => t('Associated References'),
		'help' => t('Associated References'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['associated_occurrences'] = array(
		'title' => t('Associated Occurrences'),
		'help' => t('Associated Occurrences'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['associated_sequences'] = array(
		'title' => t('Associated Sequences'),
		'help' => t('Associated Sequences'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['associated_taxa'] = array(
		'title' => t('Associated Taxa'),
		'help' => t('Associated Taxa'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['occurrence_details'] = array(
		'title' => t('Occurrence Details'),
		'help' => t('Occurrence Details'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['type'] = array(
		'title' => t('Type'),
		'help' => t('Type'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['modified'] = array(
		'title' => t('Modified'),
		'help' => t('Modified'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['language'] = array(
		'title' => t('Language'),
		'help' => t('Language'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['rights'] = array(
		'title' => t('Rights'),
		'help' => t('Rights'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['rights_holder'] = array(
		'title' => t('Rights Holder'),
		'help' => t('Rights Holder'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['access_rights'] = array(
		'title' => t('Access Rights'),
		'help' => t('Access Rights'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['bibliographic_citation'] = array(
		'title' => t('Bibliographic Citation'),
		'help' => t('Bibliographic Citation'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['references'] = array(
		'title' => t('References'),
		'help' => t('References'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['institution_id'] = array(
		'title' => t('Institution ID'),
		'help' => t('Institution ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['collection_id'] = array(
		'title' => t('Collection ID'),
		'help' => t('Collection ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['dataset_id'] = array(
		'title' => t('Dataset ID'),
		'help' => t('Dataset ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['institution_code'] = array(
		'title' => t('Institution Code'),
		'help' => t('Institution Code'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['collection_code'] = array(
		'title' => t('Collection Code'),
		'help' => t('Collection Code'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['dataset_name'] = array(
		'title' => t('Dataset Name'),
		'help' => t('Dataset Name'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['owner_institution_code'] = array(
		'title' => t('Owner Institution Code'),
		'help' => t('Owner Institution Code'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['basis_of_record'] = array(
		'title' => t('Basis of Record'),
		'help' => t('Basis of Record'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['information_withheld'] = array(
		'title' => t('Information Withheld'),
		'help' => t('Information Withheld'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['data_generalizations'] = array(
		'title' => t('Data Generalizations'),
		'help' => t('Data Generalizations'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['dynamic_properties'] = array(
		'title' => t('Dynamic Properties'),
		'help' => t('Dynamic Properties'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['source'] = array(
		'title' => t('Source'),
		'help' => t('Source'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['taxon_id'] = array(
		'title' => t('Taxon ID'),
		'help' => t('Taxon ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['scientific_name_id'] = array(
		'title' => t('Scientific Name ID'),
		'help' => t('Scientific Name ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['accepted_name_usage_id'] = array(
		'title' => t('Accepted Name Usage ID'),
		'help' => t('Accepted Name Usage ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['parent_name_usage_id'] = array(
		'title' => t('Parent Name Usage ID'),
		'help' => t('Parent Name Usage ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['original_name_usage_id'] = array(
		'title' => t('Original Name Usage ID'),
		'help' => t('Original Name Usage ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['name_according_to_id'] = array(
		'title' => t('Name According To'),
		'help' => t('Name According To'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['name_published_in_id'] = array(
		'title' => t('Name Published In'),
		'help' => t('Name Published In'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['taxon_concept_id'] = array(
		'title' => t('Taxon Concept ID'),
		'help' => t('Taxon Concept ID'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['accepted_name_usage'] = array(
		'title' => t('Accepted Name Usage'),
		'help' => t('Accepted Name Usage'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['parent_name_usage'] = array(
		'title' => t('Parent Name Usage'),
		'help' => t('Parent Name Usage'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['original_name_usage'] = array(
		'title' => t('Original Name Usage'),
		'help' => t('Original Name Usage'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['name_according_to'] = array(
		'title' => t('Name According To'),
		'help' => t('Name According To'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['name_published_in'] = array(
		'title' => t('Name Published In'),
		'help' => t('Name Published In'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['name_published_in_year'] = array(
		'title' => t('Name Published In Year'),
		'help' => t('Name Published In Year'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['higher_classification'] = array(
		'title' => t('Higher Classification'),
		'help' => t('Higher Classification'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['kingdom'] = array(
		'title' => t('Kingdom'),
		'help' => t('Kingdom'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['phylum'] = array(
		'title' => t('Phylum'),
		'help' => t('Phylum'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['class'] = array(
		'title' => t('Class'),
		'help' => t('Class'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['order'] = array(
		'title' => t('Order'),
		'help' => t('Order'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['family'] = array(
		'title' => t('Family'),
		'help' => t('Family'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['genus'] = array(
		'title' => t('Genus'),
		'help' => t('Genus'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['subgenus'] = array(
		'title' => t('Subgenus'),
		'help' => t('Subgenus'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['specific_epithet'] = array(
		'title' => t('Specific Epithet'),
		'help' => t('Specific Epithet'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['infraspecific_epithet'] = array(
		'title' => t('Infraspecific Epithet'),
		'help' => t('Infraspecific Epithet'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['taxon_rank'] = array(
		'title' => t('Taxon Rank'),
		'help' => t('Taxon Rank'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['verbatim_taxon_rank'] = array(
		'title' => t('Verbatim Taxon Rank'),
		'help' => t('Verbatim Taxon Rank'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['scientific_name_authorship'] = array(
		'title' => t('Scientific Name Authorship'),
		'help' => t('Scientific Name Authorship'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['vernacular_name'] = array(
		'title' => t('Vernacular Name'),
		'help' => t('Vernacular Name'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['nomenclatural_code'] = array(
		'title' => t('Nomenclatural Code'),
		'help' => t('Nomenclatural Code'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['taxonomic_status'] = array(
		'title' => t('Taxonomic Status'),
		'help' => t('Taxonomic Status'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['nomenclatural_status'] = array(
		'title' => t('Nomenclatural Status'),
		'help' => t('Nomenclatural Status'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	$data['darwincore']['taxon_remarks'] = array(
		'title' => t('Taxon Remarks'),
		'help' => t('Taxon Remarks'),
		'field' => array(
			'handler' => 'views_handler_field_node',
			'click sortable' => TRUE,
		),
	);
	
	return $data;


}
