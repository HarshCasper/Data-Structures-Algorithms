# Enter your code here. Read input from STDIN. Print output to STDOUT
list1=[]
list2=[]
list3=[]
count=0
avg=0
x,n=input().split()
for i in range(int(n)):
    list1=input().split()
    if(int(x)==len(list1)):
         list2.append(list1)
list3=list(zip(*list2))
for sub in list3:
    for i in sub:
        count+=float(i)
    avg=count/len(sub)
    print(round(avg,1))
    avg=0
    count=0
