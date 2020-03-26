<?php
$structure['xsl_file'] = 'std.detail1.xsl';

$structure['tables']['main'] = 'teacher';

// identify the column specs - may use 'width' or 'class'
$structure['main']['columns'][] = array('width' => '20%');
$structure['main']['columns'][] = array('width' => '*');

// identify the contents of each row in the table (two formats are allowed)
// the SHORT format defines two cells per row, a label followed by a field, as in:
$structure['main']['fields'][] = array('teacher_id' => 'Teacher Id');
$structure['main']['fields'][] = array('teacher_title' => 'Teacher Title');
$structure['main']['fields'][] = array('teacher_firstname' => 'Teacher Firstname');
$structure['main']['fields'][] = array('teacher_lastname' => 'Teacher Lastname');
$structure['main']['fields'][] = array('deptid' => 'Deptid');
$structure['main']['fields'][] = array('isvisiting' => 'Isvisiting');
$structure['main']['fields'][] = array('isactive' => 'Isactive');
$structure['main']['fields'][] = array('isonleave' => 'Isonleave');
$structure['main']['fields'][] = array('userid' => 'Userid');
$structure['main']['fields'][] = array('personal_email' => 'Personal Email');
$structure['main']['fields'][] = array('teacher_middlename' => 'Teacher Middlename');

// the LONG format defines more than two cells in the row, as in:

// it is possible to have a field without a label, but not a label without a field

// all other rows in the table should span the same number of columns (cells), so ...
// any cell can be expanded beyond its default of 1 by adding the COLSPAN keyword

?>