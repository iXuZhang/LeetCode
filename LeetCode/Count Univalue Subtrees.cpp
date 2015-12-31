// Count Univalue Subtrees
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
    int countUnivalSubtrees(TreeNode* root) {
        int res = 0;
        helper(root, res);
        return res;
    }
    
    bool helper(TreeNode* node, int& res){
        if(!node) return true;
        bool left = helper(node->left, res); 
        bool right = helper(node->right, res);
        if(!left || !right || node->left && node->left->val != node->val || node->right && node->right->val != node->val) 
            return false;
        res++;
        return true;
    }
};