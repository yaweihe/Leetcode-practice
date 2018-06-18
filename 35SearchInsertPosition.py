class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        high = len(nums) -1
        low  = 0
        while low < high:
        	mid = low + (high - low +1 )//2
        	if nums[mid] == target:
        		return mid
        	elif nums[mid] > target:
        		high = mid-1
        	elif nums[mid] < target:
        		low = mid+1
        	
        if target > nums[high]:
        	return high + 1
        if target <= nums[high]:
        	return high
        if target < nums[low]:
        	return low
        return low + 1



        '''
        k = 0
        for i in nums:
        	if target > i:
        		k += 1
        	else:
        		return k
        return k
        '''
