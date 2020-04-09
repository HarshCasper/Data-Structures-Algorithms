// Implementation of Brian-Kernighan Algorithm
def countSetBits(number):
  counter=0
  while(number):
    number=number & (number-1)
    counter=counter+1
  return counter

// Checking the Condition
def findSum(num):
  sum=0
  for i in range(1,num+1):
    if(countSetBits(i)==2):
      sum=sum+i
  return sum

// Driver Code
if __name__=="__main__":
  num=int(input("Enter the Number: "))
  print("The Sum is :")
  print(findSum(num))
