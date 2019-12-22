# https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    final_list = []
    for num in arr:
        if num not in final_list:
            final_list.append(num)
    final_list.sort()

    print(final_list[-2])


