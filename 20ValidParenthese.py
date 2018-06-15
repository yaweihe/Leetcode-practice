class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        dic={'(':')','[':']','{':'}'}  
        stack=[]#使用栈这种数据结构  
        for current in s:  
            if current in dic.keys():  
                stack.append(current)  
            elif current in dic.values():  
                if len(stack) == 0 or dic.get(stack[-1]) != current:#分别对应如[]},[}这两种情况  
                    return False  
                else:  
                    stack.pop()  
        if len(stack)==0:  
            return True  
        else:  
            return False  

        '''
        a = {')':'(',']':'[','}':'{'}
        l = [None]
        for i in s:
        	if i in a and a[i] == l[-1]:
        		l.pop()
        	else:
        		l.append(i)
        return len(l) == 1
        '''