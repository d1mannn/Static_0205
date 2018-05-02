#pragma once
#include "Library.h"
class Student
{
public:
	Student();
	Student(string name, string surname);
	static void init(); // ����������� ����� ����������������
	static int get_count() { return std_count; };
	friend istream& operator >> (istream& is, Student & s); // istream - ����� ����� ����� ������� � ������� ��� � �����
	friend ostream& operator << (ostream& os, Student s); // �������� ������ �� ����� ������ ostream &
	virtual ~Student();
private:
	static int std_count;
	string name;
	string surname;
};

