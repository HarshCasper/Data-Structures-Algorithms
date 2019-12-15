/* 
Project Euler: Problem 3: Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the given number?

*/

function largestPrimeFactor(number) {
let prime=2,max=1;
while(prime<=number){
  if(number%prime===0){
    max=prime;
    number=number/prime;
  }
  else{
    prime++;
  }
}
return max;
}

largestPrimeFactor(13195);
