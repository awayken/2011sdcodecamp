<cfset request.page.section = "plugins">
<cfset request.page.title = "Spreadsheet Plugin">
<cfset request.page.desc	= "Spreadsheet Plugin permits access to the popular Microsoft Excel format">

<h1>Spreadsheet Plugin</h1>

<ul class="breadcrumb">
	<li><a href="./?/plugin">PlugIns</a> <span class="divider">/</span></li>
	<li class="active">Spreadsheet</li>
</ul>

<p>The Spreadsheet plugin adds in the world of spreadsheets to the core CFML language.   The following functions are available to available
for creating, reading, updating, deleting and a whole host of manipulations for spreadsheets.</p>

<table width="90%" align="center" cellpadding="5" cellspacing="0">
<tr>
	<td width="1%" nowrap align="right"><a href="./?/function/isspreadsheetobject">IsSpreadsheetobject</a></td>
	<td>Determines if the object past in is a spreadsheet object</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetaddcolumn">SpreadsheetAddcolumn</a></td>
	<td>Inserts a new column to the current sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetaddfreezepane">SpreadsheetAddfreezepane</a></td>
	<td>Creates a freeze panel within the current spreadsheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetaddimage">SpreadsheetAddimage</a></td>
	<td>Adds an image to the current spreadsheet object</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetaddinfo">SpreadsheetAddinfo</a></td>
	<td>Updates or inserts spreadsheet level info</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetaddrow">SpreadsheetAddrow</a></td>
	<td>Inserts new rows to the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetaddrows">SpreadsheetAddrows</a></td>
	<td>Inserts new rows to the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetaddsplitpane">SpreadsheetAddsplitpane</a></td>
	<td>Creates a new split pane with the details given on the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetcreatesheet">SpreadsheetCreatesheet</a></td>
	<td>Creates a brand new sheet with the given name.  The active sheet does not get changed.</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetdeletecolumn">SpreadsheetDeletecolumn</a></td>
	<td>Deletes one or more columns from the active sheet; it will not shift any other columns</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetdeletecolumns">SpreadsheetDeletecolumns</a></td>
	<td>Deletes one or more columns from the active sheet; it will not shift any other columns</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetdeleterow">SpreadsheetDeleterow</a></td>
	<td>Deletes one or more rows from the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetdeleterows">SpreadsheetDeleterows</a></td>
	<td>Deletes one or more rows from the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetdeletesheet">SpreadsheetDeletesheet</a></td>
	<td>Deletes the sheet named</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetfindcell">SpreadsheetFindcell</a></td>
	<td>Looks for all cells in the active sheet that match the expression.  An array of structs (row,column,value) is returned.</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetformatcell">SpreadsheetFormatcell</a></td>
	<td>Sets the formatting properties for the given cell by row:column</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetformatcolumn">SpreadsheetFormatcolumn</a></td>
	<td>Sets the formatting properties for the given column(s)</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetformatcolumns">SpreadsheetFormatcolumns</a></td>
	<td>Sets the formatting properties for the given column(s)</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetformatrow">SpreadsheetFormatrow</a></td>
	<td>Sets the formatting properties for the given row(s)</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetformatrows">SpreadsheetFormatrows</a></td>
	<td>Sets the formatting properties for the given row(s)</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetgetcellcomment">SpreadsheetGetcellcomment</a></td>
	<td>Returns the comment stucture for the given cell on the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetgetcellformula">SpreadsheetGetcellformula</a></td>
	<td>Returns an array of structures (formula, row, column) looking for the formula.  If rowNo/columnNo omitted, then all the formulae for the active sheet is returned</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetgetcellvalue">SpreadsheetGetcellvalue</a></td>
	<td>Returns the value of the cell</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetinfo">SpreadsheetInfo</a></td>
	<td>Reads the meta information associated with the spreadsheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetmergecells">SpreadsheetMergecells</a></td>
	<td>Merges the cell range into one on the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetnew">SpreadsheetNew</a></td>
	<td>Creates a new spreadsheet object</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetread">SpreadsheetRead</a></td>
	<td>Creates a new spreadsheet object from the file specified</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetreadbinary">SpreadsheetReadbinary</a></td>
	<td>Returns the current spreadsheet as a binary file; useful for streaming straight out to the browser</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetremovecolumn">SpreadsheetRemovecolumn</a></td>
	<td>Deletes one or more columns from the active sheet; it will shift any other columns accordingly</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetactivesheet">SpreadsheetSetactivesheet</a></td>
	<td>Sets the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetactivesheetnumber">SpreadsheetSetactivesheetnumber</a></td>
	<td>Sets the active sheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetcellcomment">SpreadsheetSetcellcomment</a></td>
	<td>Sets the comment properties of the cell</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetcellformula">SpreadsheetSetcellformula</a></td>
	<td>Sets the formula of the cell</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetcellvalue">SpreadsheetSetcellvalue</a></td>
	<td>Sets the value of the cell</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetcolumnwidth">SpreadsheetSetcolumnwidth</a></td>
	<td>Sets width of the given column</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetfooter">SpreadsheetSetfooter</a></td>
	<td>Sets the footer components of the spreadsheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetheader">SpreadsheetSetheader</a></td>
	<td>Sets the header components of the spreadsheet</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetsetrowwidth">SpreadsheetSetrowwidth</a></td>
	<td>Sets width of the row</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetshiftcolumns">SpreadsheetShiftcolumns</a></td>
	<td>Moves the column around</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetshiftrows">SpreadsheetShiftrows</a></td>
	<td>Moves rows around</td>
</tr><tr>
	<td width="1%" nowrap align="right"><a href="./?/function/spreadsheetwrite">SpreadsheetWrite</a></td>
	<td>Writes the spreadsheet out to a file on the local file system</td>
</tr>
</table>