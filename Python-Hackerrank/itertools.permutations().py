# https://www.hackerrank.com/challenges/itertools-permutations/problem
# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import permutations
string, size = input().split()
print("\n".join(["".join(per) for per in list(permutations(sorted(string), int(size)))]))
