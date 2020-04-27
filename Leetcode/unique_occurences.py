# https://leetcode.com/problems/unique-number-of-occurrences/

arr = list(map(int, input().split()))
occurence={}
for i in arr:
  if i in occurence:
    occurence[i]+=1
  else:
    occurence[i]=1
flag=1
duplicate=set()
for i in occurence:
  if occurence[i] in duplicate:
    flag=0
  else:
    duplicate.add(occurence[i])
  
if flag==1:
  print("True")
else:
  print("False")
