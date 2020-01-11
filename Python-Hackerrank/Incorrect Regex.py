# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
for _ in range(int(input())):
    ans = True
    try:
        reg = re.compile(input())
    except re.error:
        ans = False
    print(ans)
