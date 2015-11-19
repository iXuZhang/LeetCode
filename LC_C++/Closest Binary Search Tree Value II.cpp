// Closest Binary Search Tree Value II
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
    vector<int> closestKValues(TreeNode* root, double target, int k) {
        vector<double> res;
        inorderTraversal(root, res);
        int m = 0;
        for(int i = k; i < res.size(); i++){
            if(abs(res[i] - target) < abs(res[m] - target)) m++;
            else break;
        }
        return vector<int>(res.begin() + m, res.begin() + m + k);
    }
    
private:
    void inorderTraversal(TreeNode* root, vector<double>& res){
        if(!root) return;
        inorderTraversal(root->left, res);
        res.push_back(root->val);
        inorderTraversal(root->right, res);
    }
};