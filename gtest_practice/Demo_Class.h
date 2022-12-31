#include <iostream>
using namespace std;


class Demo_Class
{
private:
	string name;
	int value;
public:
	Demo_Class(string _name);

	string get_name();
	void set_value(int n);
	int get_value();
};

