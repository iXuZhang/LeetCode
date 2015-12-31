// Binary Search Tree Iterator
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        curr = root;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return curr || !table.empty();
    }

    /** @return the next smallest number */
    int next() {
        while(curr){
            table.push(curr);
            curr = curr->left;
        } 
        int res = table.top()->val;
        curr = table.top()->right;
        table.pop();
        return res;
    }
    
private:
    TreeNode* curr;
    stack<TreeNode*> table;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */