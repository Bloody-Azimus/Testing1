#ifndef TESTSQUARE_H
#define TESTSQUARE_H

#include <gtest/gtest.h>

extern "C" {
#include "../app/square.h"
}

TEST(SquareNegative, a_is_Zero) {
    struct sqr sqr1;
    sqr1 = square(0,0,0);
    EXPECT_EQ(sqr1.p,-2);
}

TEST(SquareNegative, Negative_Discriminant) {
    struct sqr sqr1;
    sqr1 = square(1,-3,4);
    EXPECT_EQ(sqr1.p,-1);
}
TEST(SquarePositive, Zero_Discriminant) {
    struct sqr sqr1;
    sqr1 = square(3,-18,27);
    EXPECT_EQ(sqr1.p,0);
    EXPECT_EQ(sqr1.x1,3);
}
TEST(SquarePositive, two_sqrt) {
    struct sqr sqr1;
    sqr1 = square(1,-2,-3);
    EXPECT_EQ(sqr1.p,1);
    EXPECT_EQ(sqr1.x1,3);
    EXPECT_EQ(sqr1.x2,-1);
}

#endif // TESTSQUARE_H
