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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||!head) return head;
        ListNode* prev = head;
        ListNode* curr = head;
        int n=0;
        while(k--){
            n++;
            if(!curr->next){
                curr = head;
                k %= n;
            }
            else curr = curr->next;
        }
        while(curr->next){
            curr = curr->next;
            prev = prev->next;
        }
        curr->next = head;
        head = prev->next;
        prev->next = NULL;
        return head;
    }
};