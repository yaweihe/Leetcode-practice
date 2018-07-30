class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        count_five = 0
        k = 0
        while n > 0:
        	k = n/5
        	count_five += k
        	n = k

        return count_five