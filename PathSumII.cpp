/*
Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.

For example: Given the below binary tree and sum = 22,

		  5
		/ 	\ 
   	   4  	 8 
  	  /   	/ \
 	 11	   13  4
	/  \   /    \
   7    2 5      1

return [
	[5,4,11,2],
	[5,8,4,5]
]

*/

/*
	该问题是求路径本身，且要求出所有结果，左子树求到了满意结果，不能return，要接着求右子树。
*/

class Solution{
public:
	vector<vector<ing>> pathSum(TreeNode* root, int sum){
		vector<vector<int>> result;
		vector<int> cur;
		path(root, sum, cur, result);
		return result;
	}

private:
	void pathSum(TreeNode* root, int gap, vector<int> &cur, vector<vector<int>> &result){
		if(root == nullptr) return;
		cur.push_back(root->val);

		if(root->left == nullptr && root->right == nullptr){	//leaf
			if(gap == root->val)
				result.push_back(cur);
		}
		pathSum(root->left, gap - root->val, cur, result);
		pathSum(root->right, gap - root->val, cur, result);
	}
}