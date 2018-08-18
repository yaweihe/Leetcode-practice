class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if nums is None:
        	return False
        nums = sorted(nums)
        count = len(nums)
        for i in range(1,count):
            if nums[i] == nums[i-1]:
                return True
            
        return False

        '''
        if nums == []:
        	return False
        a = set(nums)

        if len(a) != len(nums):
        	return True
        else:
        	return False
        '''
