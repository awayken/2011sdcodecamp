<cfset request.page.section = "plugins">
<cfset request.page.title = "crontab Plugin">
<cfset request.page.desc	= "Crontab Plugin makes the management and scheduling of tasks much easier within OpenBD">

<h1>crontab</h1>

<ul class="breadcrumb">
	<li><a href="./?/plugin">PlugIns</a> <span class="divider">/</span></li>
	<li class="active">crontab</li>
</ul>

<p>The CronPlugin makes the management and scheduling of tasks much easier within OpenBD.</p>

<p>
Inspired from the simplicity of the popular *nix based system of /etc/cron.d/ subdirectories, this plugin
brings the ease of that method to the CFML developer by allowing them to simply drop files into pre-defined
folders that will be automatically run, without needing to wrestle with external scheduling jobs or CFSCHEDULE.
</p>

<p>
The plugin will automatically create the necessary directories if they do not already exist.  You set this
directory by making a call to <b>CronSetDirectory()</b>.  This directory location will persist over server restarts.
</p>

<p>For example making a call with:

<pre class="cfml">&lt;cfset CronSetDirectory(&quot;/cron.d&quot;)&gt;</pre>

will create the following directory structure within the web app directory.</p>

<pre class="cfml">
/&lt;webapproot&gt;/
/&lt;webapproot&gt;/cron.d/cron.5min/
                    /cron.15min/
                    /cron.hourly/
                    /cron.daily/
                    /cron.weekly/
                    /cron.monthly/</pre>

<p>
After this, you can simply drop .cfm files into each of these directories and they will be run at the allocated
time.   There is no need to restart the engine, or re-call the <strong>CronSetDirectory()</strong>; it will automatically be picked up.
</p>

<p>
Each time the plugin executes one of these files at the desired time, a copy of the output is retained.
Within the OpenBD working directory, a similiar structure is created but under the <b>plugin-cron</b> directory,
where you can view the results of each file.
</p>

<p>
This plugin triggers the main OpenBD CFML engine directly, without having to go out and back in via HTTP.
This makes it highly efficient and removes a lot of the overhead associated with other schedule methods.
</p>

<p>
The plugin trigger will honor all Application.cfc/.cfm files that are in any directories or parent directories.
</p>

<p>[<a href="http://www.openbluedragon.org/download/plugins/openbdplugin-cfcron.jar" class="external text" title="http://www.openbluedragon.org/download/plugins/openbdplugin-cfcron.jar" rel="nofollow">download the plugin</a>]</p>
