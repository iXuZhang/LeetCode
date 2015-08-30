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
        map<int,int> table;
        for(auto i=0; i!= inorder.size(); i++) table[inorder[i]] = i;
        return makeTree(preorder, 0, preorder.size()-1, 0, table);
    }
    
    private:
    TreeNode* makeTree(vector<int>& preorder, int front, int back, int mark, map<int,int> &table) { 
        // map<int,int> &table, without &, time limited Exceed!!!
        // mark the begin of a new vector of inorder, to calcuate the number of nodes of left tree
        if(front > back) return NULL;
        int target = preorder[front];
        int pos = table[target];
        TreeNode* node = new TreeNode(target);
        node->left = makeTree(preorder, front + 1, front + pos - mark,  mark, table);
        node->right = makeTree(preorder, front + pos - mark + 1, back,  pos + 1, table);
        return node;
    }
};