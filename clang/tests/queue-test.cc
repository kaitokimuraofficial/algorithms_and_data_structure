extern "C" {
#include "../src/queue.h"
}

#include <gtest/gtest.h>
#include <string>

TEST(QueueTest, pushAndPop) {
    Node *head = NULL;

    queuePut(&head, 10);
    queuePut(&head, 11);

    EXPECT_EQ(queueLen(head), 2);
    testing::internal::CaptureStdout();
    queuePrint(head);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "11 -> 10\n");


    queuePut(&head, 2);

    EXPECT_EQ(queueLen(head), 3);
    testing::internal::CaptureStdout();
    queuePrint(head);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "2 -> 11 -> 10\n");


    queueGet(&head);

    EXPECT_EQ(queueLen(head), 2);
    testing::internal::CaptureStdout();
    queuePrint(head);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "2 -> 11\n");


    queueGet(&head);

    EXPECT_EQ(queueLen(head), 1);
    testing::internal::CaptureStdout();
    queuePrint(head);
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "2\n");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
