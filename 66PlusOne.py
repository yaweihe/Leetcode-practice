class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
    	length = len(digits)
    	for i in range(length-1, -1, -1):
    		if digits[i] == 9:
    			digits[i] = 0
    		else:
    			digits[i] += 1
    			return digits
    	digits[0] = 1
    	digits.append(0)
    	return digits
    	

    	'''
    	num = int(''.join([str(i) for i in digits])) +1
    	return [int(i) for i in list(str(num))]
    	

    	

