class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        '''
        return int(x**0.5)
        '''

        if x < 2:  
            return x  
          
        left = 1  
        right = x // 2  
          
        while left <= right:  
            mid = (left + right) // 2  
            if mid * mid < x:  
                left = mid + 1  
                lastMid = mid  
            elif(x < mid * mid):  
                right = mid - 1  
            else:  
                return mid  
              
        return lastMid 



        