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
    // Recusive Solution
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int leftH = 0, rightH = 0;
        TreeNode* l = root->left;
        TreeNode* r = root->right;
        while(l){
            l = l->left;
            leftH ++;
        }
        while(r){
            r = r->right;
            rightH ++;
        }
        if(leftH == rightH) return pow(2,leftH + 1) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};