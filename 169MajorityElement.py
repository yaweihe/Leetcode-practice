class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        res = 0
        for i in nums:
        	if count == 0:
        		res = i
        		count += 1
        	elif i == res:
        		count += 1
        	else:
        		count -= 1
        return res
        