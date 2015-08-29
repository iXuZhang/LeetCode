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
    /* iterative solution
    // put preorder tree into a stack
    // decide the leaf position by compare the top treenode of the stack and inorder vector;
    // two possible leaf position
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(inorder.empty()) return NULL; // important NULL is OK!!
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* popnode = NULL;
        stack<TreeNode*> prenode;
        prenode.push(root);
        int prepos = 1, inpos = 0;
        while(prepos < preorder.size()){
            if(!prenode.empty() && prenode.top()->val == inorder[inpos]){ // !prenode.empty()
                popnode = prenode.top();
                prenode.pop();
                inpos++;
            }
            else{
                TreeNode *node =  new TreeNode(preorder[prepos]);
                if(popnode) popnode->right = node;
                else prenode.top()->left = node;
                prenode.push(node);
                popnode = NULL;
                prepos++;
            }
        }
        return root;
    }
    */
    
    // Recursive Solution
    // divide nodes into left and right
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return makeTree(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
    
    private:
    TreeNode* makeTree(vector<int>& preorder, vector<int>& inorder, int prefront, int preback, int infront, int inback) {
        if(prefront > preback) return NULL;
        int Target = preorder[prefront];
        int pos = infront;
        while( Target != inorder[pos]) pos++;
        TreeNode* node = new TreeNode(Target);
        node->left = makeTree(preorder, inorder, prefront + 1, preback - (inback - pos), infront, pos-1);
        node->right = makeTree(preorder, inorder, preback - (inback - pos) + 1, preback, pos+1, inback);
        return node;
    }
};