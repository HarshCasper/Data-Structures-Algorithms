# https://www.hackerrank.com/challenges/word-order/problem


from collections import Counter

n = int(raw_input())
words = [raw_input().strip() for _ in range(n)]
counts = Counter(words)

print len(counts)

for word in words:
    derp = counts.pop(word, None)
    if derp == None:
        continue
    else:
        print derp, # comma stops print from ending with newline
