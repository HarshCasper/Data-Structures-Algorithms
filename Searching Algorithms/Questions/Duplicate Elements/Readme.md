# Duplicate Elements 

Given an array of 'n' elements, design and code an algorithm to check whether there any duplicate elements in the given array or not. 
To solve this array, we can use the brute force approach where we can use two simple For Loops to check whether there is any element with the same
value. The second approach will be to sort the given array and after sorting, we can check for adjacent elements in a single scan to check for
duplicate elements. 

The third approach is a bit tricky but involves using negation technique to negate the array elements until we stumble on one element which has 
already been negated. If one such element exist, we can say that there are duplicate elements in the array.
