#pragma once
#include "Library.h"
class Student
{
public:
	Student();
	Student(string name, string surname);
	static void init(); // обязательно нужно инициализировать
	static int get_count() { return std_count; };
	friend istream& operator >> (istream& is, Student & s); // istream - поток ввода можем считать с консоли или с файла
	friend ostream& operator << (ostream& os, Student s); // передаем ссылку на поток вывода ostream &
	virtual ~Student();
private:
	static int std_count;
	string name;
	string surname;
};

