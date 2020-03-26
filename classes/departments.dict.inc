<?php
    // file created on March 20, 2020, 12:10 pm
    
    // field specifications for table customer.departments
    $fieldspec['department_id']             = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'pkey' => 'y',
                                                    'required' => 'y');
    
    $fieldspec['department_title']          = array('type' => 'string',
                                                    'size' => 65535,
                                                    'required' => 'y');
    
    $fieldspec['offersdegreeprograms']      = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'required' => 'y');
    
    $fieldspec['department_isactive']       = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'required' => 'y');
    
    $fieldspec['department_shortcode']      = array('type' => 'string',
                                                    'size' => 65535,
                                                    'required' => 'y');
    
    $fieldspec['fact_id']                   = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'required' => 'y');
    
    $fieldspec['mis_dept_id']               = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'required' => 'y');
    
    // primary key details 
    $this->primary_key                      = array('department_id');
    
    // unique key details 
    $this->unique_keys                      = array();
    
    // child relationship details 
    $this->child_relations[]                = array('child' => 'programs',
                                                    'type' => 'RES',
                                                    'fields' => array('department_id' => 'deptid'));
    
    // parent relationship details 
    $this->parent_relations                 = array();
    
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