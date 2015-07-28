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
    /* Recursive Version 0ms
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        vector<int> temp;
        if(!root) return res;
        if(root->left){
            temp = inorderTraversal(root->left);
            res.insert(res.end(),temp.begin(),temp.end());
        }
        res.push_back(root->val);
        if(root->right){
            temp = inorderTraversal(root->right);
            res.insert(res.end(),temp.begin(),temp.end());
        }
        return res;
    }
    */
    
    /* Iterative Version using stack and the binary tree node will be changed
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        stack<TreeNode*> toVisit;
        toVisit.push(root);
        while(!toVisit.empty()){
            if(toVisit.top()->left){
                TreeNode* leftNode = toVisit.top()->left;
                toVisit.top()->left = NULL;
                toVisit.push(leftNode);
            } 
            else {
                TreeNode* rootNode = toVisit.top();
                res.push_back(rootNode->val);
                toVisit.pop();
                if(rootNode->right)
                    toVisit.push(rootNode->right);
            }
        }
        return res;
    }
    */
    
    // Iterative Version using stack and not change the node, best one! Awesome!! stack + curNode
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        stack<TreeNode*> toVisit;
        TreeNode* curNode = root;
        while(!toVisit.empty()||curNode){
            if(curNode){
                toVisit.push(curNode);
                curNode = curNode->left;
            }
            else{
                curNode = toVisit.top();
                toVisit.pop();
                res.push_back(curNode->val);
                curNode = curNode->right;
            }
        }
        return res;
    }
};