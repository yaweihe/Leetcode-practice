class Solution(object):
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        num = bin(n)
        if '00' in num or '11' in num:
            return False
        return True
        
        '''
        num = -1
        for i in str(bin(n)):
        	if num == i:
        		return False
        	nmm = i
        return True
        '''

        '''
        result = False
        binary = bin(n)[2:]
        if n == 1:
        	return True
        for i in range(0, len(binary)-1):
        	if binary[i] != binary[i+1]:
        		result = True
        	else:
        		result = False
        		break
        return result
        '''