class Solution(object):
    def getSum(self, a, b):
        """
        :type a: int
        :type b: int
        :rtype: int
        """
      	MAX_INT = 0x7FFFFFFFF
      	MASK = 0x100000000
      	while b != 0:
      		temp = a & b
      		a = (a ^ b) % MASK
      		b = (temp << 1)% MASK
      	return a if a<= MAX_INT else a | (~MASK + 1)
