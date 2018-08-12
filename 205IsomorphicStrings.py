class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        str_map1, str_map2 = {}, {}
        str_list = str.split(' ')

        str_list_len = len(str_list)
        p_list_len = len(pattern)
        if str_list_len != p_list_len:
        	return False

        for i in range(p_list_len):
        	if str_map1.get(pattern[i]) != str_map2.get(str_list[i]):
        		return False

        	str_map1[pattern[i]] = str_map2[str_list[i]] = i
        return True

        