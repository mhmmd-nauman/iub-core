<?php
$structure['xsl_file'] = 'std.detail1.xsl';

$structure['tables']['main'] = 'x_tree_level';

// identify the column specs - may use 'width' or 'class'
$structure['main']['columns'][] = array('width' => '20%');
$structure['main']['columns'][] = array('width' => '*');

// identify the contents of each row in the table (two formats are allowed)
// the SHORT format defines two cells per row, a label followed by a field, as in:
$structure['main']['fields'][] = array('tree_type_id' => 'Tree Type Id');
$structure['main']['fields'][] = array('tree_level_id' => 'Tree Level Id');
$structure['main']['fields'][] = array('tree_level_seq' => 'Tree Level Seq');
$structure['main']['fields'][] = array('tree_level_desc' => 'Tree Level Desc');
$structure['main']['fields'][] = array('created_date' => 'Created Date');
$structure['main']['fields'][] = array('created_user' => 'Created User');
$structure['main']['fields'][] = array('revised_date' => 'Revised Date');
$structure['main']['fields'][] = array('revised_user' => 'Revised User');

// the LONG format defines more than two cells in the row, as in:

// it is possible to have a field without a label, but not a label without a field

// all other rows in the table should span the same number of columns (cells), so ...
// any cell can be expanded beyond its default of 1 by adding the COLSPAN keyword

?>