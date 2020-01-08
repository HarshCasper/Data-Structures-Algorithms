import numpy
N, M = map(int, input().split())
_ = numpy.array([input().split() for i in range(N)], int)
numpy.set_printoptions(legacy='1.13')
print(numpy.mean(_, axis=1))
print(numpy.var(_, axis=0))
print(numpy.std(_, axis=None))



