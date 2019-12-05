# Python Program to print Unique Prime Factors of a Number

Number = int(input(" Please Enter any Number: "))
i = 1
my=[]

while(i <= Number):
    count = 0
    if(Number % i == 0):
        j = 1
        while(j <= i):
            if(i % j == 0):
                count = count + 1
            j = j + 1
            
        if (count == 2):
            my.append(i)
    i = i + 1

my=list(dict.fromkeys(my))
print(my)

