#pragma once

#include "18l1009_Person.h"

class  Faculty : private Person
{
	int course_count;
	int extension;

public:
	Faculty(string l_name, string f_name, int age, int count, int ext) : Person(l_name, f_name, age)
	{
		course_count = count;
		extension = ext;
		cout << "\n Faculty Constructor invoked...\n";
	}
	~Faculty()
	{
		course_count = NULL;
		extension = NULL;
		cout << "\n Faculty Destructor invoked... \n";
	}

	int get_coursecount() { return course_count; }
	int get_extension() { return extension; }

	void print_Faculty()
	{
		cout << "\nPrinting Faculty...\n";
		cout << this->get_firstname() << " " << get_lastname() << " is " << get_age() << " years old. He's teaching " << course_count << "courses. His extension is " << extension << endl;
	}
};