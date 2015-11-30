/*
Add Two Numbers
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* prehead = new ListNode(0);
        ListNode* curr = prehead;
        int carry = 0;
        while(l1||l2||carry){
            int temp = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            ListNode* node = new ListNode(temp%10);
            curr->next = node;
            curr = curr->next;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            carry = temp/10;
        }
        curr->next = NULL;
        return prehead->next;
    }
};