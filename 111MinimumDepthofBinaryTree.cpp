/*
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its minimum depth = 2.

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
class Solution {
public:
	int minDepth(TreeNode* root){
		return minDepth(root, false);
	}

	int minDepth(TreeNode* root, bool hasbrother){
		if(!root) return hasbrother ? INT_MAX : 0;

		return 1 + min(minDepth(root->left, root->right != NULL),
					minDepth(root->right, root->left != NULL));
	}
};




//iteration
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr)
        	return 0;

        int result = INT_MAX;

        stack<pair<TreeNode*, int >> s;
        s.push(make_pair(root,1));

        while(!s.empty()){
        	auto node = s.top().first;
        	auto depth = s.top().second;
        	s.pop();

        	if(node->left == nullptr && node->right == nullptr)
        		result = min(result,depth);

        	if(node->left && result -> depth) //深度控制，剪枝
        		s.push(make_pair(node->left, depth+1));

        	if(node->right && result > depth)	//深度控制，剪枝
        		s.push(make_pair(node->right,depth+1));

        }
        return result;
    }
};



/*

class Solution {
public:
    int minDepth(TreeNode* root) {
    	if(!root) return 0;
    	if(!root -> left)
    		return 1 + minDepth(root->right);
    	if(!root->right)
    		return 1 + minDepth(root->left);

    	return min(minDepth(root->left), minDepth(root->right)) + 1;
    }

};
*/