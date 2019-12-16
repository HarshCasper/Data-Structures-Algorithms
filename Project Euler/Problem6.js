/* 

Project Euler: Problem 6: Sum square difference
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first n natural numbers and the square of the sum.

*/

function sumSquareDifference(n) {
  var sum1=0;
  for(let i=1;i<=n;i++){
    sum1=sum1+i;
  }
  sum1=sum1*sum1;
  var sum2=0;
  for(let j=1;j<=n;j++){
    sum2=sum2+(j*j);
  }
  let value=sum1-sum2;
  return value;
}

sumSquareDifference(100);
