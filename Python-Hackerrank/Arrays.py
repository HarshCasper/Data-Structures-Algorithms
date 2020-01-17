import numpy

def arrays(arr):
   #revrser array first, convert to float array with numpy
   return(numpy.array(arr[::-1], float))
arr = input().strip().split(' ')
result = arrays(arr)
print(result)
