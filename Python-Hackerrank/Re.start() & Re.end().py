# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
s = input()
v = input()
for i,x in enumerate(s):
    if re.match(v,s[i:]):
        print((i,i+len(v)-1))
if re.search(v, s)==None:
    print((-1,-1)) 
