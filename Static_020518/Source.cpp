#include "Library.h"
#include "Student.h"
#include <cstring>

int Student::std_count;
// объявили, что занимает место в памяти

void example()
{
	static int n = 0;
	n += 1;
	cout << n << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	char str1[] = "This is an example string";
	char str2[] = "is";
	string str3 = "This is an example string";

	cout << strstr(str1, str2) << endl; // находи слово в str2[] - is, и начинает выводит с него
	cout << strstr(str1, str2) -  str1 << endl; // сколько символов нужно пропустить чтобы начал с него
	cout << strstr(str3.c_str(), str2) << endl;



	/*example();
	example();
	Student::init();
	Student s;
	Student s1("name", "surname");
	cout << Student::get_count() << endl;*/
	system("pause");
	return 0;
}