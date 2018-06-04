# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        cnt = 0
        if root is not None:
            cnt += 1
            leftmax = self.maxDepth(root.left)
            rightmax = self.maxDepth(root.right)
            cnt += max(leftmax,rightmax)
        return cnt;