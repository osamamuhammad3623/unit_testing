#include <gtest/gtest.h>
#include "Demo_Class.h"
#include <iostream>
using namespace std;

/*
TEST(demo_fixture_test, test_1) {
	// Arrange
	Demo_Class obj("root");

	// Act
	obj.set_value(15);
	int updated_value = obj.get_value();

	// Assert
	ASSERT_EQ(updated_value, 15);
}

TEST(demo_fixture_test, test_2) {
	// Arrange
	Demo_Class obj("root");

	// Act
	obj.set_value(-50);
	int updated_value = obj.get_value();

	// Assert
	ASSERT_EQ(updated_value, -50);
}
*/

/* The previous tests have the same Arrange code, imagine more complex code!
	We can use fixtures to avoid repeating code
*/

struct Demo_Class_fixture: public testing::Test
{
	Demo_Class* obj;
	
	// called before a test
	void SetUp() {
		obj = new Demo_Class("root");
	}

	// called after a test
	void TearDown() {
		delete obj;
	}
};

// now we use TEST_F instead of TEST, and no need for the Arrange code.
TEST_F(Demo_Class_fixture, test_1) {
	// Act
	obj->set_value(15);
	int updated_value = obj->get_value();

	// Assert
	ASSERT_EQ(updated_value, 15);
}

TEST_F(Demo_Class_fixture, test_2) {
	// Act
	obj->set_value(-50);
	int updated_value = obj->get_value();

	// Assert
	ASSERT_EQ(updated_value, -50);
}