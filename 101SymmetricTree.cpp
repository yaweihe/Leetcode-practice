/*
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3
But the following [1,2,2,null,3,null,3] is not:
    1
   / \
  2   2
   \   \
   3    3
Note:
Bonus points if you could solve it both recursively and iteratively.
*/

//recrusion
class Solution{
public:
	bool isSymmetric(TreeNode* root){
		
		if(root == nullptr) return true;
		return isSymmetric(root->left, root->right);
	}

	bool isSymmetric(TreeNode *p, TreeNode *q){
		if(p == nullptr && q == nullptr) return true; 
		if(p == nullptr || q == nullptr) return false;
		return p->val == q->val && isSymmetric(p->left, q->right) && isSymmetric(p->right,p->left);
	}
};

//iteration
class Solution{
public:
	bool isSymmetric(TreeNode* root){
		if(!root) return true;

		stack<TreeNode*> s;
		s.push(root->left);
		s.push(root->right);

		while(!s.empty()){
			auto p = s.top(); s.pop();
			auto q = s.top(); s.pop();

			if(!p && !q) continue;
			if(!p || !q) return false;
			if(p->val != q->val) return false;

			s.push(p->left);
			s.push(q->right);

			s.push(p->right);
			s.push(q->left);
		}
		return true;
	}
}
