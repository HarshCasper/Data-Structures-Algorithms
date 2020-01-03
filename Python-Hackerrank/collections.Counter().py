

# Enter your code here. Read input from STDIN. Print output to STDOUT
sizes = int(input())
shoes = list(map(int,input().split()))
User = int(input())
result = 0
for i in range(User) :
    ShoeSize = input().split(" ")
    if int(ShoeSize[0]) in shoes:
        shoes.remove(int(ShoeSize[0]))
        result += int(ShoeSize[1])
print(result)
