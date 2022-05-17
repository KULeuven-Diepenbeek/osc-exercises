// include Google Test headers
// these are magically found using the -I parameter on build.
#include "gtest/gtest.h"

// include our own code to test, where add() is defined (but does NOT live, that's up to the linker!)
#include "somecalculation.h"

TEST(AddTest, ShouldAddOneAndTo) {
    EXPECT_EQ(add(1, 2), 5);
}

TEST(AddTest, ShouldAlsoBeAbleToAddNegativeValues) {
    EXPECT_EQ(add(-1, -1), -2);
}
