// Binary Tree Right Side View
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
    // PreOrder traversal
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        DFS(root, 0, res);
        return res;
    }
    
    void DFS(TreeNode* node, int depth, vector<int>& res){
        if(!node) return;
        if(res.size() == depth) res.push_back(node->val);
        res[depth] = node->val;
        DFS(node->left, depth+1, res);
        DFS(node->right, depth+1, res);
    }
};