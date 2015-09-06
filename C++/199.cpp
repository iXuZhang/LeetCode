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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        DFS(root, 0, res);
        return res;
    }
    
private:
    // preOrder
    void DFS(TreeNode* node, int deep, vector<int>& res){
        if(!node) return;
        if(res.size() <= deep) res.push_back(node->val);
        res[deep] = node->val;
        DFS(node->left, deep+1, res);
        DFS(node->right, deep+1, res);
    }
};