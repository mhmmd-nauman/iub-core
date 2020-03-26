<?php
    // file created on March 21, 2020, 6:56 am
    
    // field specifications for table customer.teacher
    $fieldspec['teacher_id']                = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'pkey' => 'y',
                                                    'required' => 'y');
    
    $fieldspec['teacher_title']             = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['teacher_firstname']         = array('type' => 'string',
                                                    'size' => 65535);
    
    $fieldspec['teacher_lastname']          = array('type' => 'string',
                                                    'size' => 65535);
    
    $fieldspec['deptid']                    = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['isvisiting']                = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['isactive']                  = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['isonleave']                 = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647);
    
    $fieldspec['userid']                    = array('type' => 'string',
                                                    'size' => 65535);
    
    $fieldspec['personal_email']            = array('type' => 'string',
                                                    'size' => 65535);
    
    $fieldspec['teacher_middlename']        = array('type' => 'string',
                                                    'size' => 65535);
    
    // primary key details 
    $this->primary_key                      = array('teacher_id');
    
    // unique key details 
    $this->unique_keys                      = array();
    
    // child relationship details 
    $this->child_relations                  = array();
    
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