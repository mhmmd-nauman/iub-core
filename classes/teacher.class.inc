<?php
// *****************************************************************************
// Copyright 2003-2005 by A J Marston <http://www.tonymarston.net>
// Copyright 2006-2019 by Radicore Software Limited <http://www.radicore.org>
// *****************************************************************************
require_once '../includes/std.table.class.inc';
class teacher extends Default_Table
{
    // ****************************************************************************
    function __construct ()
    {
        // save directory name of current script
        $this->dirname   = dirname(__file__);

        $this->dbname      = 'customer';
        $this->tablename   = 'teacher';

        // call this method to get original field specifications
        // (note that they may be modified at runtime)
        $this->fieldspec = $this->getFieldSpec_original();

    } // __construct

// ****************************************************************************
} // end class
// ****************************************************************************

?>
