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
        prehead->next = head;
        ListNode* curr = head;
        while(curr && curr->next){ // curr && curr->next
            if(curr->next->val < curr->val){
                ListNode* temp = curr->next;
                curr->next = temp->next;
                insertNode(prehead, temp);
            }
            else curr = curr->next; // important else
        }
        return prehead->next;
    }
private:
    void insertNode(ListNode* pos, ListNode* node){
        while(pos->next->val < node->val) pos = pos->next;
        node->next = pos->next;
        pos->next = node;
    }
};