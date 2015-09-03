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
    /* O(1) Space
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* target = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) break;
        }
        if(!fast || !fast->next) return NULL;
        fast = fast->next;
        while(target != fast){
            if(fast == slow) target = target->next;
            fast = fast->next;
        }
        return target;
    }
    */
    
    // Version 2 Math draw a pic
    // looplength + k = 2k   =>   k = looplength;
    // meet point + x = cycle begins;
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* target = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) break;
        }
        if(!fast || !fast->next) return NULL;
        while(target != fast){
            target = target->next;
            fast = fast->next;
        }
        return target;
    }
};