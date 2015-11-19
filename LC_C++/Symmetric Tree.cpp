// Symmetric Tree
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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isEqual(root->left, root->right);
    }
    
    bool isEqual(TreeNode* leftSubtree, TreeNode* rightSubtree){
        if(!leftSubtree && !rightSubtree) return true;
        if(!leftSubtree || !rightSubtree || leftSubtree->val != rightSubtree->val) return false;
        return isEqual(leftSubtree->left, rightSubtree->right) && isEqual(leftSubtree->right, rightSubtree->left);
    }
};