// Flatten Binary Tree to Linked List
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
    void flatten(TreeNode* root) {
        if(!root) return;
        flatten(root->left);
        flatten(root->right);
        if(!root->left) return;
        TreeNode* curr = root->left;
        while(curr->right) 
            curr = curr->right;
        curr->right = root->right;
        root->right = root->left;
        root->left = NULL;
    }
};