<?php
//*****************************************************************************
// List the contents of the inner table (in tree view) using selections from the outer table.
// (as selected in the previous screen) and show the contents as a tree structure.
// Tree nodes will have a button to allow their children to be expanded or collapsed.
//*****************************************************************************

$outer_table = '#outer_table#';                     // name of outer table
$inner_table = '#inner_table#';                     // name of inner table
$screen      = '#inner_table#.tree3.screen.inc';    // file identifying screen structure

// customise the SQL SELECT statement
$outer_sql_select  = null;
$outer_sql_from    = null;
$outer_sql_where   = null;
$outer_sql_groupby = null;
$outer_sql_having  = null;
$outer_sql_orderby = null;
$outer_sql_orderby_table = null;

$inner_sql_select   = null;
$inner_sql_from     = null;
$inner_sql_where    = null;
$inner_sql_groupby  = null;
$inner_sql_having   = null;

require 'std.tree_view3.inc';           // activate page controller

?>
