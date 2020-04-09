def countSetBits(number):
  count=0
  while(number):
    number=number & (number-1)
    count=count+1
  return count

def numberOfSets(num):
  count=0
  for i in range(1,num+1):
    if(countSetBits(i)==2):
      count=count+1
  return count

if __name__=="__main__":
  n=int(input("Enter a number: "))
  print("The Count is %s" %(numberOfSets(n)))
