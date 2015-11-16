//Binary Tree Maximum Path Sum
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
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        helper(root, res);
        return res;
    }
    
private:
    // res 4 situations node, left+node, right+node, left+node+right
    // path 3 situations node, left+node, right+node
    int helper(TreeNode* node, int& res){
        if(!node) return 0;
        int left = helper(node->left, res);
        int right = helper(node->right, res);
        int path = max(node->val, node->val + max(left, right));
        res = max(res, max(path, node->val + left + right));
        return path;
    }
};