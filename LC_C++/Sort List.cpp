// Sort List
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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        fast = slow->next;
        slow->next = NULL;
        return merge2Lists(sortList(head),sortList(fast));
    }

private:
    ListNode* merge2Lists(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val < l2->val){
            l1->next = merge2Lists(l1->next, l2);
            return l1;
        } 
        else{
            l2->next = merge2Lists(l2->next, l1);
            return l2;
        }
    }
};