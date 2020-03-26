<?php
$structure['xsl_file'] = 'std.list1.xsl';

$structure['tables']['main'] = 'teacher';

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
$structure['main']['columns'][] = array('width' => '*');

// identify the field names and their screen labels
$structure['main']['fields'][] = array('selectbox' => 'Select');
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

// the NOSORT keyword is optional, and will prevent the label from being a hyperlink
// which will allow the data to be sorted on that column

?>