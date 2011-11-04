<cfset request.page.section = "adv">
<cfset request.page.title = "Integrating MongoDB with CFML">
<cfset request.page.desc	= "Integrating MongoDB with OpenBD is extremely easy and fast">

<h1>MongoDB and CFML</h1>

<ul class="breadcrumb">
	<li><a href="./?/advanced">Advanced Concepts</a> <span class="divider">/</span></li>
	<li class="active">MongoDB and CFML</li>
</ul>

<p>From the <a href="http://www.mongodb.org/">MongoDB</a> website:</p>

<p style="margin-left: 20px;"><em>
MongoDB (from "humongous") is a scalable, high-performance, open source, document-oriented database.
MongoDB bridges the gap between key-value stores (which are fast and highly scalable) and traditional RDBMS systems (which provide rich queries and deep functionality).
</em></p>

<p>
MongoDB differs from traditional row-column based databases in that data is stored as documents with attributes.  A document can have as many attributes as required, with
not every document requiring the same amount of attributes.  This makes it extremely efficient for applications that do not have a consistent data requirement.
</p>


<h2>Installation</h2>

<p>
The OpenBD project has developed a high performance custom MongoDB CFC that lets you quickly utilise the power of MongoDB in your application.  This CFC only
works with 1.5+ as it utilizes the embedded Java extension of <a href="./?/cfscript_java">CFSCRIPT</a>.
</p>

<ul>
	<li><a href="./download.cfm?f=./pages/tagcode/mongo.cfc">mongo.cfc</a>
	<br/>Download and place this in your customtags folder; or the current directory to which you will be running this from
	</li>
	<li class="padtop"><a href="https://github.com/downloads/mongodb/mongo-java-driver/mongo-2.3.jar">mongo-2.3.jar</a>
	<br/>Download the official MongoDB Java Driver and place it in the <code>/WEB-INF/lib/</code> folder and restart OpenBD
	</li>
</ul>

<p>
We'll go through basic examples here, and then present the <a href="#fullapi">full API</a> at the bottom.
</p>

<h2>Setting up the Connection</h2>

<p>
Getting started with the MongoDB driver is very simple.  While it is not strictly required, it is good practice to connect to the server and keep that
object floating around in say the <code>application</code> scope.
</p>

<pre class="cfml">&lt;cfscript>
if ( !StructKeyExists( application, "m") ){
  application.m = new mongo();
  application.m.setup("127.0.0.1", "mydb");
}
&lt;/cfscript></pre>


<h2>Inserting Documents</h2>

<p>
In MongoDB, a document is "like" a row of data, except that it doesn't have to contain a constant set of attributes (columns) across all documents.  A collection can be
thought of like a database table, but unlike a traditional SQL server, you do not need to setup a collection up advance before using it.   So inserting a set of 100
documents in a collection can be as easy as the example below:
</p>

<pre class="cfml">&lt;cfloop index="x" from="1" to="100">

  &lt;cfset application.m.insert( "mycollection", {
     name:"Document" & x,
     age:x,
     children : {
       child1 : "name1",
       child2 : "name2",
       child3 : "name3"
     }
   } )>

&lt;/cfloop></pre>

<p>
As you can see, the natural syntax of CFML JSON makes formatting documents extremely easy.  When a document is inserted, the MongoDB assigns it a unique <code>_id</code>
identifier.  This is an alphanumeric key that is assured to be unique and constant for that given document.   The <code>insert</code> method returns this value.
</p>

<p>
You can assign any type of attribute to a Document, including inner structures and arrays.
</p>

<h2>Querying Documents</h2>

<p>
MongoDB comes with its own query language, which is very JSON like in how you describe how you wish to query the data.  Full details can be found on the MongoDB website.
</p>

<p>
The example here, pulls back 10 results, starting at 0, whose <code>age</code> attribute is greater or equal to 40.   Any documents that do not have the <code>age</code>
attribute will not be returned.
</p>

<pre class="cfml">&lt;cfset results = application.m.find("mycollection", {age: {"$gte":40} }, 0, 10) ></pre>

<p>
The <code>results</code> object is an array of structures.  The full document is returned.  There is an alternative method, <code>findReturnFields</code>, that lets
you specify which fields you wish to return.   You can determine how many documents will match your query by first calling the <code>count</code> method.
</p>

<pre class="cfml">&lt;cfset count = application.m.count("mycollection", {age: {"$gte":40} })></pre>


<h2>Updating Documents</h2>

<p>
Updating documents is similiar to insert, except you use either the <code>update</code> or <code>upsert</code> methods.  The following example
illustrates how you can add 'year' to each document where 'age >= 40'.
</p>

<pre class="cfml">&lt;cfset application.m.update("mycollection", {age: {"$gte":40} }, {"$set":{year:1972}} ) ></pre>

<p>
The different with the <code>upsert</code> method is that if the record does not exist it will be created, otherwise the one that matches will be updated.  Particularly
handy for handling count situations.
</p>


<h2>Deleting Documents</h2>

<p>
You can delete documents by calling the <code>delete</code> method using the <code>_id</code> of the given document you wish to remove.
</p>

<pre class="cfml">&lt;cfset application.m.deleteDocument("mycollection","4cf9570270b623dfc12285b7") ></pre>


<a name="fullapi"></a>
<h2>Full monogo.cfc API</h2>

<p>
	The following methods are available from the mongo.cfc class covering all the major operations of working with a MongoDB database server.
</p>

<ul>
	<li><code>setup( String host, String database )</code>
	<br/>Connects to the database running on the given server at port 27017.
	</li>

	<li class="padtop"><code>setupCustomPort( String host, int port, String database )</code>
	<br/>Connects to the database running on the given server at port given.
	</li>

	<li class="padtop"><code>useDatabase( String database )</code>
	<br/>Changes the database to which the operations will be performed on.  If it does not exist it will be created on the fly.
	</li>

	<li class="padtop"><code>dropCollection( String collection )</code>
	<br/>Drops the given collection from the current database
	</li>

	<li class="padtop"><code>close()</code>
	<br/>Closes the connection to the server
	</li>

	<li class="padtop"><code>Struct	runCommand( String cmd )</code>
	<br/>Runs any MongoDB command line function against the server.  Particularly handy for any operation you want to run that the API doesn't quite support.
	</li>

	<li class="padtop"><code>numeric	getDocumentsCount(String collection)</code>
	<br/>Counts the total documents in the given collection
	</li>

	<li class="padtop"><code>createIndex(String collection, Struct map)</code>
	<br/>Applies an index to the collection based on the fields in map
	</li>

	<li class="padtop"><code>dropIndexes(String collection)</code>
	<br/>Clears all the indexes on a given collection
	</li>

	<li class="padtop"><code>numeric count( String collection, Struct query )</code>
	<br/>Counts the number of documents that this query will return
	</li>

	<li class="padtop"><code>Struct getDocument(String collection, String _id)</code>
	<br/>Returns back the full document attributes for the given _id
	</li>

	<li class="padtop"><code>upsert( String collection, Struct query, Struct update )</code>
	<br/>Upserts data into the given collection, using the query to limit the documents that will be touched.  If a record does not exist, it will be inserted.
	</li>

	<li class="padtop"><code>update( String collection, Struct query, Struct update )</code>
	<br/>Updates data into the given collection, using the query to limit the documents that will be touched.
	</li>

	<li class="padtop"><code>String insert(String collection, Struct map)</code>
	<br/>Inserts data into the given collection, returning back the unique _id
	</li>

	<li class="padtop"><code>List find( String collection, Struct query, int skip, int size )</code>
	<br/>Returns an array of structures that match the given query, starting at the skip record, returning back the given number in size.
	</li>

	<li class="padtop"><code>List findReturnFields( String collection, Struct query, Struct fields, int skip, int size )</code>
	<br/>Returns an array of structures that match the given query, starting at the skip record, returning back the given number in size.  Returns back only the fields specified
	</li>

	<li class="padtop"><code>deleteDocument(String collection, String _id)</code>
	<br/>Deletes the given document
	</li>

</ul>

<h2>Further Reading</h2>

<p>
MongoDB is a very powerful server and while it takes a mental shift away from traditional SQL based servers, you will soon discover the power having a MongoDB server
within your enterprise network will yield.
</p>


<ul>
	<li><a href="http://www.mongodb.org/">MongoDB Web Site</a></li>
	<li><a href="http://www.mongodb.org/display/DOCS/Home">MongoDB Documentation</a></li>
	<li><a href="http://www.mongodb.org/display/DOCS/Inserting">MongoDB Inserting</a></li>
	<li><a href="http://www.mongodb.org/display/DOCS/Updating">MongoDB Updating</a></li>
	<li><a href="http://www.mongodb.org/display/DOCS/Querying">MongoDB Querying</a></li>
	<li><a href="http://www.mongodb.org/display/DOCS/Indexes">MongoDB Indexes</a></li>
</ul>

