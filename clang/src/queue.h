#ifndef QUEUE_H
#define QUEUE_H
//------------------------------------------------
#include "singly-linked-list.h"

//------------------------------------------------
//  Macro Definition
//------------------------------------------------


//------------------------------------------------
//  Type Definition
//------------------------------------------------



//------------------------------------------------
//  Prototype Declaration
//------------------------------------------------
int queueLen(Node* queue);
void queuePrint(Node* queue);

int queuePut(Node** queue, int data);
int queueGet(Node** queue);

//------------------------------------------------
#endif