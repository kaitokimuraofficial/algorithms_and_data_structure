#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H
//------------------------------------------------


//------------------------------------------------
//  Macro Definition
//------------------------------------------------


//------------------------------------------------
//  Type Definition
//------------------------------------------------

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} Node;

//------------------------------------------------
//  Prototype Declaration
//------------------------------------------------
Node* createNode(int data);
int len(Node* head);
void print(Node* head);

int insertAtBeginning(Node** head, int data);
int insertAtEnd(Node** head, int data);
int insertAtIndex(Node** head, int data, int index);
int deleteHead(Node** head);
int deleteTail(Node** head);
int deleteAtIndex(Node** head, int index);

//------------------------------------------------
#endif