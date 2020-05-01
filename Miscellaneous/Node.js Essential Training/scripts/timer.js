var waitTime=3000;
var currentTime=0;
var waitInterval=50;
var percentWaited=0;

function writePercent(p){
	process.stdout.clearLine();
	process.stdout.cursorTo(0);
	process.stdout.write("Waiting");
}

var interval=setInterval(function(){
	currentTime+=waitInterval;
	percentWaited=Math.floor((currentTime/waitTime)*100);
	writePercent(percentWaited);
	
},waitInterval);

setTimeout(function(){
	clearInterval(interval);
	writePercent(100);
	console.log("Done");
	
},waitTime);

process.stdout.write("\n\n");
writePercent(percentWaited);
