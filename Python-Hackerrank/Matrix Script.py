# https://www.hackerrank.com/challenges/matrix-script/problem

import math
import os
import random
import re
import sys

count = 0
decode = ''
val = list(map(int, input().split()))
input_val = [input() for x in range(val[0])]
while count != val[1]:
    for y in input_val:
        decode += y[count]
    count += 1
print(re.sub(r'(?<=([a-zA-Z0-9]))[\s$#%&]+(?=[a-zA-Z0-9])',' ', decode))

