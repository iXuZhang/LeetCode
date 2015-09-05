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
    /* O(n) time  O(1) space
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA = headA;
        ListNode* currB = headB;
        while(currA || currB){
            if(currA == currB) return currA;
            if(currA) currA = currA->next; 
            else currA = headB;
            if(currB) currB = currB->next;
            else currB = headA;
        }    
        return NULL;
    }
    */
    
    // Version 2  Concise Solution
     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* currA = headA;
        ListNode* currB = headB;
        while(currA != currB){ // currA == currB or NULL == NULL
            currA = currA ? currA->next:headB;
            currB = currB ? currB->next:headA;
        }    
        return currA;
    }
};