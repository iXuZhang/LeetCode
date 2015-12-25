/*
Q1: Linked List Deep Copy
Q2: Linked List Deep Copy with random pointer
*/

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
        if(visited.count(head)>0) return visited[head];
        RandomListNode* node = new RandomListNode(head->label);
        visited[head] = node;
        node->next = copyRandomList(head->next);
        node->random = copyRandomList(head->random);
        return node;
    }
    unordered_map<RandomListNode*,RandomListNode*> visited;
};