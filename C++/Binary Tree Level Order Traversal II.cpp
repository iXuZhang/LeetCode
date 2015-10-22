// Binary Tree Level Order Traversal II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        DFS(root, 0, res);
        reverse(res.begin(), res.end());
        return res;
    }
    
    void DFS(TreeNode* node, int depth, vector<vector<int>>& res){
        if(!node) return;
        if(res.size() < depth + 1) res.push_back(vector<int>());
        res[depth].push_back(node->val);
        DFS(node->left, depth+1, res);
        DFS(node->right, depth+1, res);
    }
};