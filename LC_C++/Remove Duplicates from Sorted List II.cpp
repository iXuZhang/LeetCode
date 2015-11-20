// Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prehead = new ListNode(0);
        ListNode* tail = prehead;
        ListNode* curr = head;
        while(curr){
            if(curr->next && curr->val == curr->next->val){
                while(curr->next && curr->val == curr->next->val) curr = curr->next;
            }
            else{
                tail->next = curr;
                tail = curr;
            }
            curr = curr->next;
        }
        tail->next = NULL;
        return prehead->next;
    }
};