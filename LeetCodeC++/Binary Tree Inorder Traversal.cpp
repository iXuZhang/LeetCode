// Binary Tree Inorder Traversal
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> nodes;
        TreeNode* curr = root;
        while(!nodes.empty() || curr){ // curr, a smart pointer
            while(curr){
               nodes.push(curr);
               curr = curr->left;
            } 
            res.push_back(nodes.top()->val);
            curr = nodes.top()->right;
            nodes.pop();
        }
        return res;
    }
};