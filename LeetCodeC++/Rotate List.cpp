// Rotate List
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
    /*
    1->2->3->4->5->NULL  k = 2;
    4->5->1->2->3->NULL
    */
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* curr = head;
        int n = 0;
        while(curr){
            curr = curr->next;
            n++;
        }
        k = k%n;
        if(k == 0) return head;
        curr = head;
        ListNode* tail = head;
        while(curr->next){
            curr = curr->next;
            if(k) k--;
            else tail = tail->next;
        }
        curr->next = head;
        head = tail->next;
        tail->next = NULL;
        return head;
    }
};