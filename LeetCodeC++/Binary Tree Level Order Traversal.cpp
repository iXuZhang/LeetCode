// Binary Tree Level Order Traversal
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
    // DFS preorder->Level Order Traversal
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        DFS(root, 0, res);
        return res;
    }
    
    void DFS(TreeNode* root, int deep, vector<vector<int>>& res){
        if(!root) return;
        if(res.size() < deep + 1) res.push_back(vector<int>());
        res[deep].push_back(root->val);
        DFS(root->left, deep + 1, res);
        DFS(root->right, deep + 1, res);
    }
};