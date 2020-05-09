"""
Digits In Factorial
https://practice.geeksforgeeks.org/problems/digits-in-factorial/1/?track=ppc-mathematics&batchId=221
"""


## Complete this function
def digitsInFactorial(N):
    # Your code here
    if N == 0 or N == 1:
        return 1
    fact = 1
    for i in range(1, N + 1):
        fact = fact * i
    return(len(str(fact)))
