// Binary Tree Postorder Traversal
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> table;
        table.push(root);
        while(!table.empty()){
            TreeNode* curr = table.top();
            table.pop();
            if(!curr) continue;
            res.push_back(curr->val);
            table.push(curr->left);
            table.push(curr->right);
        }
        return vector<int>(res.rbegin(), res.rend());
    }
};