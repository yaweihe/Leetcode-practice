class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        convert = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500, "M":1000}
        if s is None:
        	return 0

        count = len(s)
        res = 0
        for i in range(count):
        	if convert[s[i]] <= convert[s[i+1]]:
        		res += convert[s[i]]
        	else
        		res -= convert[s[i]]

        return res
