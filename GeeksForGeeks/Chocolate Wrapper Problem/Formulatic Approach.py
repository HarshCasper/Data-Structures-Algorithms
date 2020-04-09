def wrapper(chocolate,cost,wrapper):
  total_choc=int(chocolate/cost)
  total_choc+=(total_choc-1)/(wrapper-1)
  return total_choc


if __name__=="__main__":
  n=int(input("Enter the number of chocolates: "))
  c=int(input("Enter the Cost of Each Chocolate: "))
  d=int(input("Enter the wrappers to be returned: "))

  print("The Total Number of Chocolate is: %s" %(wrapper(n,c,d)))
