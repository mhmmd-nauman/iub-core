<?php
    // file created on March 21, 2020, 8:24 am
    
    // field specifications for table test1.x_pers_type
    $fieldspec['pers_type_id']              = array('type' => 'string',
                                                    'size' => 6,
                                                    'pkey' => 'y',
                                                    'required' => 'y');
    
    $fieldspec['pers_type_desc']            = array('type' => 'string',
                                                    'size' => 40,
                                                    'required' => 'y');
    
    $fieldspec['created_date']              = array('type' => 'datetime',
                                                    'size' => 20,
                                                    'required' => 'y',
                                                    'default' => '2000-01-01 00:00:00');
    
    $fieldspec['created_user']              = array('type' => 'string',
                                                    'size' => 16,
                                                    'required' => 'y',
                                                    'default' => 'UNKNOWN');
    
    $fieldspec['revised_date']              = array('type' => 'datetime',
                                                    'size' => 20);
    
    $fieldspec['revised_user']              = array('type' => 'string',
                                                    'size' => 16);
    
    // primary key details 
    $this->primary_key                      = array('pers_type_id');
    
    // unique key details 
    $this->unique_keys                      = array();
    
    // child relationship details 
    $this->child_relations[]                = array('child' => 'x_tree_level',
                                                    'type' => 'RES',
                                                    'fields' => array('pers_type_id' => 'tree_type_id'));
    
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