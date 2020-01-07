# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

for _ in range(int(input())):
        s = input()
        s = re.sub(r" \&\&(?= )", " and", s)
        s = re.sub(r" \|\|(?= )", ' or', s)
        print(s)
