// Closest Binary Search Tree Value
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
    int closestValue(TreeNode* root, double target) {
        long maxVal = INT_MAX + 1;
        long minVal = INT_MIN - 1;
        TreeNode* curr = root;
        while(curr){
            if(curr->val > target){
                maxVal = curr->val;
                curr = curr->left; 
            } 
            else {
                minVal = curr->val;
                curr = curr->right;
            }
        }
        if(maxVal == INT_MAX + 1) return minVal;
        if(minVal == INT_MIN - 1) return maxVal;
        return maxVal - target < target - minVal ? maxVal : minVal;
    }
};