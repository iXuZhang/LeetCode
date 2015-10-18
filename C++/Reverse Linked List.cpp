// Reverse Linked List
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
    /* Iterative
    ListNode* reverseList(ListNode* head) {
        ListNode *new_head = NULL;
        ListNode *curr = head;
        while(curr){
            ListNode *temp = curr->next;
            curr->next = new_head;
            new_head = curr;
            curr = temp;
        }
        return new_head;
    }
    */
    
    // Recursive
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* rest = reverseList(head->next);
        head->next->next = head; // head->next is the end of rest
        head->next = NULL;
        return rest;
    }
};