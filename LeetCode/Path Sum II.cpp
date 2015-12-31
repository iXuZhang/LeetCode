// Path Sum II
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
        DFS(root, sum, 0, curr, res);
        return res;
    }
    
    void DFS(TreeNode* node, int sum, int total, vector<int>& curr, vector<vector<int>>& res){
        if(!node) return;
        curr.push_back(node->val);
        total += node->val;
        if(!node->left && !node->right){
            if(total == sum) res.push_back(curr);
            curr.pop_back();
            return;
        }
        DFS(node->left, sum, total, curr, res);
        DFS(node->right, sum, total, curr, res);
        curr.pop_back();
    }
};