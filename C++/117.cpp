/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        vector<TreeLinkNode*> table;
        DFS(root, 0, table);
    }
    
    void DFS(TreeLinkNode *node, int deep, vector<TreeLinkNode*> &table){
        if(node == NULL) return;
        if(deep + 1 > table.size()) table.resize(deep + 1);
        if(table[deep]) table[deep]->next = node;
        table[deep] = node;
        DFS(node->left, deep + 1, table);
        DFS(node->right, deep + 1, table);
    }
};