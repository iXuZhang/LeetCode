// Construct Binary Tree from Preorder and Inorder Traversal
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* preroot = new TreeNode(INT_MAX);
        stack<TreeNode*> tree;
        tree.push(preroot);
        TreeNode* parent = NULL;
        int i = 0, j = 0;
        while(j < preorder.size()){
            if(tree.top()->val == inorder[j++]){
                parent = tree.top();
                tree.pop();
            }
            else if(parent){
                TreeNode* node = new TreeNode(preorder[i++]);
                parent->right = node;
                tree.push(node);
                parent = NULL;
            }
            else{
                TreeNode* node = new TreeNode(preorder[i++]);
                tree.top()->left = node;
                tree.push(node);
            }
        }
        return preroot->left;
    }
};