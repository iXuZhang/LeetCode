// Kth Smallest Element in a BST
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
    int kthSmallest(TreeNode* root, int k) {
        int res = 0;
        inorderTraversal(root, k, res);
        return res;
    }
    
    bool inorderTraversal(TreeNode* node, int& k, int& res){
        if(!node) return true;
        if(!inorderTraversal(node->left, k, res)) return false;
        if(!--k) {
            res = node->val;
            return false;
        }
        if(!inorderTraversal(node->right, k, res)) return false;
        return true;
    }
};