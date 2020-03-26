<?php
$structure['xsl_file'] = 'std.list2.xsl';

$structure['tables']['outer'] = 'departments';

// identify the column specs - may use 'width' or 'class'
$structure['outer']['columns'][] = array('width' => '20%');
$structure['outer']['columns'][] = array('width' => '*');

// identify the field names and their screen labels
$structure['outer']['fields'][] = array('department_id' => 'Department Id');
$structure['outer']['fields'][] = array('department_title' => 'Department Title');
$structure['outer']['fields'][] = array('offersdegreeprograms' => 'Offersdegreeprograms');
$structure['outer']['fields'][] = array('department_isactive' => 'Department Isactive');
$structure['outer']['fields'][] = array('department_shortcode' => 'Department Shortcode');
$structure['outer']['fields'][] = array('fact_id' => 'Fact Id');
$structure['outer']['fields'][] = array('mis_dept_id' => 'Mis Dept Id');

$structure['tables']['inner'] = 'pg';

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
$structure['inner']['columns'][] = array('width' => '*');
$structure['inner']['columns'][] = array('width' => '*');

// identify the field names and their screen labels
$structure['inner']['fields'][] = array('selectbox' => 'Select');
$structure['inner']['fields'][] = array('program_id' => 'Program Id');
$structure['inner']['fields'][] = array('program_title' => 'Program Title');
$structure['inner']['fields'][] = array('deptid' => 'Deptid');
$structure['inner']['fields'][] = array('program_shortcode' => 'Program Shortcode');
$structure['inner']['fields'][] = array('duration' => 'Duration');
$structure['inner']['fields'][] = array('reg_prefix' => 'Reg Prefix');
$structure['inner']['fields'][] = array('years_of_education' => 'Years Of Education');
$structure['inner']['fields'][] = array('level_id' => 'Level Id');
$structure['inner']['fields'][] = array('program_number' => 'Program Number');
$structure['inner']['fields'][] = array('semesters' => 'Semesters');

// the NOSORT keyword is optional, and will prevent the label from being a hyperlink
// which will allow the data to be sorted on that column

?>