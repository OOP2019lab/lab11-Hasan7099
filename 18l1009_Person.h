#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person
{
	string f_name;
	string l_name;

protected:
	int age;

public:
	Person()
	{
		f_name = "";
		l_name = "";
		age = 0;
	}
	Person(string l_name, string f_name, int age)
	{
		this->l_name = l_name;
		this->f_name = f_name;
		this->age = age;
		cout << "\n Person Constructor invoked... \n";
	}
	~Person()
	{
		f_name = "";
		l_name = "";
		age = NULL;
		cout << "\n Person Destructor invoked... \n";
	}
	string get_lastname() { return l_name; }
	string get_firstname() { return f_name; }
	void set_lastname(string n) { l_name = n; }
	void set_firstname(string n) { f_name = n; }
	int get_age() { return age; }
	void set_age(int a) { age = a; }
	void print_Person()
	{
		cout << "\nPrinting Person...\n";
		cout << this->f_name << " " << l_name << " is " << age << " years old." << endl;
	}
};