/*
Given a binary tree, return all root-to-leaf paths.

Note: A leaf is a node with no children.

Example:
Input:

   1
 /   \
2     3
 \
  5

Output: ["1->2->5", "1->3"]

Explanation: All root-to-leaf paths are: 1->2->5, 1->3


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
class Solution {
public:
	void binaryTreePaths(vector<string>& result, TreeNode* root, string s){
		if(root->left == NULL && root->right == NULL){
			result.push_back(s);
			return;
		}
		if(root->left != NULL){
			binaryTreePaths(result, root->left, s + "->" + to_string(root->left->val));
		}
		if(root->right != NULL){
			binaryTreePaths(result, root->right, s + "->" + to_string(root->left->val));
		}
	}
	
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return res;

        binaryTreePaths(res, root, to_string(root->val));
        return res;
    }
};
