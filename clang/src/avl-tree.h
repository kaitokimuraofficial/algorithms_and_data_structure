#ifndef AVL_H
#define AVL_H
//------------------------------------------------


//------------------------------------------------
//  Macro Definition
//------------------------------------------------
#define L 1
#define E 0
#define R -1

//------------------------------------------------
//  Type Definition
//------------------------------------------------
typedef struct node {
    int data;
    int label;
    struct node *parent;
    struct node *left;
    struct node *right;
} Node;

typedef struct avlTree {
    Node *root;
} AVLTree;


//------------------------------------------------
//  Prototype Declaration
//------------------------------------------------

AVLTree* createTree();
Node* createNode(int data);

int insertNode(Node** parent, Node** root, int data);
int deleteNode(Node** root, int data);

int balance(Node** parent, Node** root);
int leftRotate(Node** parent, Node** node);
int rightRotate(Node** parent, Node** node);

//------------------------------------------------
#endif