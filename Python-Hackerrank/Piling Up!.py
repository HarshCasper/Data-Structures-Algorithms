# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque


for i in range(int(input())):
    _, n = input(), deque(map(int, input().split()))
    ans = True

    for j in range(len(n) - 1):
        if n[0] >= n[1]:
            n.popleft()
        elif n[-1] >= n[-2]:
            n.pop()
        else:
            ans = False
            break

    print('Yes' if ans else 'No')
