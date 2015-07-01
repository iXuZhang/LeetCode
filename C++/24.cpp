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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        ListNode* prehead = new ListNode(0);
        prehead->next = head;
        ListNode* curr = head;
        ListNode* prev = prehead;
        ListNode* temp;
        while(curr&&curr->next){
            prev->next = curr->next;
            temp = curr->next->next;
            curr->next->next = curr;
            curr->next = temp;
            prev = curr;
            curr = temp;
        }
        return prehead->next;
    }
};