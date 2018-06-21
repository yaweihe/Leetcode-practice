class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 0: return 0
        res = 0
        maxres = nums[0]
        for i in range(len(nums)):
        	res += nums[i]
        	if res > maxres:
        		maxres = res
        	if res < 0:
        		res = 0
        return maxres
