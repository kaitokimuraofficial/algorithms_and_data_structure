#ifndef STACK_H
#define STACK_H
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
int stackLen(Node* stack);
void stackPrint(Node* stack);

int stackPush(Node** stack, int data);
int stackPop(Node** stack);

//------------------------------------------------
#endif