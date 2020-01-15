# Enter your code here. Read input from STDIN. Print output to STDOUT

n = input()
set_n = set(map(int, input().split()))
b = input()
set_b = set(map(int, input().split()))
print(len(set_n.union(set_b)))
