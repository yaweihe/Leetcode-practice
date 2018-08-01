'''
		利用Python的数组slice的操作和赋值，实际上相当于创建了两个新的数组，
		分别保存原数组的前后部分，再依次将元素赋值给原数组。【时间复杂度O(n)，空间复杂度O(n)】
'''
class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        k = k % len(nums)
        nums[:k], nums[k:] = nums[len(nums)-k:], nums[:len(nums)-k]


'''
只创建一个原数组的拷贝，然后根据循环的公式对原数组进行重新赋值。
【时间复杂度O(n)，空间复杂度O(n)】
'''

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        old_nums = nums[:]
        for i in xrange(len(nums)):
            nums[(i + k) % len(nums)] = old_nums[i]

'''
将前n-k个原地反转，将后k个原地反转，再将整个数组原地反转，
即得所求。【时间复杂度O(n)，空间复杂度O(1)】
'''

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        k = k % len(nums)
        self.reversePart(nums, 0, len(nums)-k-1)
        self.reversePart(nums, len(nums)-k, len(nums)-1)
        self.reversePart(nums, 0, len(nums)-1)

    def reversePart(self, nums, start, end):
        while start < end:
            nums[start], nums[end] = nums[end], nums[start]
            start, end = start+1, end-1

'''
实际上，为了使空间复杂度为O(1)，我们可能会想到对原数组做k次“循环右移一位”的解法。然而直接这么做会超时，所以可以考虑下面的优化做法。
其思想是，每次把数组最后k位交换到正确的位置，循环直到所有元素位置正确。
'''

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        k, start, n = k % len(nums), 0, len(nums)
        while k % n != 0 and n > 0:
            for i in xrange(k):
                nums[start + i], nums[len(nums) - k + i] = nums[len(nums) - k + i], nums[start + i]
            start, n = start + k, n - k
            k = k % n


