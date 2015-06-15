# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param two ListNodes
    # @return the intersected ListNode
    """ Version 1 O(n+m) O(m+n) First try
    def getIntersectionNode(self, headA, headB):
        currentA = headA
        currentB = headB
        lA = []
        lB = []
        while currentA:
            lA.insert(0,currentA)
            currentA = currentA.next
        while currentB:
            lB.insert(0,currentB)
            currentB = currentB.next
        if not headA or not headB or lA[0] != lB[0]:
            return None
        for i in range(min(len(lA),len(lB))):
            if lA[i].val != lB[i].val:
                return lA[i-1]
        return lA[i]        
    """
    """Version2 O(n+m) O(m)
    def getIntersectionNode(self, headA, headB):
        currentA, currentB = headA, currentB
        s = set()
        while currentA:
            s.add(currentA.val)
            currentA = currentA.next
        while currentB:
            if currentB.val in s:
                return currentB
            currentB = currentB.next
        return None
    """
    # Version3 Faster O(n+m) O(1)
    def getIntersectionNode(self, headA, headB):
        currentA, currentB, mark = headA, headB, False
        if not headA or not headB:
            return None
        while True:
            if currentA == currentB:
                return currentA
            currentA = currentA.next
            currentB = currentB.next
            if not currentA:
                if mark:
                    return None
                else:
                    currentA = headB
                    mark = True
            if not currentB:
                currentB = headA