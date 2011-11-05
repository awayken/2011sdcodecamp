<cfcomponent displayname="Person" output="false" hint="I am a Person">

  <cffunction name="init" access="public" output="false" returntype="Person"
        hint="I am the Constructor">
    <cfargument name="firstName" type="string" required="false" default=""
        hint="The person's first name" />
    <cfargument name="lastName" type="string" required="false" default=""
        hint="The person's last name" />
    <cfargument name="birthdate" type="date" required="false" default="#createDate(1900, 1, 1)#"
        hint="The person's birthdate" />

    <cfset setFirstName(arguments.firstName) />
    <cfset setLastName(arguments.lastName) />
    <cfset setBirthdate(arguments.birthdate) />
    <cfreturn this />
  </cffunction>

  <cffunction name="setFirstName" access="public" output="false" returntype="void"
      hint="I set the firstName value">
    <cfargument name="firstName" type="string" required="true"
        hint="The new firstName value" />
    <cfset variables.firstName = arguments.firstName />
  </cffunction>

  <cffunction name="getFirstName" access="public" output="false" returntype="string"
      hint="I return the firstName value">
    <cfreturn variables.firstName />
  </cffunction>

  <cffunction name="setLastName" access="public" output="false" returntype="void"
    hint="I set the lastName value">
    <cfargument name="lastName" type="string" required="true"
        hint="The new firstName value" />
    <cfset variables.lastName = arguments.lastName />
  </cffunction>

  <cffunction name="getLastName" access="public" output="false" returntype="string"
      hint="I return the lastName value">
    <cfreturn variables.lastName />
  </cffunction>

  <cffunction name="setBirthdate" access="public" output="false" returntype="void"
      hint="I set the birthdate value">
    <cfargument name="birthdate" type="date" required="true"
        hint="The new firstName value" />
    <cfset variables.birthdate = arguments.birthdate />
  </cffunction>

  <cffunction name="getBirthdate" access="public" output="false" returntype="date"
      hint="I return the birthdate value">
    <cfreturn variables.birthdate />
  </cffunction>

</cfcomponent>