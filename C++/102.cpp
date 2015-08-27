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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> toVisit;
        toVisit.push(root);
        TreeNode* curr;
        while(!toVisit.empty()){
            queue<TreeNode*> tempVisit;
            vector<int> tempRes;
            while(!toVisit.empty()){
                curr = toVisit.front();
                toVisit.pop();
                tempRes.push_back(curr->val);
                if(curr->left) tempVisit.push(curr->left);
                if(curr->right) tempVisit.push(curr->right);
            }
            toVisit = tempVisit;
            res.push_back(tempRes);
        }
        return res;
    }
};