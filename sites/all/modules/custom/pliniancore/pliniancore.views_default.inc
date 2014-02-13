<?php



/**
 * Implementation of hook_views_default_views().
 */
function pliniancore_views_default_views(){
	$view = new view();
	$view->name = 'species_record';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'node';
	$view->human_name = 'species_record';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'species_record';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Plinian Core Fields: Abstract */
$handler->display->display_options['fields']['abstract']['id'] = 'abstract';
$handler->display->display_options['fields']['abstract']['table'] = 'pliniancore';
$handler->display->display_options['fields']['abstract']['field'] = 'abstract';
/* Field: Plinian Core Fields: Annual Cycle */
$handler->display->display_options['fields']['annual_cycle']['id'] = 'annual_cycle';
$handler->display->display_options['fields']['annual_cycle']['table'] = 'pliniancore';
$handler->display->display_options['fields']['annual_cycle']['field'] = 'annual_cycle';
/* Field: Plinian Core Fields: Author Year of Scientific Name */
$handler->display->display_options['fields']['author_year_of_scientific_name']['id'] = 'author_year_of_scientific_name';
$handler->display->display_options['fields']['author_year_of_scientific_name']['table'] = 'pliniancore';
$handler->display->display_options['fields']['author_year_of_scientific_name']['field'] = 'author_year_of_scientific_name';
/* Field: Plinian Core Fields: Behavior */
$handler->display->display_options['fields']['behavior']['id'] = 'behavior';
$handler->display->display_options['fields']['behavior']['table'] = 'pliniancore';
$handler->display->display_options['fields']['behavior']['field'] = 'behavior';
/* Field: Plinian Core Fields: Brief Description */
$handler->display->display_options['fields']['brief_description']['id'] = 'brief_description';
$handler->display->display_options['fields']['brief_description']['table'] = 'pliniancore';
$handler->display->display_options['fields']['brief_description']['field'] = 'brief_description';
/* Field: Plinian Core Fields: Chromosomic Number N */
$handler->display->display_options['fields']['chromosomic_number_n']['id'] = 'chromosomic_number_n';
$handler->display->display_options['fields']['chromosomic_number_n']['table'] = 'pliniancore';
$handler->display->display_options['fields']['chromosomic_number_n']['field'] = 'chromosomic_number_n';
/* Field: Plinian Core Fields: Class */
$handler->display->display_options['fields']['class']['id'] = 'class';
$handler->display->display_options['fields']['class']['table'] = 'pliniancore';
$handler->display->display_options['fields']['class']['field'] = 'class';
/* Field: Plinian Core Fields: Common Names */
$handler->display->display_options['fields']['common_names']['id'] = 'common_names';
$handler->display->display_options['fields']['common_names']['table'] = 'pliniancore';
$handler->display->display_options['fields']['common_names']['field'] = 'common_names';
/* Field: Plinian Core Fields: Contributors */
$handler->display->display_options['fields']['contributors']['id'] = 'contributors';
$handler->display->display_options['fields']['contributors']['table'] = 'pliniancore';
$handler->display->display_options['fields']['contributors']['field'] = 'contributors';
/* Field: Plinian Core Fields: Creators */
$handler->display->display_options['fields']['creators']['id'] = 'creators';
$handler->display->display_options['fields']['creators']['table'] = 'pliniancore';
$handler->display->display_options['fields']['creators']['field'] = 'creators';
/* Field: Plinian Core Fields: Date Created */
$handler->display->display_options['fields']['date_created']['id'] = 'date_created';
$handler->display->display_options['fields']['date_created']['table'] = 'pliniancore';
$handler->display->display_options['fields']['date_created']['field'] = 'date_created';
/* Field: Plinian Core Fields: Date Last Modified */
$handler->display->display_options['fields']['date_last_modified']['id'] = 'date_last_modified';
$handler->display->display_options['fields']['date_last_modified']['table'] = 'pliniancore';
$handler->display->display_options['fields']['date_last_modified']['field'] = 'date_last_modified';
/* Field: Plinian Core Fields: Distribution */
$handler->display->display_options['fields']['distribution']['id'] = 'distribution';
$handler->display->display_options['fields']['distribution']['table'] = 'pliniancore';
$handler->display->display_options['fields']['distribution']['field'] = 'distribution';
/* Field: Plinian Core Fields: Ecological Significance */
$handler->display->display_options['fields']['ecological_significance']['id'] = 'ecological_significance';
$handler->display->display_options['fields']['ecological_significance']['table'] = 'pliniancore';
$handler->display->display_options['fields']['ecological_significance']['field'] = 'ecological_significance';
/* Field: Plinian Core Fields: Endemicity */
$handler->display->display_options['fields']['endemicity']['id'] = 'endemicity';
$handler->display->display_options['fields']['endemicity']['table'] = 'pliniancore';
$handler->display->display_options['fields']['endemicity']['field'] = 'endemicity';
/* Field: Plinian Core Fields: Family */
$handler->display->display_options['fields']['family']['id'] = 'family';
$handler->display->display_options['fields']['family']['table'] = 'pliniancore';
$handler->display->display_options['fields']['family']['field'] = 'family';
/* Field: Plinian Core Fields: Feeding */
$handler->display->display_options['fields']['feeding']['id'] = 'feeding';
$handler->display->display_options['fields']['feeding']['table'] = 'pliniancore';
$handler->display->display_options['fields']['feeding']['field'] = 'feeding';
/* Field: Plinian Core Fields: Folklore */
$handler->display->display_options['fields']['folklore']['id'] = 'folklore';
$handler->display->display_options['fields']['folklore']['table'] = 'pliniancore';
$handler->display->display_options['fields']['folklore']['field'] = 'folklore';
/* Field: Plinian Core Fields: Genus */
$handler->display->display_options['fields']['genus']['id'] = 'genus';
$handler->display->display_options['fields']['genus']['table'] = 'pliniancore';
$handler->display->display_options['fields']['genus']['field'] = 'genus';
/* Field: Plinian Core Fields: Global Unique Identifier */
$handler->display->display_options['fields']['global_unique_identifier']['id'] = 'global_unique_identifier';
$handler->display->display_options['fields']['global_unique_identifier']['table'] = 'pliniancore';
$handler->display->display_options['fields']['global_unique_identifier']['field'] = 'global_unique_identifier';
/* Field: Plinian Core Fields: Habit */
$handler->display->display_options['fields']['habit']['id'] = 'habit';
$handler->display->display_options['fields']['habit']['table'] = 'pliniancore';
$handler->display->display_options['fields']['habit']['field'] = 'habit';
/* Field: Plinian Core Fields: Habitat */
$handler->display->display_options['fields']['habitat']['id'] = 'habitat';
$handler->display->display_options['fields']['habitat']['table'] = 'pliniancore';
$handler->display->display_options['fields']['habitat']['field'] = 'habitat';
/* Field: Plinian Core Fields: Identification Keys */
$handler->display->display_options['fields']['identification_keys']['id'] = 'identification_keys';
$handler->display->display_options['fields']['identification_keys']['table'] = 'pliniancore';
$handler->display->display_options['fields']['identification_keys']['field'] = 'identification_keys';
/* Field: Plinian Core Fields: Institution Code */
$handler->display->display_options['fields']['institution_code']['id'] = 'institution_code';
$handler->display->display_options['fields']['institution_code']['table'] = 'pliniancore';
$handler->display->display_options['fields']['institution_code']['field'] = 'institution_code';
/* Field: Plinian Core Fields: Interactions */
$handler->display->display_options['fields']['interactions']['id'] = 'interactions';
$handler->display->display_options['fields']['interactions']['table'] = 'pliniancore';
$handler->display->display_options['fields']['interactions']['field'] = 'interactions';
/* Field: Plinian Core Fields: Invasiveness Data */
$handler->display->display_options['fields']['invasiveness_data']['id'] = 'invasiveness_data';
$handler->display->display_options['fields']['invasiveness_data']['table'] = 'pliniancore';
$handler->display->display_options['fields']['invasiveness_data']['field'] = 'invasiveness_data';
/* Field: Plinian Core Fields: Kingdom */
$handler->display->display_options['fields']['kingdom']['id'] = 'kingdom';
$handler->display->display_options['fields']['kingdom']['table'] = 'pliniancore';
$handler->display->display_options['fields']['kingdom']['field'] = 'kingdom';
/* Field: Plinian Core Fields: Legislation */
$handler->display->display_options['fields']['legislation']['id'] = 'legislation';
$handler->display->display_options['fields']['legislation']['table'] = 'pliniancore';
$handler->display->display_options['fields']['legislation']['field'] = 'legislation';
/* Field: Plinian Core Fields: Life Cycle */
$handler->display->display_options['fields']['life_cycle']['id'] = 'life_cycle';
$handler->display->display_options['fields']['life_cycle']['table'] = 'pliniancore';
$handler->display->display_options['fields']['life_cycle']['field'] = 'life_cycle';
/* Field: Plinian Core Fields: Management */
$handler->display->display_options['fields']['management']['id'] = 'management';
$handler->display->display_options['fields']['management']['table'] = 'pliniancore';
$handler->display->display_options['fields']['management']['field'] = 'management';
/* Field: Plinian Core Fields: Migratory Data */
$handler->display->display_options['fields']['migratory_data']['id'] = 'migratory_data';
$handler->display->display_options['fields']['migratory_data']['table'] = 'pliniancore';
$handler->display->display_options['fields']['migratory_data']['field'] = 'migratory_data';
/* Field: Plinian Core Fields: Molecular Data */
$handler->display->display_options['fields']['molecular_data']['id'] = 'molecular_data';
$handler->display->display_options['fields']['molecular_data']['table'] = 'pliniancore';
$handler->display->display_options['fields']['molecular_data']['field'] = 'molecular_data';
/* Field: Plinian Core Fields: Order */
$handler->display->display_options['fields']['order']['id'] = 'order';
$handler->display->display_options['fields']['order']['table'] = 'pliniancore';
$handler->display->display_options['fields']['order']['field'] = 'order';
/* Field: Plinian Core Fields: Other Information Sources */
$handler->display->display_options['fields']['other_information_sources']['id'] = 'other_information_sources';
$handler->display->display_options['fields']['other_information_sources']['table'] = 'pliniancore';
$handler->display->display_options['fields']['other_information_sources']['field'] = 'other_information_sources';
/* Field: Plinian Core Fields: Papers */
$handler->display->display_options['fields']['papers']['id'] = 'papers';
$handler->display->display_options['fields']['papers']['table'] = 'pliniancore';
$handler->display->display_options['fields']['papers']['field'] = 'papers';
/* Field: Plinian Core Fields: Phylum */
$handler->display->display_options['fields']['phylum']['id'] = 'phylum';
$handler->display->display_options['fields']['phylum']['table'] = 'pliniancore';
$handler->display->display_options['fields']['phylum']['field'] = 'phylum';
/* Field: Plinian Core Fields: Population Biology */
$handler->display->display_options['fields']['population_biology']['id'] = 'population_biology';
$handler->display->display_options['fields']['population_biology']['table'] = 'pliniancore';
$handler->display->display_options['fields']['population_biology']['field'] = 'population_biology';
/* Field: Plinian Core Fields: References */
$handler->display->display_options['fields']['references']['id'] = 'references';
$handler->display->display_options['fields']['references']['table'] = 'pliniancore';
$handler->display->display_options['fields']['references']['field'] = 'references';
/* Field: Plinian Core Fields: Reproduction */
$handler->display->display_options['fields']['reproduction']['id'] = 'reproduction';
$handler->display->display_options['fields']['reproduction']['table'] = 'pliniancore';
$handler->display->display_options['fields']['reproduction']['field'] = 'reproduction';
/* Field: Plinian Core Fields: Scientific Description */
$handler->display->display_options['fields']['scientific_description']['id'] = 'scientific_description';
$handler->display->display_options['fields']['scientific_description']['table'] = 'pliniancore';
$handler->display->display_options['fields']['scientific_description']['field'] = 'scientific_description';
/* Field: Plinian Core Fields: Species Publication Reference */
$handler->display->display_options['fields']['species_publication_reference']['id'] = 'species_publication_reference';
$handler->display->display_options['fields']['species_publication_reference']['table'] = 'pliniancore';
$handler->display->display_options['fields']['species_publication_reference']['field'] = 'species_publication_reference';
/* Field: Plinian Core Fields: Synonyms */
$handler->display->display_options['fields']['synonyms']['id'] = 'synonyms';
$handler->display->display_options['fields']['synonyms']['table'] = 'pliniancore';
$handler->display->display_options['fields']['synonyms']['field'] = 'synonyms';
/* Field: Plinian Core Fields: Target Audiences */
$handler->display->display_options['fields']['target_audiences']['id'] = 'target_audiences';
$handler->display->display_options['fields']['target_audiences']['table'] = 'pliniancore';
$handler->display->display_options['fields']['target_audiences']['field'] = 'target_audiences';
/* Field: Plinian Core Fields: Taxon Record ID */
$handler->display->display_options['fields']['taxon_record_id']['id'] = 'taxon_record_id';
$handler->display->display_options['fields']['taxon_record_id']['table'] = 'pliniancore';
$handler->display->display_options['fields']['taxon_record_id']['field'] = 'taxon_record_id';
/* Field: Plinian Core Fields: Taxon Record Language */
$handler->display->display_options['fields']['taxon_record_language']['id'] = 'taxon_record_language';
$handler->display->display_options['fields']['taxon_record_language']['table'] = 'pliniancore';
$handler->display->display_options['fields']['taxon_record_language']['field'] = 'taxon_record_language';
/* Field: Plinian Core Fields: Territory */
$handler->display->display_options['fields']['territory']['id'] = 'territory';
$handler->display->display_options['fields']['territory']['table'] = 'pliniancore';
$handler->display->display_options['fields']['territory']['field'] = 'territory';
/* Field: Plinian Core Fields: Threat Status */
$handler->display->display_options['fields']['threat_status']['id'] = 'threat_status';
$handler->display->display_options['fields']['threat_status']['table'] = 'pliniancore';
$handler->display->display_options['fields']['threat_status']['field'] = 'threat_status';
/* Field: Plinian Core Fields: typification */
$handler->display->display_options['fields']['Typification']['id'] = 'Typification';
$handler->display->display_options['fields']['Typification']['table'] = 'pliniancore';
$handler->display->display_options['fields']['Typification']['field'] = 'Typification';
/* Field: Plinian Core Fields: Unstructured Documentation */
$handler->display->display_options['fields']['unstructured_documentation']['id'] = 'unstructured_documentation';
$handler->display->display_options['fields']['unstructured_documentation']['table'] = 'pliniancore';
$handler->display->display_options['fields']['unstructured_documentation']['field'] = 'unstructured_documentation';
/* Field: Plinian Core Fields: Unstructured Natural History */
$handler->display->display_options['fields']['unstructured_natural_history']['id'] = 'unstructured_natural_history';
$handler->display->display_options['fields']['unstructured_natural_history']['table'] = 'pliniancore';
$handler->display->display_options['fields']['unstructured_natural_history']['field'] = 'unstructured_natural_history';
/* Field: Plinian Core Fields: Uses */
$handler->display->display_options['fields']['uses']['id'] = 'uses';
$handler->display->display_options['fields']['uses']['table'] = 'pliniancore';
$handler->display->display_options['fields']['uses']['field'] = 'uses';
/* Field: Plinian Core Fields: Version */
$handler->display->display_options['fields']['version']['id'] = 'version';
$handler->display->display_options['fields']['version']['table'] = 'pliniancore';
$handler->display->display_options['fields']['version']['field'] = 'version';
/* Field: Content: Scientific Name */
$handler->display->display_options['fields']['field_taxonomic_name']['id'] = 'field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['table'] = 'field_data_field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['field'] = 'field_taxonomic_name';
$handler->display->display_options['fields']['field_taxonomic_name']['label'] = '';
$handler->display->display_options['fields']['field_taxonomic_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_taxonomic_name']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_taxonomic_name']['type'] = 'taxonomy_term_reference_plain';
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
  'pliniancore' => 'pliniancore',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_species');
$handler->display->display_options['path'] = 'node/%/pliniancore';

	$views[$view->name] = $view;
	return $views;

}
