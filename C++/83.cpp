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
    // List curr is enouth, do not need prev. 12ms or 16ms
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* curr = head;
        while(curr->next){
            if(curr->val == curr->next->val) curr->next = curr->next->next;
            else curr = curr->next;
        }
        return head;
    }
};