#include <stdio.h>
#include <stdlib.h>

#include "node.h"

// Singly Linked List


// Function to create new node, and return pointer of it
NodePtr createNode(int data) {
    NodePtr newNode = (NodePtr)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void insertAtBeginning(NodePtr* head, int data) {
    NodePtr newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(NodePtr* tail, int data) {
    NodePtr newNode = createNode(data);
    if (*tail == NULL) {
        *tail = newNode;
        return;
    }

    NodePtr temp = *tail;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete head node
void deleteHeadNode(NodePtr* head) {
    
}

// Function to delete head node
void deleteTailNode(NodePtr* tail) {
    
}

int main(void) {
    NodePtr head = NULL;

    insertAtEnd(&head, 10);
    
    return 0;
}
