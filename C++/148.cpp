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
    // Merge Sort
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* end = head;
        ListNode* end2 = head->next;
        while(end2 && end2->next){ 
            end = end->next;
            end2 = end2->next->next;
        }
        ListNode* head2 = end->next;
        end->next = NULL;
        head = sortList(head);
        head2 = sortList(head2);
        return mergeList(head,head2);
    }

private:
    ListNode* mergeList(ListNode* list1, ListNode* list2){
        ListNode* prehead = new ListNode(0);
        ListNode* curr = prehead;
        while(list1 && list2){
            if(list1->val < list2->val){
                curr->next = list1;
                list1 = list1->next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if(list1) curr->next = list1;
        else curr->next = list2;
        return prehead->next;
    }
};