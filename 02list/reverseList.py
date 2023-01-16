# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        pre, cur = None, head
        while cur != None:
            temp = cur.next
            cur.next = pre      # 反转
            # 更新指针
            pre = cur
            cur = temp
        return pre
