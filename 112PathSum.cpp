/*
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.


Note: A leaf is a node with no children.

Example:

Given the below binary tree and sum =22
		 5
		/ \ 
   	   4   8 
  	  /   / \
 	 11	 13  4
	/  \      \
   7    2	    1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
*/


/*

	题目只要求返回true或者false，因此不需要记录路径
	由于只需要求出一个结果，因此当左右任意一颗子树求得了满意结果，就可以及时return
	由于题目没有说节点的数据一定是正整数，必须要走到叶子节点才能判断，因此中途没发剪枝，只能进行朴素深搜
*/

class Solution{
public:
	bool hasPathSum(TreeNode* root, int sum){
		if(root == nullptr) return false;
		if(root->left == nullptr && root->right == nullptr)
			return sum == root->val;

		return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
	}
};