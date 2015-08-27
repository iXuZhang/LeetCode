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
/* Version 1 value range
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        return isBST(root,false,0,false,0);
    }
private:
    bool isBST(TreeNode* root, bool leftvalid, int leftval, bool rightvalid, int rightval) {
        bool leftnode = true, rightnode = true;
        if(root->left){
            if(root->left->val >= root->val) return false;
            if(leftvalid && root->left->val >= leftval) return false;
            if(rightvalid && root->left->val <= rightval) return false;
            leftnode = isBST(root->left,true,root->val,rightvalid,rightval);
        }
        if(root->right){
            if(root->right->val <= root->val) return false;
            if(leftvalid && root->right->val >= leftval) return false;
            if(rightvalid && root->right->val <= rightval) return false;
            rightnode = isBST(root->right,leftvalid,leftval,true,root->val);
        }
        return leftnode&&rightnode;    
    }
*/

// Version2 in-order tree traversal Awesome!!!
public:
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return inOrderTraversal(root, prev);
    }
private:
    bool inOrderTraversal(TreeNode* node, TreeNode* &prev){
        if(node == NULL) return true;
        if(!inOrderTraversal(node->left, prev)) return false;
        if(prev && node->val <= prev->val) return false;
        prev = node;    // important!!!  Reference in the Recursion to keep track.
        // return inOrderTraversal(node->right, node); is a wrong understanding of Reference
        return inOrderTraversal(node->right, prev);
    }
};
