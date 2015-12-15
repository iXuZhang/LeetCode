// Populating Next Right Pointers in Each Node II
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
        TreeLinkNode *curr = root;
        TreeLinkNode *head = NULL; //head of the next level
        TreeLinkNode *prev = NULL; 
        while(curr){
            while(curr){ // iterate on the current level
                if(curr->left){
                    if(prev) prev->next = curr->left;
                    else head = curr->left;
                    prev = curr->left;
                }
                if(curr->right){
                    if(prev) prev->next = curr->right;
                    else head = curr->right;
                    prev = curr->right;
                }
                curr = curr->next;
            }
            curr = head; 
            head = NULL;
            prev = NULL;
        }
    }
};