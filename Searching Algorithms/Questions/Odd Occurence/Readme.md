# Odd Occurence 

Given an array of positive integers, all numbers occur an even number of times except one number which occurs odd number of times. To solve
this problem and find the element with odd number of occurences, we can either solve the problem by Brute Force approach or we can use
the XOR Operation. In the second approach, a bitwise XOR of all element will yield the element with the odd occurences. This is because
A XOR A=0. Through this way, we can solve the problem in O(n) Time Complexity and O(1) Space Complexity.
