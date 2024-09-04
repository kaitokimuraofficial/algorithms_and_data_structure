#include <stdlib.h>

#include "avl-tree.h"

AVLTree* createTree() {
    AVLTree *newTree = (AVLTree*)malloc(sizeof(AVLTree));
    newTree->root = NULL;

    return newTree;
}

Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->label = E;
    newNode->parent = NULL;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// insert a new node
int insertNode(Node** parent, Node** root, int data) {
    if (*root == NULL) {
        Node *tempNode = createNode(data);
        tempNode->parent = *parent;
        *root = tempNode;

        return balance(parent, root);
    }

    if (*root->data == data) return -1;
    else if (*root->data > data) return insertNode(root, &(*root->left), data);
    else return insertNode(root, &(*root->right), data);
}

// delete a node
int deleteNode(Node** parent, int data) {
    if (*parent == NULL) return -1;

    if (*parent->data > data) return deleteNode(&(*parent->left), data);
    else if (*parent->data < data) return deleteNode(&(*parent->right), data);


    return 0;
}

// balance
int balance(Node** parent, Node** node) {
    if (*parent->right == *node) {
        switch (*parent->label)
        {
        case L:
            *parent->label = E;
            break;
        case E:
            *parent->label = R;
            balance(&(*parent)->parent, parent);
            break;
        default:
            if (*node->label == E) return 0;

            if (*node->label == R) {
                *parent->label = *node->label = E;

                leftRotate(parent, node);
            } else {
                rightRotate(&node, *node->left);
                leftRotate(parent, &(*node->left));
                *parent->label = L;
                (*node->left)->label = E;

                if (*node->left->label == R) *node->label = E;
                else if (*node->left->label == L) *node->label = R;
            }
            break;
        }
    } else {
        switch (*parent->label)
        {
        case R:
            *parent->label = E;
            break;
        case E:
            *parent->label = L;
            balance(&(*parent)->parent, parent);
            break;
        default:
            if (*node->label == E) return 0;

            if (*node->label == L) {
                *parent->label = *node->label = E;

                rightRotate(parent, node);
            } else {
                leftRotate(&node, *node->right);
                rightRotate(parent, &(*node->right));
                (*node->right)->label = E;

                if (*node->left->label == L) {
                    *node->label = E;
                    *parent->label = R;
                } else if (*node->right->label == R) {
                    *node->label = L;
                    *parent->label = E;
                }
            }
            break;
        }
    }
}

// rotate to the left
int leftRotate(Node** parent, Node** node) {
    Node *parentParent = *parent->parent;

    if (parentParent->left == *parent) parentParent->left = *node;
    else parentParent->right = *node;
    *node->parent = parentParent;
    free(parentParent);

    *parent->parent = *node;

    *parent->right = *node->left;
    (*node->left)->parent = *parent;
    *node->left = *parent;

    return 0;
}

// rotate to the right
int rightRotate(Node** parent, Node** node) {
    Node *parentParent = *parent->parent;

    if (parentParent->left == *parent) parentParent->left = *node;
    else parentParent->right = *node;
    *node->parent = parentParent;
    free(parentParent);

    *parent->parent = *node;

    *parent->left = *node->right;
    (*node->right)->parent = *parent;
    *node->right = *parent;

    return 0;
}