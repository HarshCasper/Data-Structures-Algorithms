/* 

Project Euler: Problem 4: Largest palindrome product
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two n-digit numbers.

*/

function largestPalindromeProduct(n) {
  let minimum=Math.pow(10,n-1);
  let maximum=Math.pow(10,n)-1;
  let array=[];
  for(let i=maximum;i>=minimum;i--){
    for(let j=maximum;j>=minimum;j--){
      let number=i*j;
      let reverse=[...String(number)].reverse().join("");
      if(number==reverse){
        array.push(number);
        break;
      }
    }
  }
  return Math.max(...array);
}

largestPalindromeProduct(3);
