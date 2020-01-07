# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = input().split()
arr = [int(x) for x in input().split()]
A = set([int(y) for y in input().split()])
B = set([int(z) for z in input().split()])
count = [0 + 1 if x in A else 0-1 if x in B else 0 + 0 for x in arr]
print(sum(count))
