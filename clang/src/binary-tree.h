#ifndef BINARY_TREE_H
#define BINARY_TREE_H
//------------------------------------------------


//------------------------------------------------
//  Macro Definition
//------------------------------------------------


//------------------------------------------------
//  Type Definition
//------------------------------------------------

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} Node;

typedef struct tree {
    Node *root;
} Tree;


//------------------------------------------------
//  Prototype Declaration
//------------------------------------------------
Tree* createTree();
Node* createNode(int data);

Node* maxNode(Node* root);
Node* minNode(Node* root);

void preOrder(Node* root, int* isFirst);
void preOrderTraversal(Node* root);
void inOrder(Node* root, int* isFirst);
void inOrderTraversal(Node* root);
void postOrder(Node* root, int* isFirst);
void postOrderTraversal(Node* root);

int insertNode(Node** tree, int data);
int deleteNode(Node** tree, int data);
int searchNode(Node* tree, int data);

//------------------------------------------------
#endif