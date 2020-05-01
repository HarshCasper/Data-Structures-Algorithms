const readline=require("readline");

const rl=readline.createInterface({
	
	input: process.stdin,
	output: process.stdout
});

rl.question("What is your name?",answer=>{
	console.log("Your answer: "+answer);
	process.exit();
});
