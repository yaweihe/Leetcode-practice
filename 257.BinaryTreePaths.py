# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def binaryTreePaths(self, root):
        """
        :type root: TreeNode
        :rtype: List[str]
        """
        result = []
        if not root:
            return result
        self.binaryTreePathSolution(root, result, str(root.val))
        return result
    
    def binaryTreePathSolution(self,root, result, s):
        if not root.left and not root.right:
            result.append(s)
            return
        
        if root.left:
            self.binaryTreePathSolution(root.left, result, s + "->" + str(root.left.val))
        if root.right:
            self.binaryTreePathSolution(root.right, result, s + "->" + str(root.right.val))
        







        
        