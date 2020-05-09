"""
Addition Under Modulo
https://practice.geeksforgeeks.org/problems/addition-under-modulo/1/?track=ppc-mathematics&batchId=221
"""


def sumUnderModulo(a, b):
    '''
    :param a: given value of a
    :param b: given value of b
    :return: Integer , sum under modulo
    '''
    M = 1000000007
    # code here
    return (a + b) % M
