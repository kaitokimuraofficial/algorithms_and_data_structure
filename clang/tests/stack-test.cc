extern "C" {
#include "../src/stack.h"
}

#include <gtest/gtest.h>
#include <string>

TEST(StackTest, pushAndPop) {
    Node *head = NULL;

    stackPush(&head, 10);
    stackPush(&head, 11);

    EXPECT_EQ(stackLen(head), 2);
    testing::internal::CaptureStdout();
    stackPrint(head);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "11 -> 10\n");


    stackPush(&head, 2);

    EXPECT_EQ(stackLen(head), 3);
    testing::internal::CaptureStdout();
    stackPrint(head);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "2 -> 11 -> 10\n");


    stackPop(&head);

    EXPECT_EQ(stackLen(head), 2);
    testing::internal::CaptureStdout();
    stackPrint(head);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "11 -> 10\n");


    stackPop(&head);

    EXPECT_EQ(stackLen(head), 1);
    testing::internal::CaptureStdout();
    stackPrint(head);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "10\n");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
