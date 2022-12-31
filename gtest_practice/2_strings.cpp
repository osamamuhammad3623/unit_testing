#include <gtest/gtest.h>
#include "Demo_Class.h"
#include <iostream>
using namespace std;


TEST(demo_string_test, assert_string_equal_test) {
	// Arrange
	Demo_Class demo_obj("root");

	// Act
	string name_value = demo_obj.get_name();

	// Assert
	/* to compare strings, use ASSERT_STREQ/ ASSERT_STRNE */
	ASSERT_STREQ(name_value.c_str(), "root");
}

TEST(demo_string_test, assert_string_ignore_case_equal_test) {
	// Arrange
	Demo_Class demo_obj("root");

	// Act
	string name_value = demo_obj.get_name();

	// Assert
	/* use STRCASEEQ/STRCASENE to ignore letter case */
	ASSERT_STRCASEEQ(name_value.c_str(), "ROOT");
}