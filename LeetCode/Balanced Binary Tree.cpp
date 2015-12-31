// Balanced Binary Tree
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
    // Time: O(n)
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;
    }
    
    int depth(TreeNode* root) {
        if(!root) return 0;
        int left = depth(root->left);
        if(left == -1) return -1;
        int right = depth(root->right);
        if(right == -1) return -1;
        if( abs(left - right) > 1) return -1;
        return 1 + max(left, right);
    }
};