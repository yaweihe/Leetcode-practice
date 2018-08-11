class Solution:
"""
@param: head: a ListNode
@return: a ListNode
"""

def isPrime(self, n):
    if n < 3: return 0
    numbers = [True] * (n/2)
    for m in xrange(3, int(n ** 0.5) + 1, 2):
        if numbers[m/2]:
            numbers[m*m/2::m] = [False]*len(numbers[m*m/2::m])
    return sum(numbers)
