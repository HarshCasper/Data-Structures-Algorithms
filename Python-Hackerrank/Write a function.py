# https://www.hackerrank.com/challenges/write-a-function/problem

def is_leap(year):
    leap = False
    
    if(year % 400 == 0):
        leap = True
    elif(year % 4 == 0 and year % 100 != 0):
        leap = True    
    return leap

