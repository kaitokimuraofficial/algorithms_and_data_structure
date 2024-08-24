#ifndef NODE_H
#define NODE_H
//------------------------------------------------


//------------------------------------------------
//  Macro Definition
//------------------------------------------------


//------------------------------------------------
//  Type Definition
//------------------------------------------------
struct node {
    int data;
    struct node *next;
};

typedef struct node *NodePtr;

//------------------------------------------------
//  Prototype Declaration
//------------------------------------------------
NodePtr createNode(int data);
void insertAtBeginning(NodePtr* head, int data);
void insertAtEnd(NodePtr* tail, int data);
void insertAtIndex(NodePtr* head, NodePtr* node, int index);
void deleteHeadNode(NodePtr* head);
void deleteTailNode(NodePtr* tail);
void deleteNodeWithKey(NodePtr* head, int key);

//------------------------------------------------
#endif