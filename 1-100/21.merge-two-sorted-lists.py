# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        ret = ListNode(0)
        curNode = ret
        while l1 and l2:
            if l1.val > l2.val:
                curNode.next = l2
                l2 = l2.next
            else:
                curNode.next = l1
                l1 = l1.next
            curNode = curNode.next
        
        curNode.next = l1 if l1 else l2

        return ret.next
