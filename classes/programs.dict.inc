<?php
    // file created on March 20, 2020, 12:10 pm
    
    // field specifications for table customer.programs
    $fieldspec['program_id']                = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'pkey' => 'y',
                                                    'required' => 'y');
    
    $fieldspec['program_title']             = array('type' => 'string',
                                                    'size' => 65535,
                                                    'required' => 'y');
    
    $fieldspec['deptid']                    = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'required' => 'y');
    
    $fieldspec['program_shortcode']         = array('type' => 'string',
                                                    'size' => 50);
    
    $fieldspec['duration']                  = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['reg_prefix']                = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['years_of_education']        = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['level_id']                  = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['program_number']            = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['semesters']                 = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    // primary key details 
    $this->primary_key                      = array('program_id');
    
    // unique key details 
    $this->unique_keys                      = array();
    
    // child relationship details 
    $this->child_relations                  = array();
    
    // parent relationship details 
    $this->parent_relations[]               = array('parent' => 'departments',
                                                    'parent_field' => 'department_id',
                                                    'fields' => array('deptid' => 'department_id'));
    
    // determines if database updates are recorded in an audit log 
    $this->audit_logging                    = TRUE;
    
    // default sort sequence 
    $this->default_orderby                  = '';
    
    // alternative language options 
    $this->alt_language_table               = '';
    $this->alt_language_cols                = '';
    
    // alias names 
    $this->nameof_start_date                = '';
    $this->nameof_end_date                  = '';
    
    // finished
?>