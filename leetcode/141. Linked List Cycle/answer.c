// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode *Link;

bool hasCycle(struct ListNode *head) {
    if (head == NULL) {
        return false;
    }

    Link slow_p = head, fast_p = head;

    while (slow_p && fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            return 1;
        }
    }
    return 0;
}