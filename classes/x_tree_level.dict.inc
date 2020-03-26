<?php
    // file created on March 21, 2020, 8:26 am
    
    // field specifications for table test1.x_tree_level
    $fieldspec['tree_type_id']              = array('type' => 'string',
                                                    'size' => 8,
                                                    'pkey' => 'y',
                                                    'required' => 'y');
    
    $fieldspec['tree_level_id']             = array('type' => 'integer',
                                                    'type_native' => 'tinyint',
                                                    'size' => 3,
                                                    'minvalue' => 0,
                                                    'maxvalue' => 255,
                                                    'pkey' => 'y',
                                                    'required' => 'y',
                                                    'default' => '0');
    
    $fieldspec['tree_level_seq']            = array('type' => 'integer',
                                                    'type_native' => 'tinyint',
                                                    'size' => 3,
                                                    'minvalue' => 0,
                                                    'maxvalue' => 255,
                                                    'required' => 'y',
                                                    'default' => '0');
    
    $fieldspec['tree_level_desc']           = array('type' => 'string',
                                                    'size' => 40,
                                                    'required' => 'y');
    
    $fieldspec['created_date']              = array('type' => 'datetime',
                                                    'size' => 20,
                                                    'required' => 'y',
                                                    'default' => '2000-01-01 00:00:00');
    
    $fieldspec['created_user']              = array('type' => 'string',
                                                    'size' => 16,
                                                    'required' => 'y',
                                                    'default' => 'UKNOWN');
    
    $fieldspec['revised_date']              = array('type' => 'datetime',
                                                    'size' => 20);
    
    $fieldspec['revised_user']              = array('type' => 'string',
                                                    'size' => 16);
    
    // primary key details 
    $this->primary_key                      = array('tree_type_id',
                                                    'tree_level_id');
    
    // unique key details 
    $this->unique_keys                      = array();
    
    // child relationship details 
    $this->child_relations                  = array();
    
    // parent relationship details 
    $this->parent_relations[]               = array('parent' => 'x_pers_type',
                                                    'parent_field' => 'pers_type_id',
                                                    'fields' => array('tree_type_id' => 'pers_type_id'));
    
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