// Convert Sorted Array to Binary Search Tree
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return DFS(nums, 0, nums.size()-1);
    }
    
    TreeNode* DFS(vector<int>& nums, int i, int j){
        if(i > j) return NULL;
        int mid = (i + j)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = DFS(nums, i, mid-1);
        node->right = DFS(nums, mid+1, j);
        return node;
    }
};