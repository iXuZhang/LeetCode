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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        stack<TreeNode*> toVisit;
        toVisit.push(root);
        TreeNode* curr;
        bool left2right = true;
        while(!toVisit.empty()){
            stack<TreeNode*> tempVisit;
            vector<int> tempRes;
            while(!toVisit.empty()){
                curr = toVisit.top();
                toVisit.pop();
                tempRes.push_back(curr->val);
                if(left2right){
                    if(curr->left) tempVisit.push(curr->left);
                    if(curr->right) tempVisit.push(curr->right);
                }
                else{
                    if(curr->right) tempVisit.push(curr->right);
                    if(curr->left) tempVisit.push(curr->left);
                }
            }
            toVisit = tempVisit;
            res.push_back(tempRes);
            left2right = !left2right;
        }
        return res;
    }
};