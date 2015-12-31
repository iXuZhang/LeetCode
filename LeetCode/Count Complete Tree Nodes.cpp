// Count Complete Tree Nodes
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
    // at least one of the two recursive calls is a full tree, at least one of the two calls immediately stop 
    // So O(log(n)) steps. Finding a height costs O(log(n)). So overall O(log(n)^2).
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int h = 0;
        TreeNode* leftNode = root->left;
        TreeNode* rightNode = root->right;
        while(leftNode && rightNode){
            h++;
            leftNode = leftNode->left;
            rightNode = rightNode->right;
        }
        return leftNode == rightNode ? pow(2,h+1) - 1: countNodes(root->left) + countNodes(root->right) + 1;
    }
};