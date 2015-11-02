// Inorder Successor in BST
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
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* flag = NULL;
        while(root){
            if(p->val < root->val){
                flag = root;
                root = root->left;
            }
            else root = root->right;
        }
        return flag;
    }
};