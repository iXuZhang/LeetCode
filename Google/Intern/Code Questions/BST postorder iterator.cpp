/*
BST postorder iterator
*/

#include <iostream>
#include <stack>

using namespace std;

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
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode* curr = root;
        TreeNode* last = NULL;
        stack<TreeNode*> toVisit;
        vector<int> res;
        while(curr || !toVisit.empty()){
            while(curr){
                toVisit.push(curr);
                curr = curr->left;
            }
            TreeNode* node = toVisit.top();
            if(!node->right || last == node->right){
                res.push_back(node->val);
                last = node;
                toVisit.pop();
            }
            else curr = node->right;
        }
        return res;
    }
};