#include "testfoo.h"
#include "gtest/gtest.h"

TEST(FactorialTest, Negative)
{
    EXPECT_EQ(1, Factorial(-5));

}
