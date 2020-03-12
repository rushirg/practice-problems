"""
Pintu and Fruits
https://www.codechef.com/MARCH20B/problems/CHPINTU/
"""
t = int(input())
for x in range(t):
    n, m = map(int, input().split())
    fruit_count = list(map(int, input().split()))
    fruit_cost = list(map(int, input().split()))
    fruit = {}
    fruit_cost_index = 0
    for i in fruit_count:
        if i in fruit.keys():
            fruit[i] += fruit_cost[fruit_cost_index]
        else:
            fruit[i] = fruit_cost[fruit_cost_index]
        fruit_cost_index += 1
    print(min(fruit.values()))


