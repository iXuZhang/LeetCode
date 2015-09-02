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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root == NULL) return res;
        string curr = to_string(root->val);
        DFS(root,curr,res);
        return res;
    }
    
private:
    void DFS(TreeNode* node, string curr, vector<string>&res){
        if(node->left == NULL and node->right == NULL) res.push_back(curr);
        if(node->left) DFS(node->left, curr + "->" + to_string(node->left->val), res);
        if(node->right) DFS(node->right, curr+ "->" + to_string(node->right->val), res);
    }
};