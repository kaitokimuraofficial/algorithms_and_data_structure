#include <stdio.h>
#include <stdlib.h>

#include "queue.h"


// return a number of node in queue
// length of queue that has only head node is 0.
// length of HEAD -> 3 -> 5 -> NULL is 2.
int queueLen(Node* queue) {
    return len(queue);
}

// print every node from beginning to end in queue
void queuePrint(Node* queue) {
    print(queue);
}

// put node at the head (FIFO)
int queuePut(Node** queue, int data) {
    int ret = insertAtBeginning(queue, data);

    return ret;
}

// delete node at the end (FIFO)
int queueGet(Node** queue) {
    int ret = deleteTail(queue);

    return ret;
}
