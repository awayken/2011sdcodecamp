<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
	<head>
		<title>Mr. Octopus and his Hilarious Jokes</title>
	</head>
	<body>
		<h1>Mr. Octopus Welcomes You!</h1>
		
		<h2>Demo 03 &mdash; Database Content</h2>
		
<!---
		<cfquery dataSource="MrOctopus" name="jokes">
			SELECT * FROM Joke
		</cfquery>
		<cfdump var="#jokes#">
		<p><cfoutput>Total records: #jokes.RecordCount#. Column list: #jokes.ColumnList#</cfoutput></p>
--->

<!---
		<cfquery dataSource="MrOctopus" name="jokes">
			SELECT JokeId, Joke, JokeType, Rating,
				IsActive, IsDeleted
			FROM Joke
			WHERE IsActive = <cfqueryparam CFSQLType="CF_SQL_BIT" value="1">
				AND IsDeleted = <cfqueryparam CFSQLType="CF_SQL_BIT" value="0">
		</cfquery>
		<cfdump var="#jokes#">
--->

<!---
		<cfquery dataSource="MrOctopus" name="jokes">
			SELECT j.JokeId, Joke, JokeType, Rating,
				Name,
				j.IsActive, j.IsDeleted
			FROM Joke j
				INNER JOIN JokeType t ON (j.JokeType = t.JokeTypeId)
			WHERE j.IsActive = <cfqueryparam CFSQLType="CF_SQL_BIT" value="1">
				AND j.IsDeleted = <cfqueryparam CFSQLType="CF_SQL_BIT" value="0">
				AND t.IsActive = <cfqueryparam CFSQLType="CF_SQL_BIT" value="1">
				AND t.IsDeleted = <cfqueryparam CFSQLType="CF_SQL_BIT" value="0">
		</cfquery>
		<cfdump var="#jokes#">
--->
		
	</body>
</html>
