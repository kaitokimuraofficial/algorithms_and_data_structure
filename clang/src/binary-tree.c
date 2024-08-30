#include <stdio.h>
#include <stdlib.h>

#include "binary-tree.h"


// create new tree
Tree* createTree() {
    Tree *newTree = (Tree*)malloc(sizeof(Tree));
    newTree->root = NULL;

    return newTree;
}

// create new node
Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node* maxNode(Node* root) {
    if (root->right == NULL) return root;

    return maxNode(root->right);
}

Node* minNode(Node* root) {
    if (root->left == NULL) return root;

    return minNode(root->left);
}

// print nodes in pre-order
void preOrder(Node* root, int* isFirst) {
    if (root == NULL) return;

    if (*isFirst) {
        *isFirst = 0;
    } else {
        printf(" -> ");
    }

    printf("%d", root->data);

    preOrder(root->left, isFirst);
    preOrder(root->right, isFirst);
}

void preOrderTraversal(Node* root) {
    int isFirst = 1;
    preOrder(root, &isFirst);
    printf("\n");
}

// print nodes in in-order
void inOrder(Node* root, int* isFirst) {
    if (root == NULL) return;

    inOrder(root->left, isFirst);
    if (*isFirst) {
        *isFirst = 0;
    } else {
        printf(" -> ");
    }
    printf("%d", root->data);

    inOrder(root->right, isFirst);
}

void inOrderTraversal(Node* root) {
    int isFirst = 1;
    inOrder(root, &isFirst);
    printf("\n");
}

// print nodes in post-order
void postOrder(Node* root, int* isFirst) {
    if (root == NULL) return;

    postOrder(root->left, isFirst);
    postOrder(root->right, isFirst);

    if (*isFirst) {
        *isFirst = 0;
    } else {
        printf(" -> ");
    }
    
    printf("%d", root->data);
}

void postOrderTraversal(Node* root) {
    int isFirst = 1;
    postOrder(root, &isFirst);
    printf("\n");
}

// insert new node into binary tree
int insertNode(Node**  root, int data) {
    if (*root == NULL) {
        Node *tempNode = createNode(data);

        *root = tempNode;
        return 0;
    }

    if ((*root)->data == data) return 0;

    if ((*root)->data > data) {
        return insertNode(&(*root)->left, data);
    } else {
        return insertNode(&(*root)->right, data);
    }
}

// search node in tree
Node* searchNode(Node* root, int data) {
    if (root == NULL) return NULL;

    if (root->data == data) return root;

    if (root->data > data) {
        return searchNode(root->left, data);
    } else {
        return searchNode(root->right, data);
    }
}
