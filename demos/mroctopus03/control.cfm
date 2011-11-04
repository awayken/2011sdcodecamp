<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
	<head>
		<title>Mr. Octopus and his Hilarious Jokes</title>
	</head>
	<body>
		<h1>Mr. Octopus Welcomes You!</h1>
		
		<h2>Demo 03 &mdash; Control</h2>
		
		<cfset x = 3>
		<cfset y = 4>
		<cfset z = 5>
		
<!---
		<div>
		<cfif x + y EQ 10>
			<cfoutput>#x# + #y# = 10</cfoutput>
		<cfelseif x + y LT 10>
			<cfoutput>#x# + #y# &lt; 10</cfoutput>
		<cfelseif x + y GT 10>
			<cfoutput>#x# + #y# &gt; 10</cfoutput>
		</cfif>
		</div>
--->
		
<!---
		<div>
		<cfswitch expression="#z#">
			<cfcase value="4">
				<cfoutput>z is 6.</cfoutput>
			</cfcase>
			<cfcase value="6">
				<cfoutput>z is 8.</cfoutput>
			</cfcase>
			<cfdefaultcase>
				<cfoutput>z is #z#.</cfoutput>
			</cfdefaultcase>
		</cfswitch>
		</div>
--->

<!---
		<div>
		<cftry>
			<cfset x = a>
			
			<cfcatch>
				<cfdump var="#cfcatch#">
			</cfcatch>
			<cffinally>
				<p>Whether or not we had an error, I will go on.</p>
			</cffinally>
		</cftry>
		</div>
--->

<!---
		<a href="?redirect">Click to redirect.</a>
		<cfif isDefined('url.redirect')>
			<cflocation url="?redirected" addToken="no">
		</cfif>
--->

	</body>
</html>
