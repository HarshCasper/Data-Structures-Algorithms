def wrapper(chocolate,cost,wrapper):
  wrap=0
  wrap=chocolate/cost
  chocolate_count=wrap
  while(wrap>=wrapper):
    wrap-=wrapper
    wrap+=1
    chocolate_count+=1
  return chocolate_count

if __name__=="__main__":
  n=int(input("Enter the number of chocolates: "))
  c=int(input("Enter the Cost of Each Chocolate: "))
  d=int(input("Enter the wrappers to be returned: "))

  print("The Total Number of Chocolate is: %s" %(wrapper(n,c,d)))
