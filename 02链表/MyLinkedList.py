class Node:
    def __init__(self, val):
        self.value = val
        self.next = None

class MyLinkedList:

    def __init__(self):
        self._head = Node(0)    # 头结点
        self._count = 0         # 节点个数


    def get(self, index: int) -> int:
        if 0<=index<self._count:
            node = self._head
            for _ in range(0, index+1):
                node = node.next
            return node.value
        else:
            return -1


    def addAtHead(self, val: int) -> None:
        node = Node(val)
        node.next = self._head.next
        self._head.next = node
        self._count += 1
        

    def addAtTail(self, val: int) -> None:
        tail = Node(val)
        node = self._head
        for _ in range(0, self._count):
            node = node.next
        node.next = tail
        self._count += 1
        

    def addAtIndex(self, index: int, val: int) -> None:
        if index < 0:
            index = 0
        if 0 <= index <= self._count:
            add_node = Node(val)
            node = self._head
            for _ in range(0, index):
                node = node.next
            add_node.next = node.next
            node.next = add_node
            self._count += 1



    def deleteAtIndex(self, index: int) -> None:

        if 0 <= index < self._count:
            node = self._head
            for _ in range(0, index):
                node = node.next
            node.next = node.next.next
            self._count -= 1
