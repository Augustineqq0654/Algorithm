# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        cur_A, cur_B = headA, headB
        while cur_A != cur_B:
            cur_A = cur_A.next if cur_A else headB
            cur_B = cur_B.next if cur_B else headA

        return cur_A
