# Maximum Occurences

In the given question, we have to find the element which has the maximum occurences ina  given array. The brute force
solution would be to implement two simple for loops with a counter variable which can be increased each time as the number
of occurences are counted. The time complexity would be O(n^2). To improve the time complexity, we can add the values of n, which means
for each occurence of the element the array size is added. In the second scan, the element is divided by the number of elements in array. The element
is returned which has the maximum value. Ths time complexity is O(n) but it works only on arrays with positive elements and the range
should be between 1 to n.
