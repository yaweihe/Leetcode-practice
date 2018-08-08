# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        newhead = pre = ListNode(0)
        pre.next = head
        cur = head

        while cur is not None:
        	if cur.val == val:
        		cur = cur.next
        		pre.next = cur
        	else:
        		pre = cur
        		cur = cur.next

        return newhead.next