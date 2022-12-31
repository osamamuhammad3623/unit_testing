#include <gtest/gtest.h>
#include "Demo_Class.h"

Demo_Class::Demo_Class(string _name) : name(_name), value(0){};

string Demo_Class::get_name() {
	return name;
}

void Demo_Class::set_value(int n) {
	value = n;
}

int Demo_Class::get_value() {
	return value;
}