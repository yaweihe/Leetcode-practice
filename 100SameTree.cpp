/*
Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

Example 1:

Input:     1         1
          / \       / \
         2   3     2   3

        [1,2,3],   [1,2,3]

Output: true
Example 2:

Input:     1         1
          /           \
         2             2

        [1,2],     [1,null,2]

Output: false
Example 3:

Input:     1         1
          / \       / \
         2   1     1   2

        [1,2,1],   [1,1,2]

Output: false
*/

class Solution{
public:
	bool isSameTree(TreeNode *p , TreeNode *q){
		//recursion
		if(!p && !q) return true;
		if(!p || !q) return false;
		return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

		//iteration
		/*
		stack<TreeNode*> s;
		s.push(p);
		s.push(q);

		while(!s.empty()){
			p = s.top() ; s.pop();
			q = s.top() ; s.pop();

			if(!p && !q) continue;
			if(!p || !q) return false;
			if(p->val != q->val) return false;

			s.push(p->left);
			s.push(q->left);

			s.push(p->right);
			s.push(q->right);
		}
		return ture;
		*/
	}
};