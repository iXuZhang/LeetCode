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
    int kthSmallest(TreeNode* root, int k) {
        int res = 0, n = 0;
        DSP(root, k, n, res);
        return res;
    }
private:
    void DSP(TreeNode* node, int k, int& n, int& res){
        if(!node || n > k) return;
        DSP(node->left, k, n, res);
        if(++n == k) res = node->val;
        DSP(node->right, k, n, res);
    }
};