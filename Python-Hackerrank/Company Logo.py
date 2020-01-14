s = list( input() )
alp = list(sorted(set(s)));# print(alp)
count = [s.count(i) for i in alp]; #print(count)
max_value=0; max_index=0
for i in range(len(count)-1):
        max_value=0; max_index=i
        for j in range(i, len(count)-1):
                    if count[j]>max_value:
                            max_value=count[j]
                            max_index=j
        count[i],count[max_index]=count[max_index],count[i]
        alp[i],alp[max_index]=alp[max_index],alp[i]
# print(alp); print(count)
alp=alp[:3]; count=count[:3]
# print(alp); print(count)
if(count[0]==count[1] and alp[0]>alp[1]):
        alp[0],alp[1]=alp[1],alp[0]
if(count[1]==count[2] and alp[1]>alp[2]):
        alp[2],alp[1]=alp[1],alp[2]
if(count[0]==count[1] and alp[0]>alp[1]):
        alp[0],alp[1]=alp[1],alp[0]
# print(alp); print(count)
for i in range(3):
        print(alp[i]+' '+str(count[i]))
