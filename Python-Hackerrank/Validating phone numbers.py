# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

n = int(input())
pattern = re.compile(r'^[7-9]\d{9}$')
numbers = [input() for _ in range(n)]

for number in numbers:
    if pattern.match(number):
        print('YES')
    else:
        print('NO')
