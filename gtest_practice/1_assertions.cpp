#include <gtest/gtest.h>
#include <iostream>
using namespace std;


TEST(assertions, assert_true_test) {
	// true if condition evaluates to true
	ASSERT_TRUE(1 == 1);
}

TEST(assertions, assert_false_test) {
	// true if condition evaluates to false
	ASSERT_FALSE(1 == 5);
}

/*
ASSERT_EQ:
- in case of failure, it produces a fatal error,
	meaning that code after assertion is not executed
*/
TEST(assertions, assert_equal_test) {
	ASSERT_EQ(1, 5);
	cout << "Assert-Eq test output\n"; // not displayed!
}

/*
EXPECT_EQ:
- in case of failure, it produces a non-fatal error,
	meaning that code after assertion is executed
*/
TEST(assertions, expect_equal_test) {
	EXPECT_EQ(1, 5);
	cout << "Expect-Eq test output\n"; // displayed!
}

/*
there are much more than EXPECT/ASSERT_EQ:
- EXPECT/ASSERT_NE --> not equal
- EXPECT/ASSERT_LT --> less than
- EXPECT/ASSERT_LE --> not less than
- EXPECT/ASSERT_GT --> greater than
- EXPECT/ASSERT_GE --> not greater than

and all ASSERT_XX produce fatal errors,
    all EXPECT_XX produce non-fatal errors

*/