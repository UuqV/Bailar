var http = require('http');
var fs = require('fs');
var url = require('url');


//This value may have to be changed!!!!!! 
//check your ip address on your PC
var ip = "2620:0:2820:a0b:449:4603:9626:774d";
 http.createServer(function(request,response){
 	console.log(request);
if(url.parse(request.url).pathname == "/post")
 {
 	response.writeHead(200);
 	response.write("test");
 	response.end();
 }
 response.writeHead(200);
 var destinationFile = fs.createWriteStream(request.url);
 request.pipe(destinationFile);
 
var fileSize = request.headers['content-length'];
 var uploadedBytes = 0 ;
 
request.on('data',function(d){
 
 uploadedBytes += d.length;
 var p = (uploadedBytes/fileSize) * 100;
 response.write("Uploading " + parseInt(p)+ " %\n");
 
});
 
request.on('end',function(){
 response.end("File Upload Complete");
 });
 
}).listen(8000, ip);