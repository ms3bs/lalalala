#include "gtest/gtest.h"
#include "main.h"

class StackTest : public ::testing::Test {
protected:
    void SetUp() {
        stack = new Stack(0);
    }
    void TearDown() {
        delete(stack);
    }
    Stack *stack;
};

TEST_F(StackTest, pop_test) {
    stack->clear_stack();
    EXPECT_EQ("error", stack->stack_testing("pop", -1));
    stack->push(7);
    stack->push(8);
    stack->push(9);
    EXPECT_EQ("success", stack->stack_testing("pop", -1));
    EXPECT_EQ("success", stack->stack_testing("pop", -1));
    EXPECT_EQ("success", stack->stack_testing("pop", -1));
}

TEST_F(StackTest, clear_stack) {
    stack->clear_stack();
    EXPECT_EQ("success", stack->stack_testing("clear_stack", -1));
//    stack->push(11);
//    EXPECT_EQ("success", stack->stack_testing("clear_stack", -1));
}


TEST_F(StackTest, push_test) {
    for (int i = 0; i < 8; ++i) {
        stack->push(i);
        EXPECT_EQ("success", stack->stack_testing("push", i));
    }
}

TEST_F (StackTest, empty_test) {
    stack->clear_stack();
    EXPECT_EQ("success", stack->stack_testing("is_empty", -1));
}

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}


