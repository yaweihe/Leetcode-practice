class Solution(object):
	def climbStairs(self,n):
		if n == 1:
			return 1
		if n == 2:
			return 2
		res = 0
		f1,f2 = 1,2
		for i in range(2,n):
			res = f1 + f2
			f1 = f2
			f2 = res
		return res