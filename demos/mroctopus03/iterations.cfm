<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
	<head>
		<title>Mr. Octopus and his Hilarious Jokes</title>
	</head>
	<body>
		<h1>Mr. Octopus Welcomes You!</h1>
		
		<h2>Demo 03 &mdash; Iterations</h2>
		
<!---
		<div>
			<ul>
			<cfloop from="2" to="12" step="2" index="i">
				<li><cfoutput>#i#</cfoutput></li>
			</cfloop>
			</ul>
		</div>
--->

<!---
		<div>
			<cfset x = 1>
			<ul>
			<cfloop condition="x LT 10">
				<li><cfoutput>#x#</cfoutput></li>
				<cfset x = x + 1>
			</cfloop>
			</ul>
		</div>
--->

<!---
		<div>
			<cfset links = [ "http://milesrausch.com", "http://awayken.com" ]>
			<ul>
			<cfloop array="#links#" index="i">
				<li><cfoutput>#i#</cfoutput></li>
			</cfloop>
			</ul>
		</div>
--->

<!---
		<div>
			<cfset grocery = "milk,eggs,Chex Mix">
			<ul>
			<cfloop list="#grocery#" index="i">
				<li><cfoutput>#i#</cfoutput></li>
			</cfloop>
			</ul>
		</div>
--->

<!---
		<div>
			<ul>
			<cfloop file="#ExpandPath("index.cfm")#" index="i">
				<li><cfoutput>#HtmlEditFormat(i)#</cfoutput></li>
			</cfloop>
			</ul>
		</div>
--->
		
<!---
		<div>
			<cfset cfml = { engine = "OpenBD", version = "1.5", url = "http://openbd.org" }>
			<ul>
			<cfloop collection="#cfml#" item="i">
				<li><cfoutput>#i#: #cfml[i]#</cfoutput></li>
			</cfloop>
			</ul>
		</div>
--->

<!---
		<div>
			<ul>
			<cfloop from="2" to="12" step="2" index="i">
				<li><cfoutput>#i#</cfoutput></li>
				
				<cfif i GTE 8>
					<cfbreak>
				</cfif>
			</cfloop>
			</ul>
		</div>
--->
		
	</body>
</html>
