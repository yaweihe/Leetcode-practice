class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        dic = {}
        for i in range(len(nums)):
        	if nums[i] not in dic:
        		dic[nums[i]] = i
        	else:
        		if i - dic[nums[i]] <= k:
        			return True
        		else:
        			dic[nums[i]] = i #当nums[i]在dic中，但不满足条件，需要对键nums[i]重新赋值

        return False