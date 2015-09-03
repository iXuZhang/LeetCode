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
    // fast pointer catch slow pointer
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){  // fast && fast->next make sure not null
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true; // ListNode address compare !!!
        }
        return false;
    }
};