/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* prehead = new ListNode(0);
        prehead->next = head;
        ListNode* prexnode = prehead;
        while(prexnode->next&&prexnode->next->val < x)//find xnode(greater than or equal to x)
            prexnode = prexnode->next;
        ListNode* xnode = prexnode->next;
        ListNode* curr = xnode;
        while(curr&&curr->next){ // xnode may be NULL, so curr may be NULL
            if(curr->next->val < x) {
                prexnode->next = curr->next;
                prexnode = prexnode->next;
                curr->next = curr->next->next;
            }
            else curr=curr->next;
        }
        prexnode->next = xnode;
        return prehead->next;
    }
};