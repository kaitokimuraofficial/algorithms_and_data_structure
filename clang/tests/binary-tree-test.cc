extern "C" {
#include "../src/binary-tree.h"
}

#include <gtest/gtest.h>
#include <string>

TEST(BinaryTreeTest, maxAndMin) {    
    Tree *tree = createTree();
    Node *root = createNode(1);
    tree->root = root;

    insertNode(&root, 2);
    insertNode(&root, -5);
    insertNode(&root, 6);
    insertNode(&root, -1);

    EXPECT_EQ(minNode(root), root->left);
    EXPECT_EQ(maxNode(root), root->right->right);
}

TEST(BinaryTreeTest, searchNode) {    
    Tree *tree = createTree();
    Node *root = createNode(1);
    tree->root = root;

    insertNode(&root, 2);
    insertNode(&root, -5);
    insertNode(&root, 6);
    insertNode(&root, -1);

    EXPECT_EQ(searchNode(root, -1), root->left->right);
    EXPECT_EQ(searchNode(root, 6), root->right->right);
}

TEST(BinaryTreeTest, insert) {    
    Tree *tree = createTree();
    Node *root = createNode(1);
    tree->root = root;

    insertNode(&root, 2);
    insertNode(&root, -5);

    EXPECT_EQ(root->left->data, -5);
    EXPECT_EQ(root->right->data, 2);

    insertNode(&root, 6);
    insertNode(&root, -1);

    EXPECT_EQ(root->right->right->data, 6);
    EXPECT_EQ(root->left->right->data, -1);
}

TEST(BinaryTreeTest, preOrderTraversal) {    
    Tree *tree = createTree();
    Node *root = createNode(1);
    tree->root = root;

    insertNode(&root, 2);
    insertNode(&root, -5);
    insertNode(&root, 6);
    insertNode(&root, -1);

    testing::internal::CaptureStdout();
    preOrderTraversal(root);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "1 -> -5 -> -1 -> 2 -> 6\n");
}

TEST(BinaryTreeTest, inOrderTraversal) {    
    Tree *tree = createTree();
    Node *root = createNode(1);
    tree->root = root;

    insertNode(&root, 2);
    insertNode(&root, -5);
    insertNode(&root, 6);
    insertNode(&root, -1);

    testing::internal::CaptureStdout();
    inOrderTraversal(root);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "-5 -> -1 -> 1 -> 2 -> 6\n");
}

TEST(BinaryTreeTest, postOrderTraversal) {    
    Tree *tree = createTree();
    Node *root = createNode(1);
    tree->root = root;

    insertNode(&root, 2);
    insertNode(&root, -5);
    insertNode(&root, 6);
    insertNode(&root, -1);

    testing::internal::CaptureStdout();
    postOrderTraversal(root);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "-1 -> -5 -> 6 -> 2 -> 1\n");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
