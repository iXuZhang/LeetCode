// Reorder List
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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        fast = slow->next;
        slow->next = NULL;
        fast = reverseList(fast);
        slow = head;
        while(fast){
            ListNode* next = slow->next;
            ListNode* next2 = fast->next;
            slow->next = fast;
            fast->next = next;
            slow = next;
            fast = next2;
        }
    }
    
private:
    ListNode* reverseList(ListNode* head){
        ListNode* curr = head;
        head = NULL;
        while(curr){
            ListNode* next = curr->next;
            curr->next = head;
            head = curr;
            curr = next;
        }
        return head;
    }
};