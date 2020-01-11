# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
a,n=input().split()
t=list(a)
t.sort()
k=0
for i in range(int(n)):
    li=list(combinations(t,i+1))
    for j in li:
        ans=''.join(j)
        print(ans)
