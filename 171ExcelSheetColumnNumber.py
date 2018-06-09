class Solution(object):
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        sum = 0
        for c in s:
        	sum = sum * 26 + ord(c) -65 +1
        return sum