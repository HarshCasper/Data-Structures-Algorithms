n = int(input())
s = set(map(int, input().split())) 
t = int(input())

for i in range(t):

    c, *args = map(str,input().split())

    getattr(s,c) (*(int(x) for x in args))


print (sum(s))
