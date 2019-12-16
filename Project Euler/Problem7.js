/* 

Project Euler: Problem 7: 10001st prime
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the nth prime number?

*/

function nthPrime(n) {
  const primeArray=[2];
  let primeNumber=3,isPrime=true;
  while(primeArray.length<n){
    let maxLimit=Math.ceil(Math.sqrt(primeNumber));
    for(let i=0;i<=maxLimit;i++){
      if(primeNumber%primeArray[i]==0){
        isPrime=false;
        break;
      }
    }
    if(isPrime==true){
      primeArray.push(primeNumber);
    }
    isPrime=true;
    primeNumber+=2;
  }
  return primeArray[primeArray.length-1];
}

nthPrime(10001);
