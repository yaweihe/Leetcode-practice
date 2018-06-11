class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        # overrun
        '''
        MAX_INT = 2**31
        res = 0
        while x:
        	res = res*10 + x%10
        	x //= 10

        if abs(res) >= MAX_INT:
        	res = 0

        return res
        '''

        sign = x < 0 and -1 or 1
        x = abs(x)
        res = 0
        while x:
        	res = res * 10 + x %10
        	x //= 10
        return sign*res if res<= 0x7fffffff else 0