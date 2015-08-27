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
        DFS(root, res, 0);
        reverse(res.begin(),res.end());
        return res;
    }
    
private:
    //Depth-first search (DFS)  
    void DFS(TreeNode* node, vector<vector<int>> &res, int deep){
        if(!node) return;
        if(res.size() == deep) res.push_back(vector<int>()); // important!!
        res[deep].push_back(node->val);
        DFS(node->left, res, deep+1);
        DFS(node->right, res, deep+1);
    }
};
