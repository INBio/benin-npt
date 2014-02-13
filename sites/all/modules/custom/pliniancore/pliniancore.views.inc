<?php


/**
 * Implement hook_views_data().
 *
 * Describe table "plinian" so that it can be used by views
 */
function pliniancore_views_data() {
	$data = array();
	$data['pliniancore']['table']['group'] = t('Plinian Core Fields');
	$data['pliniancore']['table']['join']['node'] = array(
		'left_field' => 'nid',
		'field' => 'nid',
	);

	$data['pliniancore']['institution_code'] = array(
		'title' => t('Institution Code'),
		'help' => t('Institution Code'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['date_last_modified'] = array(
		'title' => t('Date Last Modified'),
		'help' => t('Date Last Modified'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);	
	$data['pliniancore']['taxon_record_id'] = array(
		'title' => t('Taxon Record ID'),
		'help' => t('Taxon Record ID'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['taxon_record_language'] = array(
		'title' => t('Taxon Record Language'),
		'help' => t('Taxon Record Language'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['creators'] = array(
		'title' => t('Creators'),
		'help' => t('Creators'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['distribution'] = array(
		'title' => t('Distribution'),
		'help' => t('Distribution'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['abstract'] = array(
		'title' => t('Abstract'),
		'help' => t('Abstract'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);	
	$data['pliniancore']['kingdom'] = array(
		'title' => t('Kingdom'),
		'help' => t('Kingdom'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['phylum'] = array(
		'title' => t('Phylum'),
		'help' => t('Phylum'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['class'] = array(
		'title' => t('Class'),
		'help' => t('Class'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['order'] = array(
		'title' => t('Order'),
		'help' => t('Order'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['family'] = array(
		'title' => t('Family'),
		'help' => t('Family'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['genus'] = array(
		'title' => t('Genus'),
		'help' => t('Genus'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['synonyms'] = array(
		'title' => t('Synonyms'),
		'help' => t('Synonyms'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['author_year_of_scientific_name'] = array(
		'title' => t('Author Year of Scientific Name'),
		'help' => t('Author Year of Scientific Name'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['species_publication_reference'] = array(
		'title' => t('Species Publication Reference'),
		'help' => t('Species Publication Reference'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['common_names'] = array(
		'title' => t('Common Names'),
		'help' => t('Common Names'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['Typification'] = array(
		'title' => t('typification'),
		'help' => t('typification'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['global_unique_identifier'] = array(
		'title' => t('Global Unique Identifier'),
		'help' => t('Global Unique Identifier'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['contributors'] = array(
		'title' => t('Contributors'),
		'help' => t('Contributors'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['date_created'] = array(
		'title' => t('Date Created'),
		'help' => t('Date Created'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['habit'] = array(
		'title' => t('Habit'),
		'help' => t('Habit'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['life_cycle'] = array(
		'title' => t('Life Cycle'),
		'help' => t('Life Cycle'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['reproduction'] = array(
		'title' => t('Reproduction'),
		'help' => t('Reproduction'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['annual_cycle'] = array(
		'title' => t('Annual Cycle'),
		'help' => t('Annual Cycle'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['scientific_description'] = array(
		'title' => t('Scientific Description'),
		'help' => t('Scientific Description'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['brief_description'] = array(
		'title' => t('Brief Description'),
		'help' => t('Brief Description'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['feeding'] = array(
		'title' => t('Feeding'),
		'help' => t('Feeding'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['behavior'] = array(
		'title' => t('Behavior'),
		'help' => t('Behavior'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['interactions'] = array(
		'title' => t('Interactions'),
		'help' => t('Interactions'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['chromosomic_number_n'] = array(
		'title' => t('Chromosomic Number N'),
		'help' => t('Chromosomic Number N'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['molecular_data'] = array(
		'title' => t('Molecular Data'),
		'help' => t('Molecular Data'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['population_biology'] = array(
		'title' => t('Population Biology'),
		'help' => t('Population Biology'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['threat_status'] = array(
		'title' => t('Threat Status'),
		'help' => t('Threat Status'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['legislation'] = array(
		'title' => t('Legislation'),
		'help' => t('Legislation'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['habitat'] = array(
		'title' => t('Habitat'),
		'help' => t('Habitat'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['territory'] = array(
		'title' => t('Territory'),
		'help' => t('Territory'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['endemicity'] = array(
		'title' => t('Endemicity'),
		'help' => t('Endemicity'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['uses'] = array(
		'title' => t('Uses'),
		'help' => t('Uses'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['management'] = array(
		'title' => t('Management'),
		'help' => t('Management'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['folklore'] = array(
		'title' => t('Folklore'),
		'help' => t('Folklore'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['references'] = array(
		'title' => t('References'),
		'help' => t('References'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['unstructured_documentation'] = array(
		'title' => t('Unstructured Documentation'),
		'help' => t('Unstructured Documentation'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['other_information_sources'] = array(
		'title' => t('Other Information Sources'),
		'help' => t('Other Information Sources'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['papers'] = array(
		'title' => t('Papers'),
		'help' => t('Papers'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['identification_keys'] = array(
		'title' => t('Identification Keys'),
		'help' => t('Identification Keys'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['migratory_data'] = array(
		'title' => t('Migratory Data'),
		'help' => t('Migratory Data'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['ecological_significance'] = array(
		'title' => t('Ecological Significance'),
		'help' => t('Ecological Significance'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['unstructured_natural_history'] = array(
		'title' => t('Unstructured Natural History'),
		'help' => t('Unstructured Natural History'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['invasiveness_data'] = array(
		'title' => t('Invasiveness Data'),
		'help' => t('Invasiveness Data'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);
	$data['pliniancore']['target_audiences'] = array(
		'title' => t('Target Audiences'),
		'help' => t('Target Audiences'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);	
	$data['pliniancore']['version'] = array(
		'title' => t('Version'),
		'help' => t('Version'),
		'field' => array(
			'handler' => 'views_handler_field',
			'click sortable' => TRUE,
		),
	);	

	return $data;
}
