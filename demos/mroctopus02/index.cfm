<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
	<head>
		<title>Mr. Octopus and his Hilarious Jokes</title>
	</head>
	<body>
		<h1>Mr. Octopus Welcomes You!</h1>
		
		<h2>Demo 02</h2>
		
		<!--- Let's play with CFML --->
		
		<!--- Part 1 --->
<!---
		<cfset message = "Hello, World!">
		<cfoutput><p>#message#</p></cfoutput>
--->
		
		<!--- Part 2 --->
<!---
		<cfset name="Miles">
		<cfset age = 28>
		<cfset isPresenting = true>
		<cfset datePresenting = Now()>
		
		<cfoutput><p>#name# (#age#). Presenting? #isPresenting# on #datePresenting#.</p></cfoutput>
--->

		<!--- Part 3 --->
<!---
		<cfset links1 = ArrayNew(1)>
		<cfset links1[1] = "http://milesrausch.com">
		<cfset links1[2] = "http://awayken.com">
		
		<cfset links2 = [ "http://github.com/awayken", "http://milesrausch.com/presentations/2011sdcodecamp" ]>
		
		<cfoutput>
			<ol>
				<li><a href="#links1[1]#">#links1[1]#</a></li>
				<li><a href="#links2[2]#">#links2[2]#</a></li>
			</ol>
		</cfoutput>
--->

		<!--- Part 4 --->
<!---
		<cfset meta1 = StructNew()>
		<cfset meta1.engine = "OpenBD">
		<cfset meta1["version"] = "1.5">
		<cfset meta1.path = "~/Downloads/OpenBlueDragonDesktop">
		
		<cfset meta2 = { engine = "Railo", version = "3.3.1.000" }>
		
		<cfoutput>
			<ul>
				<li>#meta1.engine#</li>
				<li>#meta2["engine"]#</li>
			<cfif isDefined("meta1.path")>
				<li>#meta1.path#</li>
			</cfif>
			</ul>
		</cfoutput>
--->

	</body>
</html>
