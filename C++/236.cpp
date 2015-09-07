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
    /* Version 1
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ancestor = NULL;
        postTraversal(root, p, q, ancestor);
        return ancestor;
    }

private:
    vector<bool> postTraversal(TreeNode* node, TreeNode* p, TreeNode* q, TreeNode* &ancestor){ // & !!!
        if(!node) return {false,false};
        vector<bool> left = postTraversal(node->left, p, q, ancestor);
        vector<bool> right = postTraversal(node->right, p, q, ancestor);
        vector<bool> res(2,false);
        res[0] = left[0] || right[0];
        res[1] = left[1] || right[1];
        if(node == p) res[0] = true;
        if(node == q) res[1] = true;
        if(res[0] && res[1] && !ancestor) ancestor = node; // prevent it be changed again;
        return res;
    }
    */
    
    // Version 2 Consice Solution
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root == p || root == q) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        return left ? right ? root : left : right;  
        //if(left && right) return root; if(left) return left; return right;
    }
};