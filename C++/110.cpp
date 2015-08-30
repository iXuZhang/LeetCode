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
    // A easy and clear way
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int leftdepth = calculateDepth(root->left);
        int rightdepth = calculateDepth(root->right);
        return abs(leftdepth - rightdepth) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
    
private:
    int calculateDepth(TreeNode* node){
        if(node == NULL) return 0;
        return max(calculateDepth(node->left), calculateDepth(node->right)) + 1;
    }
    
};