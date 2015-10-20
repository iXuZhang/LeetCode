// Remove Linked List Elements
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
    /* iterative
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prehead = new ListNode(0);
        prehead->next = head;
        ListNode* prev = prehead;
        while(head) {
            if(head->val == val)
                prev->next = head->next;
            else prev = prev->next;
            head = head->next;
        }
        return prehead->next;
    }
    */
    
    // recursive
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head; 
    }
};