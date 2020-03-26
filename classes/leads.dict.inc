<?php
    // file created on March 20, 2020, 12:10 pm
    
    // field specifications for table customer.leads
    $fieldspec['id']                        = array('type' => 'integer',
                                                    'type_native' => 'int',
                                                    'size' => 11,
                                                    'auto_increment' => 'y',
                                                    'minvalue' => -2147483648,
                                                    'maxvalue' => 2147483647,
                                                    'pkey' => 'y',
                                                    'required' => 'y');
    
    $fieldspec['name']                      = array('type' => 'string',
                                                    'size' => 50);
    
    // primary key details 
    $this->primary_key                      = array('id');
    
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