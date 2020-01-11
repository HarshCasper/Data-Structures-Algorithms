# Enter your code here. Read input from STDIN. Print output to STDOUT
import itertools
s = input().split()
string, number = sorted(s[0]), int(s[1])
print(*list(map(''.join, itertools.combinations_with_replacement(string, number))), sep='\n')
