# Definition for singly-linked list.
# class ListNode:
#    def __init__(self, x):
#        self.val = x
#        self.next = None


class Solution:
    # @param {ListNode} head
    # @return {ListNode}


    """
    # Recursion
    def reverseList(self, head, last = None):
        if not head:
            return last
        next = head.next
        head.next = last
        return self.reverseList(next, head) 
    """

    # Iteration
    def reverseList(self, head):
        current = head
        last = None
        while current:
            next = current.next
            current.next = last
            last = current
            current = next
        return last