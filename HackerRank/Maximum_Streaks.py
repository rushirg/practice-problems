"""
Maximum Streaks
https://www.hackerrank.com/contests/hack-the-interview-global/challenges/heads-or-tails/problem
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getMaxStreaks' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts STRING_ARRAY toss as parameter.
#

def getMaxHeads(arr, n):
    count = 0
    result = 0
    for i in range(0, n):
        if (arr[i] == "Tails"):
            count = 0
        else:
            count+= 1
            result = max(result, count)
    return result

def getMaxTails(arr, n):
    count = 0
    result = 0
    for i in range(0, n):
        if (arr[i] == "Heads"):
            count = 0
        else:
            count+= 1
            result = max(result, count)
    return result

def getMaxStreaks(toss):
    # Return an array of two integers containing the maximum streak of heads and tails respectively
    return [getMaxHeads(toss, len(toss)), getMaxTails(toss, len(toss))]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    toss_count = int(input().strip())

    toss = []

    for _ in range(toss_count):
        toss_item = input()
        toss.append(toss_item)

    ans = getMaxStreaks(toss)

    fptr.write(' '.join(map(str, ans)))
    fptr.write('\n')

    fptr.close()

