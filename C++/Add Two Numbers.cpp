// Add Two Numbers
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
        int carry = 0;
        ListNode* prehead = new ListNode(0);
        ListNode* prev = prehead;
        while(l1 || l2 || carry){
            ListNode* temp = new ListNode(0);
            prev->next = temp;
            prev = temp;
            temp->val += carry;
            if(l1){
                temp->val += l1->val;
                l1 = l1->next;
            }
            if(l2){
                temp->val += l2->val;
                l2 = l2->next;
            }
            if(temp->val > 9){
                temp->val -= 10;
                carry = 1;
            }
            else carry = 0;
        }
        prev->next = NULL;
        return prehead->next;
    }
};