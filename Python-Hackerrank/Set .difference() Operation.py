# Enter your code here. Read input from STDIN. Print output to STDOUT
eng_num = int(input())
eng_list = set(input().split())
fr_num = int(input())
fr_list = set(input().split())

print(len(list(eng_list-fr_list)))
