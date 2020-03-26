<?php
$structure['xsl_file'] = 'std.list2.xsl';

$structure['tables']['outer'] = 'x_pers_type';

// identify the column specs - may use 'width' or 'class'
$structure['outer']['columns'][] = array('width' => '20%');
$structure['outer']['columns'][] = array('width' => '*');

// identify the field names and their screen labels
$structure['outer']['fields'][] = array('pers_type_id' => 'Pers Type Id');
$structure['outer']['fields'][] = array('pers_type_desc' => 'Pers Type Desc');
$structure['outer']['fields'][] = array('created_date' => 'Created Date');
$structure['outer']['fields'][] = array('created_user' => 'Created User');
$structure['outer']['fields'][] = array('revised_date' => 'Revised Date');
$structure['outer']['fields'][] = array('revised_user' => 'Revised User');

$structure['tables']['inner'] = 'x_tree_level';

// identify the column specs - may use 'width' or 'class'
$structure['inner']['columns'][] = array('width' => 5);
$structure['inner']['columns'][] = array('width' => '*');
$structure['inner']['columns'][] = array('width' => '*');
$structure['inner']['columns'][] = array('width' => '*');
$structure['inner']['columns'][] = array('width' => '*');
$structure['inner']['columns'][] = array('width' => '*');
$structure['inner']['columns'][] = array('width' => '*');
$structure['inner']['columns'][] = array('width' => '*');
$structure['inner']['columns'][] = array('width' => '*');

// identify the field names and their screen labels
$structure['inner']['fields'][] = array('selectbox' => 'Select');
$structure['inner']['fields'][] = array('tree_type_id' => 'Tree Type Id');
$structure['inner']['fields'][] = array('tree_level_id' => 'Tree Level Id');
$structure['inner']['fields'][] = array('tree_level_seq' => 'Tree Level Seq');
$structure['inner']['fields'][] = array('tree_level_desc' => 'Tree Level Desc');
$structure['inner']['fields'][] = array('created_date' => 'Created Date');
$structure['inner']['fields'][] = array('created_user' => 'Created User');
$structure['inner']['fields'][] = array('revised_date' => 'Revised Date');
$structure['inner']['fields'][] = array('revised_user' => 'Revised User');

// the NOSORT keyword is optional, and will prevent the label from being a hyperlink
// which will allow the data to be sorted on that column

?>