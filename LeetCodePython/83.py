# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @return {ListNode}
    """ Version1
    def deleteDuplicates(self, head):
        if not head:
            return head
        curr = head
        next = curr.next
        while next:
            if next.val == curr.val:
                curr.next = next.next
            else:
                curr = curr.next
            next = next.next
        return head
    """
    
    # Version2 One pointer
    def deleteDuplicates(self, head):
        if not head:
            return head
        curr = head
        while curr.next:
            if curr.val == curr.next.val:
                curr.next = curr.next.next
            else:
                curr = curr.next
        return head