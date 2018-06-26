# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        #recursion
        if p and q:
        	return p.val == q.val and self.isSameTree(p.left,q.left) and self.isSameTree(p.right,q.right)
        return p == q

        '''
		#iteration
        #use stack
		stack = [(p,q)]
		while stack:
			p,q = stack.pop()
			if p == None and q == None:
				continue
			if p == None or q == None:
				return False
			if p.val == q.val:
				stack.append((p.right, q.right))
				stack.append((p.left, q.left))
			else:
				return False
		return True
        '''

        '''
            #use queue
		queue = [(p,q)]
		while len(queue) != 0:
			p,q = queue.pop()
			if p == None and q == None:
				continue
			if p == None or q == None:
				return False
			if p.val == q.val:
				queue.insert(0, (p.left, q.left))
				queue.insert(0, (p.right, q.right))
			else:
				return Fasle
		return True
        '''
