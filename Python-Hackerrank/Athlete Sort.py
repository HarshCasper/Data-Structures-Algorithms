n_m = list(map(int, input().split()))

table = list()

for i in range(n_m[0]):
    table.append(list(map(int, input().split())))
    
k = int(input())

sorted_table = sorted(table, key=lambda record: record[k])

for item in sorted_table:
    print(*item)
