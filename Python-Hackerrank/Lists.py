if __name__ == '__main__':
    N = int(input())
    li =[]
    actions ={'insert': li.insert,
              'remove': li.remove,
              'append': li.append,
              'sort': li.sort,
              'pop': li.pop,
              'reverse': li.reverse,
             }
    for _ in range(N):
        order, *args = input().split()
        if(order == 'print'):
            print(li)
        else:
            actions[order](*map(int,args))
