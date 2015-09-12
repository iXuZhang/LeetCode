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
    /* O(n) space
    void reorderList(ListNode* head) {
        if(!head) return;
        vector<ListNode*> table;
        while(head){
            table.push_back(head);
            head = head->next;
        }
        int left = 0, right = table.size()-1;
        while(left < right){
            table[left++]->next = table[right];
            if(left < right) table[right--]->next = table[left];
        }
        table[left]->next = NULL;
    }
    */
    
    //O(1) space
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        // Spilt into two lists
        ListNode *prev = head, *curr = head->next;
        while(curr && curr->next){
            prev = prev->next;
            curr = curr->next->next;
        }
        ListNode *head2 = prev->next;
        prev->next = NULL;
        // Reverse list2
        curr = head2;
        prev = NULL;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head2 = prev;
        // Merge List1 and List2
        curr = head;
        while(curr){
            ListNode* next = curr->next;
            curr->next = head2;
            curr = next;
            ListNode* temp = curr;
            curr = head2;
            head2 = temp;
        }
    }
};