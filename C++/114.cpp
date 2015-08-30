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
    // The root val is the smallest, preorder; not a good question.
    void flatten(TreeNode* root) {
        if(!root || !root->left && !root->right) return;
        if(root->left){
            TreeNode* rightleaf = root->right;
            TreeNode* pos = root->left;
            root->right = root->left;
            root->left = NULL;
            while(pos->right) pos = pos->right;
            pos->right = rightleaf;
        }
        flatten(root->right);
    }
};