from math import ceil
n=int(input())
while n:
    string=input()
    length=len(string)
    str1,str2=list(string[:length//2]),list(string[ceil(length/2):])
    str1.sort()
    str2.sort()
    if str1==str2:
        print("YES")
    else:
        print("NO")
    n=n-1
    
