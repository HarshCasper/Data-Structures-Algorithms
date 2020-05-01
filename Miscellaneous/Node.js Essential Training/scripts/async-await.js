const readLine=require("readline");
const readLineInterface=readLine.createInterface(process.stdin,process.stdout);

function ask(questionText){
	return new Promise((resolve,reject)=>{
		readLineInterface.question(questionText,resolve);
	});
}

start();

async function start(){
	let firstName=await ask("What is your first name?");
	let secondName=await ask("What is your second name?");
	console.log("Hi! "+firstName+". It was a pleasure to have you onboard");
	process.exit();
}
