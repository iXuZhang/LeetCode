// Validate Binary Search Tree
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
        TreeNode* prev = NULL;
        return inorderTraversal(root, prev);
    }
    
    bool inorderTraversal(TreeNode* node, TreeNode* &prev){
        if(!node) return true;
        if(!inorderTraversal(node->left, prev)) return false;
        if(prev && node->val <= prev->val) return false;
        prev = node;
        if(!inorderTraversal(node->right, prev)) return false;
        return true;
    }
};