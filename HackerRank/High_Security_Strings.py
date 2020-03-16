"""
High Security Strings
https://www.hackerrank.com/contests/hack-the-interview-global/challenges/high-security-strings/problem
"""

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getStrength' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. STRING password
#  2. INTEGER weight_a
#

def getStrength(password, weight_a):
    # Complete the function
    # input_string = input()
    # a_value = int(input())
    result = 0
    for ch in password:
        result += (weight_a + (ord(ch) - ord('a'))) % 26
        # print((a_value + (ord(ch) - ord('a')))%26, ch)
    return(result)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    password = input()

    weight_a = int(input().strip())

    strength = getStrength(password, weight_a)

    fptr.write(str(strength) + '\n')

    fptr.close()

