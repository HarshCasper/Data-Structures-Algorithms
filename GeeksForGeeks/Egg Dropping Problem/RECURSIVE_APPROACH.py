import sys

def EggDropProblem(n,k):
  min=sys.maxsize
  if(k==1 or k==0):
    return k
  if(n==1):
    return k
  for i in range(1,k+1):
    drop=max(EggDropProblem(n-1,i-1),EggDropProblem(n,k-i))
    if(drop<min):
      min=drop
  return min+1

if __name__=="__main__":
  eggs=int(input("Enter the number of Eggs: "))
  floors=int(input("Enter the number of Floors: "))
  print("The minimum number of trials is %r" %(EggDropProblem(eggs,floors)))
