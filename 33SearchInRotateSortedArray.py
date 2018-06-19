class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if len(nums) == 0:
            return -1
        first = 0
        last = len(nums) -1
        while first <= last:
            mid = first + (last - first)//2
            if nums[mid] == target:
                return mid
            if nums[mid] > nums[last]:
                if(nums[first] <= target and nums[mid]> target):
                    last = mid-1
                else:
                    first = mid+1
            else:
                if(nums[mid] < target and nums[last]>=target):
                    first = mid + 1
                else:
                    last = mid -1
                    
        return -1