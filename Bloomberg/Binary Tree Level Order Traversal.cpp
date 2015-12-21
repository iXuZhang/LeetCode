//Binary Tree Level Order Traversal
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
        DFS(root, res, 0);
        return res;
    }
    
    void DFS(TreeNode* node, vector<vector<int>>& res, int depth){
        if(!node) return;
        if(depth == res.size()) res.push_back(vector<int>());
        res[depth].push_back(node->val);
        DFS(node->left, res, depth+1);
        DFS(node->right, res, depth+1);
    }
    /*
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return vector<vector<int>>();
        vector<vector<int>> res;
        queue<TreeNode*> toVisit;
        toVisit.push(root);
        while(!toVisit.empty()){
            vector<int> temp;
            int len = toVisit.size();
            for(int i = 0;i < len;i++){
                TreeNode* curr= toVisit.front();
                toVisit.pop();
                if(!curr) continue;
                temp.push_back(curr->val);
                if(curr->left) toVisit.push(curr->left);
                if(curr->right) toVisit.push(curr->right);
            }
            res.push_back(temp);
        }
        return res;
    }
    */
};