# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
s = set()
for i in range(n):
    string = input()
    s.add(string)
print(len(s))
