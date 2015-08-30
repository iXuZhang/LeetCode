/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* curr = head;
        vector<int> table;
        while(curr){
            table.push_back(curr->val);
            curr = curr->next;
        }
        return vectorToBST(table, 0, table.size()-1);
    }
    
private:
     TreeNode* vectorToBST(vector<int>& table, int begin, int end) {
         if(begin > end) return NULL;
         int mid = (begin + end)/2;
         TreeNode* node = new TreeNode(table[mid]);
         node->left = vectorToBST(table, begin, mid - 1);
         node->right = vectorToBST(table, mid + 1, end);
         return node;
     }
};