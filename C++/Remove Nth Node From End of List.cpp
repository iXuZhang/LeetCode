// Remove Nth Node From End of List
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
        ListNode* prehead = new ListNode(0);
        prehead->next = head;
        ListNode* prev = prehead;
        while(n--) head = head->next; // n step to NULL
        while(head){
            head = head->next;
            prev = prev->next;
        }
        prev->next = prev->next->next;
        return prehead->next;
    }
};