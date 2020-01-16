# Enter your code here. Read input from STDIN. Print output to STDOUT
A = set(input().split())
n = int(input())
check = []
for _ in range(n):
    B = set(input().split())
    check.append(A.issuperset(B))
print(all(check))
