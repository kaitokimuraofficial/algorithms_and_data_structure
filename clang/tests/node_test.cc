extern "C" {
#include "../src/node.h"
}

#include <gtest/gtest.h>

TEST(NodeTest, LEN) {
    Node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 11);

    insertAtBeginning(&head, 2);

    EXPECT_EQ(len(head), 3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
