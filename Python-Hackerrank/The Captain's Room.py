k = int(input())
arr = list(map(int, input().split()))
st = set(arr)
for x in st:
    count = 0
    for i in arr:
        if x == i:
            count += 1
            if count > 1:
                break
    if count == 1:
        print (x)
        break
