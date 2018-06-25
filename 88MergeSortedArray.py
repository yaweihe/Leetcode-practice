class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        ia = m-1
        ib = n-1
        icur = m + n -1
        while ia >= 0 and ib >= 0:
        	if nums1[ia] > nums2[ib]:
        		nums1[icur] = nums1[ia]
        		icur -= 1
        		ia -= 1
        	else:
        		nums1[icur] = nums2[ib]
        		icur -= 1
        		ib -= 1
        while ib >=0:
        	nums1[icur] = nums2[ib]
        	icur -= 1
        	ib -= 1
