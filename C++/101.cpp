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
    /* Recursive Version
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        if(!root->left && !root->right) return true;
        if(!root->left || !root->right) return false;
        if(root->left->val != root->right->val) return false;
        TreeNode* node1 = new TreeNode(0);
        node1->left = root->left->left;
        node1->right = root->right->right;
        TreeNode* node2 = new TreeNode(0);
        node2->left = root->left->right;
        node2->right = root->right->left;
        return isSymmetric(node1) && isSymmetric(node2);
    }
    */
    
    //Iterative Version
    bool isSymmetric(TreeNode* root) {
       if(!root) return true;
       TreeNode *left, *right;
       stack<TreeNode*> toVisit1, toVisit2;
       toVisit1.push(root->left);
       toVisit2.push(root->right);// put it in even if it is a NULL
       while(!toVisit1.empty()&&!toVisit2.empty()){
           left = toVisit1.top();
           toVisit1.pop();
           right = toVisit2.top();
           toVisit2.pop();
           if(!left && !right) continue;
           if(!left || !right) return false;
           if(left->val != right->val) return false;
           toVisit1.push(left->left);
           toVisit1.push(left->right);
           toVisit2.push(right->right);
           toVisit2.push(right->left);
       }
       return true;
    }    
};