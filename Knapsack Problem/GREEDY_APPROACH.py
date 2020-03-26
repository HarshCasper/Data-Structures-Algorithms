import numpy as np

profits = [1, 2, 5, 6]
weights = [2, 3, 4, 5]
sackSize = 8

def fractional_knapsack_greedy(value, weight, capacity):
    index = list(range(len(value)))

    ratio = [v/w for v, w in zip(value, weight)]

    index.sort(key=lambda i: ratio[i], reverse=True)  # n log n

    max_value = 0
    fractions = [0]*len(value)
    for i in index:
        if weight[i] <= capacity:
            fractions[i] = 1
            max_value += value[i]
            capacity -= weight[i]
        else:
            fractions[i] = capacity/weight[i]
            max_value += value[i]*capacity/weight[i]
            break

    return max_value, fractions

a = fractional_knapsack_greedy(profits, weights, sackSize) 
print("Greedy : ", a[0], list(zip(a[1], profits)))
