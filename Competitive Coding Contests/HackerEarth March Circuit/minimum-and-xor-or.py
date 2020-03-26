// https://www.hackerearth.com/challenges/competitive/march-circuits-20/algorithm/minimum-and-xor-or-6a05bbd4/

def hacker(a):
    a.sort()
    xor_op = 99999
    val = 0
    for iter in range(len(a)-1):
        r = (a[iter]&a[iter+1])^(a[iter]|a[iter+1])
        xor_op = min(xor_op,r)
    return xor_op

a = int(input())
for i in range(a):
    n = int(input())
    a = []
    a = list(map(int,input().split()))
    print(hacker(a))
