// Unique Binary Search Trees II
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
        for(int i = 1; i <= n; i++){
            vector<TreeNode*> temp;
            for(auto node : res){
                TreeNode* curr = new TreeNode(i);
                curr->left = node;
                temp.push_back(curr);
                int distence = 0;
                TreeNode* pos = node;
                while(pos){
                    TreeNode* copy = copyNodes(node);
                    TreeNode* toInsert = new TreeNode(i);
                    curr = copy;
                    int k = 0;
                    while(k++ < distence) curr = curr->right;
                    toInsert->left = curr->right;
                    curr->right = toInsert;
                    temp.push_back(copy);
                    distence++;
                    pos = pos->right;
                }
            }
            res = temp;
        }
        return res;
    }
    
private:
   TreeNode* copyNodes(TreeNode* root){
       if(!root) return NULL;
       TreeNode* node = new TreeNode(root->val);
       node->left = copyNodes(root->left);
       node->right = copyNodes(root->right);
       return node;
   }
};