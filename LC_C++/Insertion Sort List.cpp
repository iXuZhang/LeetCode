// Insertion Sort List
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* prehead = new ListNode(0);
        while(head){
            ListNode* temp = head;
            head = head->next;
            temp->next = NULL;
            insertList(prehead, temp);
        }
        return prehead->next;
    }
    
    void insertList(ListNode* prehead, ListNode* node){
        while(prehead->next && prehead->next->val < node->val) prehead = prehead->next;
        ListNode* temp = prehead->next;
        prehead->next = node;
        node->next = temp;
    }
};