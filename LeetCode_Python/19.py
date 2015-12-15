# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @param {integer} n
    # @return {ListNode}
    """" Version1 O(n) O(n) with a dummy head
    def removeNthFromEnd(self, head, n):
        dummy = ListNode(0)
        dummy.next = head
        curr = head
        nodes = [dummy]
        while curr:
            nodes.append(curr)
            curr = curr.next
        nodes[-n-1].next = nodes[-n].next
        return dummy.next
    """
    
    # Version2 O(n) O(1)
    def removeNthFromEnd(self, head, n):
        curr = head
        target = head
        while curr:
            if n+1:
                n -= 1
            else:
                target = target.next
            curr = curr.next
        if not n:
            return head.next
        target.next = target.next.next
        return head