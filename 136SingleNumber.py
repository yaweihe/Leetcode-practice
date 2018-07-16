class Solution(object):
	def singleNumber(self,nums):
		"""
		:type nums: List[int]
		:rtype: int
		"""
		ans = 0
		count = len(nums)
		for i in range(count):
			ans = ans ^ nums[i]

		return ans