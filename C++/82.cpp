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
    /* Version 1 iteration  8ms or 16ms
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prehead = new ListNode(-1);
        prehead->next = head;
        auto curr = head;
        auto prev = prehead;
        while(curr && curr->next){
            if(curr->next->val == curr->val){
                while(curr->next && curr->next->val == curr->val) 
                    curr->next = curr->next->next;
                prev->next = curr->next;
            }
            else prev = prev->next;
            curr = curr->next;
        }
        return prehead->next;
    }
    */
    
    // Version 2 Recursion 8ms
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        if(head->val != head->next->val){ 
            head->next = deleteDuplicates(head->next);
            return head;
        }    
        else{
            while(head->next && head->val == head->next->val) head = head->next;
            return deleteDuplicates(head->next);
        }
    }    
};