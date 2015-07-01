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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *prehead = new ListNode(0); // Important
        prehead->next = head;
        ListNode* pretarget = prehead;
        ListNode* curr = head;
        while(n--) curr = curr->next;
        while(curr){
            curr = curr->next;
            pretarget = pretarget->next;
        }
        pretarget->next = pretarget->next->next;
        return prehead->next;
    }
};