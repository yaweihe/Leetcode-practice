class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        ans = ""
        if len(strs)== 0:
            return ""
        if len(strs) == 1:
            return strs[0]

        for i in range(0,len(strs[0])):
            for j in range(1, len(strs)):
                if strs[j][:i+1] != strs[0][:i+1]:
                    return strs[0][:i]
                else:
                    ans = strs[0][:i+1]
        return ans