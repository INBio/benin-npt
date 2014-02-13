<?php
/**
 * @file
 * feeds_dwca.feeds_importer_default.inc
 *
 * Add the configuration of the
 *     - 'Darwincore Core Importer'
 *         (darwincore_importer)
 */

/**
 * Implements hook_feeds_importer_default().
 *
 * To add the default configuration of the darwincore_importer
 *
 */
function dwca_feeds_feeds_importer_default() {
	$export = array();

	$feeds_importer = new stdClass();
	$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
	$feeds_importer->api_version = 1;
	$feeds_importer->id = 'darwincore_importer';
	$feeds_importer->config = array(
		'name' => 'Darwin Core Importer',
		'description' => 'Import specimen records in Darwin Core format. ',
		'fetcher' => array(
			'plugin_key' => 'FeedsFileFetcher',
			'config' => array(
				'allowed_extensions' => 'xls xlsx txt',
				'direct' => 0,
			),
		),
		'parser' => array(
			'plugin_key' => 'FeedsExcelParser',
			'config' => array(
				'no_headers' => 0,
				'all_worksheets' => 0,
				'max_rows' => '65535',
			),
		),
		'processor' => array(
			'plugin_key' => 'FeedsNodeProcessor',
			'config' => array(
				'content_type' => 'darwincore',
				'expire' => '-1',
				'author' => 0,
				'mappings' => array(
					0 => array(
						'source' => 'institutionCode',
						'target' => 'institution_code',
						'unique' => FALSE,
					),
					1 => array(
						'source' => 'modified',
						'target' => 'modified',
						'unique' => FALSE,
					),
					2 => array(
						'source' => 'collectionCode',
						'target' => 'collection_code',
						'unique' => FALSE,
					),
					3 => array(
						'source' => 'basisOfRecord',
						'target' => 'basis_of_record',
						'unique' => FALSE,
					),
					4 => array(
						'source' => 'catalogNumber',
						'target' => 'catalog_number',
						'unique' => FALSE,
					),
					5 => array(
						'source' => 'decimalLatitude',
						'target' => 'decimal_latitude',
						'unique' => FALSE,
					),
					6 => array(
						'source' => 'decimalLongitude',
						'target' => 'decimal_longitude',
						'unique' => FALSE,
					),
					7 => array(
						'source' => 'scientificName',
						'target' => 'node-darwincore-field_taxonomic_name',
						'unique' => FALSE,
					),					
				),
				'update_existing' => '1',
				'input_format' => 'plain_text',
			),
		),
		'update' => 0,
		'import_period' => '-1',
		'expire_period' => 3600,
		'import_on_create' => 1,
		'process_in_background' => 0,
	);
	$export['darwincore_importer'] = $feeds_importer;

	return $export;
}
