<cfcomponent>
	
	<cfset this.name = "Demo05">
	
	<cfscript>
		this.sessionmanagement = false;
		this.clientmanagement = false;
	</cfscript>
	
	<cffunction name="onApplicationStart">
		<cfset application.dsn = "MrOctopus">
	</cffunction>
	
	<cffunction name="onRequestStart">
		<cfargument name="requesturi" required="true"/>
		
<!---
		<cfhtmlhead text='
			<script>window.alert("Hello");</script>
		'>
--->
	</cffunction>

</cfcomponent>