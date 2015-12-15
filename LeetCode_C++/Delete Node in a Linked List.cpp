// Delete Node in a Linked List
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
    // Time: O(n), Space: O(1)
    // Copy its data to the memory space that we were asked to delete
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};