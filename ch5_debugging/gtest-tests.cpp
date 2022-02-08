// test.cpp
#include "gtest/gtest.h"

int add(int one, int two) {
    return one + two;
}

TEST(AddTest, ShouldAddOneAndTo) {
    EXPECT_EQ(add(1, 2), 5);
}

TEST(AddTest, ShouldAlsoBeAbleToAddNegativeValues) {
    EXPECT_EQ(add(-1, -1), -2);
}
