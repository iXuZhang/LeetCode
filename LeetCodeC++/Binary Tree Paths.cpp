// Binary Tree Paths
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
        DFS(root, "", res);
        return res;
    }
    
    void DFS(TreeNode* node, string curr, vector<string>& res){
        if(!node) return;
        if(!node->left && !node->right){
            curr += to_string(node->val);
            res.push_back(curr);
            return;
        }
        curr += to_string(node->val) + "->";
        DFS(node->left, curr, res);
        DFS(node->right, curr, res);   
    }
};