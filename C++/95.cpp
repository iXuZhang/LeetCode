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
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> res;
        res.push_back(NULL);
        int value = 0;
        while(value++ < n){
            vector<TreeNode*> curRes;
            for(auto i = 0; i < res.size(); i++){
                TreeNode* node = new TreeNode(value);
                node->left = res[i];
                curRes.push_back(node);
                TreeNode* curr = res[i];
                while(curr){
                    TreeNode* clone_node = clone(res[i]);
                    TreeNode* node = new TreeNode(value);
                    TreeNode* curr_node = clone_node;
                    while(curr_node->val != curr->val) curr_node = curr_node->right;
                    TreeNode* temp = curr_node->right;
                    curr_node->right = node;
                    node->left = temp;
                    curRes.push_back(clone_node);
                    curr = curr->right;
                }
            }
            res = curRes;
        }
        return res;
    }
    
private:
    TreeNode* clone(TreeNode* root){
        if(!root) return NULL;
        TreeNode* res = new TreeNode(root->val);
        if(root->left) res->left = clone(root->left); 
        if(root->right) res->right = clone(root->right);
        return res;
    }
};
