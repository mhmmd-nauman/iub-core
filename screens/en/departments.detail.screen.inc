<?php
$structure['xsl_file'] = 'std.detail1.xsl';

$structure['tables']['main'] = 'departments';

// identify the column specs - may use 'width' or 'class'
$structure['main']['columns'][] = array('width' => '20%');
$structure['main']['columns'][] = array('width' => '*');

// identify the contents of each row in the table (two formats are allowed)
// the SHORT format defines two cells per row, a label followed by a field, as in:
$structure['main']['fields'][] = array('department_id' => 'Department Id');
$structure['main']['fields'][] = array('department_title' => 'Department Title');
$structure['main']['fields'][] = array('offersdegreeprograms' => 'Offersdegreeprograms');
$structure['main']['fields'][] = array('department_isactive' => 'Department Isactive');
$structure['main']['fields'][] = array('department_shortcode' => 'Department Shortcode');
$structure['main']['fields'][] = array('fact_id' => 'Fact Id');
$structure['main']['fields'][] = array('mis_dept_id' => 'Mis Dept Id');

// the LONG format defines more than two cells in the row, as in:

// it is possible to have a field without a label, but not a label without a field

// all other rows in the table should span the same number of columns (cells), so ...
// any cell can be expanded beyond its default of 1 by adding the COLSPAN keyword

?>