# https://www.hackerrank.com/challenges/reduce-function/problem

def product(fracs):
    t = reduce(lambda x,y:x*y,fracs,1)
    return t.numerator, t.denominator

