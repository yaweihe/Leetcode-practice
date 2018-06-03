class Solution:
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        res = []
        for i in range(left, right+1):
        	temp = i
        	flag = 1
        	while temp != 0:
        		if temp % 10 == 0 or i %(temp % 10) != 0:
        			flag = 0
        			break
        		temp //= 10
        	if flag == 1:
        		res.append(i)
        return res