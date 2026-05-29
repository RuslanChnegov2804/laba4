#include <gtest/gtest.h>
#include "../include/stack.h"

TEST(StackTest, PushPopTop) {
    Stack s;
    EXPECT_TRUE(s.empty());
    s.push(10);
    s.push(20);
    EXPECT_EQ(s.size(), 2);
    EXPECT_EQ(s.top(), 20);
    s.pop();
    EXPECT_EQ(s.top(), 10);
}

TEST(StackTest, PrintAndClear) {
    Stack s;
    s.push(5);
    s.push(15);
    s.clear();
    EXPECT_TRUE(s.empty());
    EXPECT_EQ(s.size(), 0);
}

TEST(StackTest, EdgeCases) {
    Stack s;
    s.pop();  
    EXPECT_EQ(s.top(), 0);
    EXPECT_EQ(s.size(), 0);
    EXPECT_TRUE(s.empty());
}