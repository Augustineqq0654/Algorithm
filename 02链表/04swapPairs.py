# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        # 使用虚拟头结点
        res = ListNode(next=head)
        pre = res

        # 当头结点与下一个结点存在
        while pre.next and pre.next.next:
            cur = pre.next
            post = pre.next.next

            # 交换
            pre.next = post
            cur.next = post.next
            post.next = cur

            # 下一次循环时，指针后移两位
            pre = pre.next.next

        return res.next
