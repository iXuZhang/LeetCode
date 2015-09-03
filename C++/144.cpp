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
    /* Recursive solution
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorderTraversal(root, res);
        return res;
    }
    
    void preorderTraversal(TreeNode* node, vector<int>& res){
        if(node == NULL) return;
        res.push_back(node->val);
        preorderTraversal(node->left, res);
        preorderTraversal(node->right, res);
    }
    */
    
    // Iterative Solution
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> toVisit;
        toVisit.push(root);
        while(!toVisit.empty()){
            TreeNode* curr = toVisit.top();
            toVisit.pop();
            if(!curr) continue;
            res.push_back(curr->val);
            toVisit.push(curr->right);
            toVisit.push(curr->left);
        }
        return res;
    }
};