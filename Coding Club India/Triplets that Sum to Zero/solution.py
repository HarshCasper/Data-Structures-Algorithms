from itertools import combinations
arr = list(map(int, input().split()))
comb_arr=combinations(arr,3)
comb_list=list(comb_arr)

setArr=set();
for i in comb_list:
  sum=0
  for j in i:
    sum=sum+j
  if(sum==0):
    setArr.add(i)

print(setArr)
