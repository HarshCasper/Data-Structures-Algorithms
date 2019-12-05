// Python Program to print Unique Prime Factors of a Number

import math
def prime_factors(n):
    list=[]
    while n%2==0:
        list.append(2)
        n=n//2
    for i in range(3,int(math.sqrt(n)),2):
        while n%i==0:
            list.append(i)
            n=n/i
    if n>2:
        list.append(n)

    return list

n=int(input("Enter the number whose unique prime numbers are to be printed: "))
my=prime_factors(n)
my=list(dict.fromkeys(my))
print(my)
