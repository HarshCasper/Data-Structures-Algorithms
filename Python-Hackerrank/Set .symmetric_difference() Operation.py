# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
e=set(map(int,input().split()))
b=int(input())
f=set(map(int,input().split()))
print(len(e.symmetric_difference(f)))
