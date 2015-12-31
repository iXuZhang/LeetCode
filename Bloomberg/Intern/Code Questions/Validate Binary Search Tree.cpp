/*
	Validate Binary Search Tree
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
    // use a treenode prev instead of INT_MIN
    // TreeNode* &prev
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL; // a good idea!!!
        return inorderTraversal(root, prev);
    }
    
    bool inorderTraversal(TreeNode* curr, TreeNode* &prev){ // &prev Reference
        if(!curr) return true;
        if(!inorderTraversal(curr->left, prev)) return false;
        if(prev && prev->val >= curr->val) return false;
        prev = curr;
        if(!inorderTraversal(curr->right, prev)) return false;
        return true;
    }
};