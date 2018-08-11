class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        #超出时间限制
        got = set()
        while n != 1 and n not in got:
        	got.add(n)
        	sum = 0
        	while n :
        		sum += (n%10) **2
        		n //= 10
        	n = sum
       	return n == 1

class Solution(object):
	def isHappy(self, n):
    	"""
        :type n: int
        :rtype: bool
        """
        """
        按照“happy number”的定义，直接循环计算各位平方和，
        观察是否收敛到1，若是则是 happy number。为了判断循环是否开始重复，
        要用一个字典（dict）或集合（set）来保存已经出现的数字，dict的效率更高。
        """
    	num_dict = {}

    	while True:
    		num_dict[n] = True
    		sum = 0
    		while(n > 0):
    			sum += (n%10)*(n%10)
    			n //= 10
    		if sum == 1:
    			return True
    		elif sum in num_dict:
    			return False
    		else:
    			n = sum

