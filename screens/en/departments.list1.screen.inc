<?php
$structure['xsl_file'] = 'std.list1.xsl';

$structure['tables']['main'] = 'departments';

// identify the column specs - may use 'width' or 'class'
$structure['main']['columns'][] = array('width' => 5);
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');
$structure['main']['columns'][] = array('width' => '*');

// identify the field names and their screen labels
$structure['main']['fields'][] = array('selectbox' => 'Select');
$structure['main']['fields'][] = array('department_id' => 'Department Id');
$structure['main']['fields'][] = array('department_title' => 'Department Title');
$structure['main']['fields'][] = array('offersdegreeprograms' => 'Offersdegreeprograms');
$structure['main']['fields'][] = array('department_isactive' => 'Department Isactive');
$structure['main']['fields'][] = array('department_shortcode' => 'Department Shortcode');
$structure['main']['fields'][] = array('fact_id' => 'Fact Id');
$structure['main']['fields'][] = array('mis_dept_id' => 'Mis Dept Id');

// the NOSORT keyword is optional, and will prevent the label from being a hyperlink
// which will allow the data to be sorted on that column

?>