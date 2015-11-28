// Copy List with Random Pointer
/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head) return NULL;
        if(table.count(head)) return table[head];
        RandomListNode *node = new RandomListNode(head->label);
        table[head] = node;
        node->next = copyRandomList(head->next);
        node->random = copyRandomList(head->random);
        return node;
    }
    
private:
    unordered_map<RandomListNode*,RandomListNode*> table;
};