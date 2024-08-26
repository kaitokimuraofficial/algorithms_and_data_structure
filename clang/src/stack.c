#include <stdio.h>
#include <stdlib.h>

#include "stack.h"


// return a number of node in stack
// length of stack that has only head node is 0.
// length of HEAD -> 3 -> 5 -> NULL is 2.
int stackLen(Node* stack) {
    return len(stack);
}

// print every node from beginning to end in stack
void stackPrint(Node* stack) {
    print(stack);
}

// push node at the head (LIFO)
int stackPush(Node** stack, int data) {
    int ret = insertAtBeginning(stack, data);

    return ret;
}

// delete node at the head (LIFO)
int stackPop(Node** stack) {
    int ret = deleteHead(stack);

    return ret;
}
