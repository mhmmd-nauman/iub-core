<?php
$structure['xsl_file'] = 'std.detail1.xsl';

$structure['tables']['main'] = 'programs';

// identify the column specs - may use 'width' or 'class'
$structure['main']['columns'][] = array('width' => '20%');
$structure['main']['columns'][] = array('width' => '*');

// identify the contents of each row in the table (two formats are allowed)
// the SHORT format defines two cells per row, a label followed by a field, as in:
$structure['main']['fields'][] = array('program_id' => 'Program Id');
$structure['main']['fields'][] = array('program_title' => 'Program Title');
$structure['main']['fields'][] = array('deptid' => 'Deptid');
$structure['main']['fields'][] = array('program_shortcode' => 'Program Shortcode');
$structure['main']['fields'][] = array('duration' => 'Duration');
$structure['main']['fields'][] = array('reg_prefix' => 'Reg Prefix');
$structure['main']['fields'][] = array('years_of_education' => 'Years Of Education');
$structure['main']['fields'][] = array('level_id' => 'Level Id');
$structure['main']['fields'][] = array('program_number' => 'Program Number');
$structure['main']['fields'][] = array('semesters' => 'Semesters');

// the LONG format defines more than two cells in the row, as in:

// it is possible to have a field without a label, but not a label without a field

// all other rows in the table should span the same number of columns (cells), so ...
// any cell can be expanded beyond its default of 1 by adding the COLSPAN keyword

?>