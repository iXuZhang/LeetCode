// Binary Tree Vertical Order Traversal
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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> res;
        map<int, vector<int>> table;
        queue<pair<TreeNode*,int>> toVisit;
        toVisit.push(make_pair(root,0));
        while(!toVisit.empty()){
            int len = toVisit.size();
            for(int k = 0; k < len; k++){
                pair<TreeNode*, int> curr = toVisit.front();
                toVisit.pop();
                TreeNode* node = curr.first;
                int row = curr.second;
                if(!node) continue;
                table[row].push_back(node->val);
                toVisit.push(make_pair(node->left, row-1));
                toVisit.push(make_pair(node->right,row+1));
            }
        }
        for(auto i = table.begin(); i != table.end(); ++i)
            res.push_back(i->second);
        return res;
    }
};