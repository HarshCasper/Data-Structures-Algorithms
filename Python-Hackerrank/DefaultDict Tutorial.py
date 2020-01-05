from collections import defaultdict
n,m=[int(x) for x in input().split(' ')]
lis=[]
d=defaultdict(list)
for i in range(1,n+1):
    d[input()].append(i)
for _ in range(m):
    lis.append(input())
for x in lis:
    if x in d:
        print(' '.join(map(str,d[x])))
    else:
        print(-1)
