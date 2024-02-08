#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  std::cout << "00000000000" << std::endl;
  EXPECT_STRNE("hello", "world");
  std::cout << "1111111111" << std::endl;
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
  std::cout << "22222222222" << std::endl;
  std::cout << "------------------------1111111111" << std::endl;
}

TEST(HelloTest, BasicAssertions1) {
  // Expect two strings not to be equal.
  std::cout << "00000000000" << std::endl;
  EXPECT_STRNE("hello1", "world1");
  std::cout << "1111111111" << std::endl;
  // Expect equality.
  EXPECT_EQ(7 * 6, 40);
  std::cout << "22222222222" << std::endl;
  std::cout << "------------------------2222222222222" << std::endl;
}