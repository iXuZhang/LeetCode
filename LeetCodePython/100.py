# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param {TreeNode} p
    # @param {TreeNode} q
    # @return {boolean}
    """ Version 1
    def isSameTree(self, p, q):
        if not p and not q:
            return True
        if p and q:
            if p.val == q.val:
                if p.left and q.left and self.isSameTree(p.left, q.left) or not p.left and not q.left:
                    if p.right and q.right and self.isSameTree(p.right, q.right) or not p.right and not q.right:
                        return True
        return False
    """
    def isSameTree(self, p, q):
        if not p and not q:
            return True
        if p and q:
            if p.val == q.val and self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right) :
                return True
        return False
    
    """ Awesome!!
    def isSameTree(self, p, q):
        return p == q if p is None or q is None else p.val == q.val and self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
    """