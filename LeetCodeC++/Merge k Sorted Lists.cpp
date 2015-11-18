// Merge k Sorted Lists
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        while(lists.size() > 1){
            vector<ListNode*> temp;
            int n = lists.size();
            for(int i = 0; i < n/2; i++)
                temp.push_back(merge2Lists(lists[i],lists[n-1-i]));
            if(n%2) temp.push_back(lists[n/2]);
            lists = temp;
        }
        return lists[0];
    }
    
    ListNode* merge2Lists(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val < l2->val) {
            l1->next = merge2Lists(l1->next, l2);
            return l1;
        }
        l2->next = merge2Lists(l1, l2->next);
        return l2;
    }
};