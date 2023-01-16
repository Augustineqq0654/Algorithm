# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        # 创建虚拟头结点
        dummy_head = ListNode(next=head)
        slow = dummy_head
        fast = dummy_head
        # 快指针先走 n 步
        for _ in range(n):
            if fast.next:
                fast = fast.next
        # 快指针指向尾节点
        while fast.next:
            slow = slow.next
            fast = fast.next
        # 慢指针指向下下个结点
        slow.next = slow.next.next

        return dummy_head.next
