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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> table;
        for(auto i=0; i!= inorder.size(); i++) table[inorder[i]] = i;
        return makeTree(postorder,  0, postorder.size()-1, 0, table);
    }
    
private:
    // use mark to locate the begin of inoder
    //  pos - mark = number of left nodes
    TreeNode* makeTree(vector<int>& postorder, int front, int back, int mark, map<int,int>& table) {
        if(front > back) return NULL;
        int target = postorder[back];
        int pos = table[target];
        TreeNode* node = new TreeNode(target);
        node->left = makeTree(postorder, front, front + pos - mark - 1, mark, table);
        node->right = makeTree(postorder, front + pos - mark, back - 1, pos + 1, table);
        return node;
    }
};