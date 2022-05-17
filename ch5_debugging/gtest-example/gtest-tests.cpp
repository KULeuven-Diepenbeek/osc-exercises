// test.cpp
#include "gtest/gtest.h"

#include "somecalculation.h"

TEST(AddTest, ShouldAddOneAndTo) {
    EXPECT_EQ(add(1, 2), 5);
}

TEST(AddTest, ShouldAlsoBeAbleToAddNegativeValues) {
    EXPECT_EQ(add(-1, -1), -2);
}
