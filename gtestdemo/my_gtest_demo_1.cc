// in my_gtest_demo_1.cc
#include <gtest/gtest.h>


int add_int1(int x, int y) {
  return (x + y);
}


TEST(my_gtest_demo_1, test_add_int_1) {
    EXPECT_EQ(add_int1(1,1), 2); // PASS
    EXPECT_EQ(add_int1(1,1), 1) << "FAILED: EXPECT: 2, but given 1";; // FAILDED
}
