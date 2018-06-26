# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        #recursion
        if not root:
        	return True
        return self.Symmetric(root.left,root.right)

    def Symmetric(self,p,q):
    	if (not p and not q):
    		return True
    	if (not p or not q):
    		return False
    
    	return p.val == q.val and self.Symmetric(p.left, q.right) and self.Symmetric(p.right, q.left)


    '''
    #iteration
    if not root:
    	return True
    p,q = root.left, root.right
    stack = [(p,q)]

    while stack:
    	p, q = stack.pop()
    	if (not p and not q):
    		contine
    	if (not p or not q):
    		return False
    	if p.val == q.val:
    		stack.append((p.left, q.right))
    		stack.append((p.left, q.left))
    	else:
    		return False
    return True

    '''
    	

            
