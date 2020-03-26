<?php
$structure['xsl_file'] = 'std.list1.xsl';

$structure['tables']['main'] = 'faculty';

// identify the column specs - may use 'width' or 'class'
$structure['main']['columns'][] = array('width' => 5);
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');

// identify the field names and their screen labels
$structure['main']['fields'][] = array('selectbox' => 'Select');
$structure['main']['fields'][] = array('faculty_id' => 'Faculty Id');
$structure['main']['fields'][] = array('faculty_title' => 'Faculty Title');

// the NOSORT keyword is optional, and will prevent the label from being a hyperlink
// which will allow the data to be sorted on that column

?>