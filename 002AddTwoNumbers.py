# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        #add a flag, added each position, if greater than 9, flag is 1,next position will add flag
        #when the last position flag is 1, it needs add 1 into the tail
        if l1 is None:
        	return l2
        if l2 is None:
        	return l1
        
        temp = ListNode(0)
        res = temp
        flag = 0
        while l1 or l2:
        	tmpsum = 0
        	if l1:
        		tmpsum = l1.val
        		l1 = li.next
        	if l2: 
        		tmpsum += l2.val
        		l2 = l2.next
        	tmpres = ((tmpsum + flag) %10)
        	flag = ((tmpsum + flag) // 10)
        	res.next = ListNode(tmpres)
        	res = res.next
        if flag:
        	res.next = ListNode(1)
        res = temp.next
        del temp
        return res


        '''
        if not l1 or not l2:
        	return l1 or l2
        root, add = l1, 0
        while l1 and l2:
        	cur = l1
        	add, cur.val = divmod(l1.val + l2.val + add, 10)
        	l1,l2 = l1.next, l2.next
        cur.next = l1 or l2
        while add:
        	if cur.next:
        		cur = cur.next
        		add, cur.val = divmod(cur.val + add, 10)
        	else:
        		cur.next = ListNode(1)
        		break
        return root
        '''



        