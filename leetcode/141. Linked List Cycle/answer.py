from typing import Optional


# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head is None:
            return False  # Because there is no ListNode

        visitedNode = set()

        temp = head
        while temp.next is not None:
            visitedNode.add(temp)
            temp = temp.next

            if temp.next in visitedNode:
                return True

        return False
