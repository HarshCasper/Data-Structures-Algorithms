# cook your dish here
customers=int(input())
budget=[int(input()) for i in range(customers)]
budget.sort()
max=0
index=0
for i in budget:
    profit=i*(len(budget)-index)
    if profit>max:
        max=profit
    index=index+1 
print(max)
