// Sum Root to Leaf Numbers
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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        DFS(root, 0, sum);
        return sum;
    }
    
    void DFS(TreeNode* root, int curr, int& sum){
        if(!root) return;
        curr = curr*10 + root->val;
        if(!root->left && !root->right){
           sum += curr;
           return;
        } 
        DFS(root->left, curr, sum);
        DFS(root->right, curr, sum);
    }
};