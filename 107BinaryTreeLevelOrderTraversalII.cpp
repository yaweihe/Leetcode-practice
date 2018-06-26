/*
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//Recursion
 class Solution{
 public:
 	vector<vector<int>> levelOrderBottom(TreeNode* root){
 		vector<vector<int>> result;
 		traverse(root,1, result);
 		reverse(result.begin(), result.end());
 		return result;
 	}
 	void traverse(TreeNode* root, size_t level, vector<vector<int>> &result){
 		if(!root) return;

 		if(level > result.size())
 			result.push_back(vector<int>());
 		result[level-1].push_back(root->val);
 		traverse(root->left, level+1, result);
 		traverse(root->right, level+1, result);
 	}
 };


 //Iteration
class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root){
		vector<vector<int>> result;
		queue<TreeNode*> current, next;
		if(root == nullptr){
			return result;
		}
		else{
			current.push(root);
		}

		while(!current.empty()){
			vector<int> level; //elments in one level
			while(!current.empty()){
				TreeNode* node = current.front();
				current.pop();
				level.push_back(node->val);
				if(node->left != nullptr) next.push(node->left);
				if(node->right != nullptr) next.push(node->right);
			}
			result.push_back(level);
			swap(next, current);
		}
		reverse(result.begin(), result.end());
		return result;
	}
};

 

