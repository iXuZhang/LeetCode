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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> curr;
        DFS(root, sum, curr, res);
        return res;
    }
    
private:
    void DFS(TreeNode* node, int sum, vector<int>& curr, vector<vector<int>>& res){
        if(node == NULL) return;
        sum -= node->val;
        curr.push_back(node->val);
        if(!node->left && !node->right && sum == 0) res.push_back(curr); // ensure the node is a leaf;
        DFS(node->left, sum, curr, res);
        DFS(node->right, sum, curr, res);
        curr.pop_back();
    }
};