# Enter your code here. Read input from STDIN. Print output to STDOUT
from math import factorial


def C(n, k):
    if n < k:
        return 0
    return factorial(n) // factorial(n-k)

N = int(input())
n_a = input().split().count('a')
K = int(input())

print('%.3f' % (1 - C(N - n_a, K) / C(N, K)))
