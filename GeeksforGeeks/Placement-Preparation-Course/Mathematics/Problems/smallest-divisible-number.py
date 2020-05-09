"""
Smallest divisible number
https://practice.geeksforgeeks.org/problems/smallest-divisible-number/1/?track=ppc-mathematics&batchId=221
"""
from math import gcd
def getSmallestDivNum(n):
    #RETURN ans
    lcm = 1
    for i in range(2, n + 1):
        lcm = int(lcm*i/gcd(lcm, i))
    return lcm
