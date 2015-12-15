// Partition List
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
    //use only one list will be hard for case [1] 2 
    ListNode* partition(ListNode* head, int x) {
        ListNode* head1 = new ListNode(0);
        ListNode* head2 = new ListNode(0);
        ListNode* curr1 = head1;
        ListNode* curr2 = head2;
        while(head){
            ListNode* temp = head->next;
            if(head->val < x){
                curr1->next = head;
                curr1 = head;
                curr1->next = NULL;
            }
            else{
                curr2->next = head;
                curr2 = head;
                curr2->next = NULL;
            }
            head = temp;
        }
        curr1->next = head2->next;
        return head1->next;
    }
};