#include "Student.h"



Student::Student()
{
	std_count++;
}

Student::Student(string name, string surname)
{
	this->name = name;
	this->surname = surname;
	std_count++;
}

void Student::init()
{
	std_count = 0;
}


Student::~Student()
{
	std_count--;
}

istream & operator >> (istream & is, Student & s)
{
	is >> s.name >> s.surname;
	return is;
	// TODO: insert return statement here
}

ostream & operator<<(ostream & os, Student s)
{	
	os << s.name << "\t" << s.surname << endl;
	return os;
	// TODO: insert return statement here
}
