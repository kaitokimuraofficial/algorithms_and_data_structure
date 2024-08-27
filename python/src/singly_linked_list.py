from __future__ import annotations
from typing import Any


class Node:
    def __init__(self, data: Any = None, next: Node = None) -> None:
        self.data = data
        self.next = next


class SinglyLinkedList:
    def __init__(self) -> None:
        self.no = 0
        self.head = None
        self.current = None

    def __len__(self) -> int:
        return self.no

    def insert_head(self, data: Any) -> None:
        ptr = self.head
        self.head = self.current = Node(data, ptr)
        self.no += 1

    def insert_tail(self, data: Any) -> None:
        if self.head is None:
            self.insert_head(data)
            return

        ptr = self.head
        while ptr.next is not None:
            ptr = ptr.next
        ptr.next = self.current = Node(data, None)
        self.no += 1

    def remove_head(self):
        if self.head is not None:
            self.head = self.current = self.head.next
        self.no -= 1

    def remove_last(self):
        if self.head is None:
            return

        if self.head.next is None:
            self.remove_head()
            return

        ptr = self.head
        while ptr.next.next is not None:
            ptr = ptr.next
        ptr.next = None
        self.no -= 1

    def print(self) -> None:
        ptr = self.head

        while ptr is not None:
            if ptr.next is not None:
                print(ptr.data,end=' -> ')
            else:
                print(ptr.data)
            ptr = ptr.next
