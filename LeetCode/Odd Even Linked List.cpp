// Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* headEven = head->next;
        while(second && second->next){
            first->next = second->next;
            first = first->next;
            second->next = second->next->next;
            second = second->next;
        }
        first->next = headEven;
        return head;
    }
};