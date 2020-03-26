<?php
$structure['xsl_file'] = 'std.list1.xsl';

$structure['tables']['main'] = 'programs';

// identify the column specs - may use 'width' or 'class'
$structure['main']['columns'][] = array('width' => 5);
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');

// identify the field names and their screen labels
$structure['main']['fields'][] = array('selectbox' => 'Select');
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

// the NOSORT keyword is optional, and will prevent the label from being a hyperlink
// which will allow the data to be sorted on that column

?>