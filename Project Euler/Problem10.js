/* 

Project Euler: Problem 10: Summation of primes
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below n.

*/


function primeSummation(n) {
let numPrimes=[];
let sum=0;
const upper=Math.ceil(Math.sqrt(n));
for(let i=0;i<n;i++){
  numPrimes.push(i);
}
numPrimes[1]=0;
for(let i=2;i<=upper;i++){
  if(numPrimes[i]!==0){
    for(let j=i*i;j<n;j+=i){
      if(numPrimes[j]%i==0){
        numPrimes[j]=0;
      }
    }
  }

}
for(let i=0;i<n;i++){
  sum+=numPrimes[i];
}
return sum;
}

primeSummation(2000000);
