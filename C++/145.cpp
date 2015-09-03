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
    /* Recursive Solution
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postorderTraversal(root, res);
        return res;
    }
    
private:
    void postorderTraversal(TreeNode* node, vector<int>& res){
        if(!node) return;
        postorderTraversal(node->left, res);
        postorderTraversal(node->right, res);
        res.push_back(node->val);
    }
    */
    
    /* Version 1 Iterative Solution
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> toVisit;
        toVisit.push(root);
        while(! toVisit.empty()){
            TreeNode* curr =  toVisit.top();
            if(!curr) toVisit.pop();
            else if(!curr->left && !curr->right){
                res.push_back(curr->val);
                toVisit.pop();
            }
            else{
                toVisit.push(curr->right);
                toVisit.push(curr->left);
                curr->left = NULL;
                curr->right = NULL;
            }
        }
        return res;
    }
    */ 
    
    // Version 2
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        stack<TreeNode*> toVisit;
        toVisit.push(root);
        while(!toVisit.empty()){
            TreeNode* curr = toVisit.top();
            toVisit.pop();
            res.push_back(curr->val);
            if(curr->left) toVisit.push(curr->left);
            if(curr->right) toVisit.push(curr->right);
        }
        reverse(res.begin(),res.end());
        return res;
    }
 
};