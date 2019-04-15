#pragma once

#include "18l1009_Person.h"

class  Student : private Person
{
	string fyp_name;
	float gpa;

public:
	Student():Person()
	{
		this->age = 0;
	}
	Student(string l_name, string f_name, int age, string fyp, float gpa) : Person(l_name, f_name, age)
	{
		fyp_name = fyp;
		this->gpa = gpa;
		cout << "\n Student Constructor invoked...\n";
	}
	~Student()
	{
		fyp_name = "";
		gpa = NULL;
		cout << "\n Student Destructor invoked... \n";
	}
	string get_fyp() { return fyp_name; }
	float get_gpa() { return gpa; }
	void set_gpa(float g) { gpa = g; }
	void set_fyp(string n) { fyp_name = n; }
	void print_Student()
	{
		cout << "\nPrinting Student...\n";
		cout << this->get_firstname()<< " " << get_lastname()<< " is " << get_age() << " years old. His GPA is " << gpa << endl;
	}
};