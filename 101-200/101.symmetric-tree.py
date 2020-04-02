# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        
        return self.isTreeSymmetric(root.left, root.right)

    def isTreeSymmetric(self, p: TreeNode, q: TreeNode) -> bool:
        if p and q:
            return p.val == q.val and self.isTreeSymmetric(p.left, q.right) and self.isTreeSymmetric(p.right, q.left)
        elif not p and not q:
            return True
        else:
            return False
