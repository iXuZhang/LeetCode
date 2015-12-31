// Construct Binary Tree from Inorder and Postorder Traversal
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       unordered_map<int,int> table;
       for(int i = 0; i < inorder.size(); i++) table[inorder[i]] = i;
       return helper(inorder, postorder, 0, postorder.size()-1, 0, inorder.size()-1, table);
    }

private:
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int begin, int end, int inBegin, int inEnd, unordered_map<int,int>& table){
        if(begin > end) return NULL;
        TreeNode* node = new TreeNode(postorder[end]);
        int pivot = table[postorder[end]];
        node->left = helper(inorder, postorder, begin, end-(inEnd-pivot)-1, inBegin, pivot-1, table);
        node->right = helper(inorder, postorder, end-(inEnd-pivot), end-1,pivot+1, inEnd, table);
        return node;
    }
};