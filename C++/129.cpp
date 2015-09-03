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
        if(root == NULL) return 0;
        int sum = 0;
        sumNumbers(root, 0 ,sum);
        return sum;
    }
    
private:
    void sumNumbers(TreeNode* node, int curr, int& sum) {
        curr = curr*10 + node->val;
        if(!node->left && !node->right) sum += curr; // it is a leaf
        if(node->left) sumNumbers(node->left, curr, sum); // do not return anything
        if(node->right) sumNumbers(node->right, curr, sum);
    }
    
};