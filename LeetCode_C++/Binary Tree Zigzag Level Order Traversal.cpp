// Binary Tree Zigzag Level Order Traversal
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
        queue<TreeNode*> nodes;
        nodes.push(root);
        int forward = true;
        while(!nodes.empty()){
            int n = nodes.size();
            vector<int> curr;
            for(int i = 0; i < n; i++){
                curr.push_back(nodes.front()->val);
                if(nodes.front()->left) nodes.push(nodes.front()->left);
                if(nodes.front()->right) nodes.push(nodes.front()->right);
                nodes.pop();
            }
            if(forward) res.push_back(curr);
            else res.push_back(vector<int>(curr.rbegin(),curr.rend()));
            forward = !forward;
        }
        return res;
    }
};