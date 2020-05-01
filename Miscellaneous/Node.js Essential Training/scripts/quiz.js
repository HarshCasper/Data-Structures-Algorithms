// A simple Quiz Game made while learning Node.js
// const readline = require('readline') loads readline package and name it readline
// const readlineInterface = readline.createInterface({...}) create an interface to readline 
// function ask(questionText) {...} is a  function named ask that uses the
// Promise API to asynchronously ask a question and wait for a reply


console.log("Welcome to the Quiz game. Let's see how many questions can you crack?");
const readline=require("readline");
const readlineInterface = readline.createInterface(process.stdin, process.stdout);

function ask(questionText) {
  return new Promise((resolve, reject) => {
    readlineInterface.question(questionText, resolve);
  });
}

start();
async function start(){
	let score=0;
	let a1=await ask("What is the national animal of India?\n1.Peacock\n2.Tiger\n3.Elephant\n");
    a1=parseInt(a1);
	
	if(a1===2){
		score++;
	}
	
	let a2=await ask("What is the national sport of India?\n1.Cricket\n2.Football\n3.Hockey\n");
    a2=parseInt(a2);
	if(a2===3){
		score++;
	}
	
	let a3=await ask("Who was the first President of India?\n1.Rajendra Prasad\n2.Nehru\n3.Sardar Patel\n");
    a3=parseInt(a3);
	if(a3===1){
		score++;
	}
	
	console.log("The Final Score of the Quiz is "+score);
	
	process.exit();
}
