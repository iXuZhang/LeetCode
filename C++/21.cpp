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
/* Version1 One by one
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* prehead = new ListNode(0);
        ListNode* res = prehead;
        while(l1&&l2){
            if(l1->val<l2->val) {
                res->next = l1;
                l1 = l1->next;
            }
            else {
                res->next = l2;
                l2 = l2->next;
            }
            res = res->next;
        }
        if(l1) res->next = l1;
        else res->next = l2;
        return prehead->next;
    }
*/
// Version 2 Switch 
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* prehead = new ListNode(0);
        prehead->next = l1;
        ListNode* curr = prehead;
        while(l2){
            while(curr->next && curr->next->val <= l2->val) curr = curr->next;
            l1 = curr->next;
            curr->next = l2;
            l2 = l1;
        }
        return prehead->next;
    }
};