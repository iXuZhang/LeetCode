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
    /* Version 1
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        sum -= root->val;
        if(!root->left && !root->right && sum == 0) return true;
        if(root->left && hasPathSum(root->left, sum)) return true;
        if(root->right && hasPathSum(root->right, sum)) return true;
        return false;
    }
    */
    
    // Version 2
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        sum -= root->val;
        if(!root->left && !root->right && sum == 0) return true;
        return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
    }
};