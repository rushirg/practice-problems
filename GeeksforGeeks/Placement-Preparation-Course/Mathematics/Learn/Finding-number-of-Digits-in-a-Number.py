"""
Problem:
Given an integral number N. The task is to find the count of digits present in this number.
Let's say:

N = 2019

Number of digits in N here is 4 and,
the digits are: 2, 0, 1, 9.

Some more Examples:

N = 1567
Number of digits = 4

N = 256
Number of digits = 3

N = 58964
Number of digits = 5
"""

"""
Solution 1 (Simple):
    1. Check if the number N is not equal to zero
    2. Increase the count of the digit by 1 if not equal to zero
    3. Reduce the number by dividing it by 10
    4. Repeat the aobe step until the number is reduced to zero

Analysis:
    The number of operations performed is equal to the count of digits present in the number.
    Time Complexity: O(digitsCount)
"""

"""
Solution 2 (Better):
    A better solution is to use mathematics, the number of digits in a number can be obtained by,
    number of digits in N = log(N) + 1 # log to base 10

    Explaination:
        Suppose the number of digits in the number N is K.
        10^(K-1) <= N < 10^(K)
        Applying base-10 logarithm to both sides in the above equation, we get:
        K-1 <= log10(N) < K.
        or, K - 1 + 1 <= log10(N) + 1 < K + 1
        or, K <= log10(N) + 1 < K + 1
        K = floor(log10(N) + 1)
Analysis:
    above algorithm works in a single operation by using two mathematical operations,
    finding logarithnic and floor value,
    Time Complexity: O(1)
"""


