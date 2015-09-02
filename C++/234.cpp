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
    // O(n) time, O(1) space, reverse a list
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        ListNode* curr = head;
        int length = 0;
        bool offset = false;
        while(curr){
            curr = curr->next;
            length++;
        }
        curr = head;
        ListNode* pos = curr->next;
        head->next = NULL; // make sure it is a a singly linked list
        if(length%2) offset = true;
        length = length/2 - 1;
        while(length-- > 0){
            curr = pos;
            pos = pos->next;
            curr->next = head; // [1,2,2,1] Time Limit Exceeded without head->next = NULL;  
            head = curr;
        }
        if(offset) pos = pos->next;
        while(pos){
            if(curr->val != pos->val) return false;
            curr = curr->next;
            pos = pos->next;
        }
        return true;
    }
};