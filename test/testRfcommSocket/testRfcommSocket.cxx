#include "rfcommSocket.h"
#include "gtest/gtest.h"

TEST(RfcommSocketTest, DefaultConstructor)
{
    const RfcommSocket r;
    int s = r.getSocket();
    EXPECT_EQ(NULL, s);
}


