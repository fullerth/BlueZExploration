#include "rfcommSocket.h"
#include "gtest/gtest.h"

TEST(RfcommSocketTest, DefaultConstructor)
{
    const RfcommSocket r;
    EXPECT_EQ(1, sizeof(RfcommSocket));
}
