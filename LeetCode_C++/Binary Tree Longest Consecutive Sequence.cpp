// Binary Tree Longest Consecutive Sequence
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
    int longestConsecutive(TreeNode* root) {
        int res = 0;
        helper(root, res);
        return res;
    }

private:
    int helper(TreeNode* node, int& res){
        if(!node) return 0;
        int left = helper(node->left, res);
        int right = helper(node->right, res);
        if(node->left && node->val != node->left->val - 1) left = 0;
        if(node->right && node->val != node->right->val - 1) right = 0;
        left = max(left, right);
        res = max(res,left + 1);
        return left + 1;
    }
};