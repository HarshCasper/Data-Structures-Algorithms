# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque
d = deque()
for _ in range(int(input())):
    command, *args = input().split()
    getattr(d, command)(*map(int, args))
print(*d)
