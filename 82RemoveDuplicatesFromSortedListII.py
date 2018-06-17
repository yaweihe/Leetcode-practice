# Definition for singly-linked list.  
# class ListNode:  
#     def __init__(self, x):  
#         self.val = x  
#         self.next = None  
  
class Solution:  
    def deleteDuplicates(self, head):  
        """ 
        :type head: ListNode 
        :rtype: ListNode 
        """  
        if head == None or head.next == None:
            return head  
        
        start = ListNode(0)
        start.next = head
        pre = start
        while pre.next:
            cur = pre.next
            if cur.next and cur.val == cur.next.val:
                no_repeat = cur.next
                while no_repeat and no_repeat.val == cur.val:
                    no_repeat = no_repeat.next
                pre.next = no_repeat
            else:
                pre = pre.next
        return start.next