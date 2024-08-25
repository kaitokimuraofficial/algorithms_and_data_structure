#include <stdio.h>

#include "node.h"

// Singly Linked List

int main(void) {
    Node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 11);


    insertAtBeginning(&head, 2);
    print(head);
    printf("%d\n", len(head));

    insertAtIndex(&head, 100, 1);
    print(head);
    printf("%d\n", len(head));

    deleteAtIndex(&head, 1);
    print(head);
    printf("%d\n", len(head));

    return 0;
}
