class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if not len(needle):
        	return 0

        N = len(haystack) - len(needle) +1
        for i in range(N):
        	j = i
        	k = 0
        	while j < len(haystack) and k < len(needle) and needle[k] == haystack[j]:
        		j += 1
        		k += 1

        	if k == len(needle):
        		return i

        return -1

        '''
        if not len(needle):
        	return 0
        i = hastack.find(needle)
        return i
        '''

        '''
        return haystack.find(needle)
        '''