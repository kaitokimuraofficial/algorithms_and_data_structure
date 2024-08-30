/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    if (!head || !head->next) return NULL;
    if (head->next == NULL)  return NULL;

    struct ListNode *slow_p = head, *fast_p = head;

    while (fast_p && fast_p->next) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p) {
            while (head != slow_p) {
                head = head->next;
                slow_p = slow_p->next;
            }
            return head;
        }
    }
    return NULL;
}
