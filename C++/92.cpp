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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* prehead = new ListNode(0);
        prehead->next = head;
        ListNode* prev = prehead;
        n -= m;
        while(--m) prev = prev->next;
        ListNode* curr = prev->next;    // Tricky, reverse after node_m
        while(n--){
            ListNode* move = curr->next;
            curr->next = curr->next->next; // or move->next;
            move->next = prev->next;
            prev->next = move;
        } 
        return prehead->next;
    }
};