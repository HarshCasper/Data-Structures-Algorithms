for _ in range(int(input())):
    a,b=[set(input().split()) for _ in range(4)][1::2]
    print(bool(a|b==b))
