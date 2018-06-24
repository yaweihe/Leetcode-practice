# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None or head.next is None:
        	return head

        start = head
        while start and start.next:
        	if start.val == start.next.val:
        		start.next = start.next.next
        	else:
        		start = start.next
        return head