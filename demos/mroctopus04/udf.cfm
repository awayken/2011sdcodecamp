<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
	<head>
		<title>Mr. Octopus and his Hilarious Jokes</title>
	</head>
	<body>
		<h1>Mr. Octopus Welcomes You!</h1>
		
		<h2>Demo 04 &mdash; UDFs</h2>
		
		<div>
			<cffunction name="addNumbers">
				<cfargument name="input1">
				<cfargument name="input2">
				
				<cfoutput>Adding...<br /></cfoutput>
				
				<cfreturn Val(arguments.input1) + Val(arguments.input2)>
			</cffunction>
			
			<ul>
				<li><cfoutput><p>#addNumbers(40, 12)#</p></cfoutput></li>
				<li><cfoutput><p>#addNumbers(input1 = 34, input2 = 43)#</p></cfoutput></li>
				<li>
					<cfset numbers = { input1 = 33, input2 = 22 }>
					<cfoutput><p>#addNumbers(argumentCollection = numbers)#</p></cfoutput>
				</li>
			</ul>
		</div>
		
	</body>
</html>
