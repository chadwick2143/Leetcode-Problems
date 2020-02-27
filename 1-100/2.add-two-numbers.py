# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        ret = ListNode(0)
        cur = ret
        carry = 0
        while l1 or l2:
            x, l1 = (l1.val, l1.next) if l1 else (0, None)
            y, l2 = (l2.val, l2.next) if l2 else (0, None)
            sum = carry + x + y
            carry, sum = (1, sum - 10) if sum >= 10 else (0, sum)
            cur.next = ListNode(sum)
            cur = cur.next
        
        if carry == 1:
            cur.next = ListNode(1)
        
        return ret.next
