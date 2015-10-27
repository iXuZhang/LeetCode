// Binary Tree Upside Down
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
    TreeNode* upsideDownBinaryTree(TreeNode* root) {
        if(!root) return NULL;
        if(!root->left && !root->right) return root;
        TreeNode* head = upsideDownBinaryTree(root->left);
        TreeNode* node = head;
        while(node->right) node = node->right;
        node->left = root->right;
        node->right = root;
        root->left = root->right = NULL;
        return head; 
    }
};