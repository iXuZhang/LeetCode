// Binary Tree Preorder Traversal
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> nodes;
        nodes.push(root);
        while(!nodes.empty()){
            TreeNode* curr = nodes.top();
            nodes.pop();
            if(!curr) continue;
            res.push_back(curr->val);
            nodes.push(curr->right);
            nodes.push(curr->left);
        }
        return res;
    }
};