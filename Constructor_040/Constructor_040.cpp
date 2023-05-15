#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int nim;
	string name;

public:
	Student();
	Student(int);
	Student(string);
	Student(int iNim, string iName);

void print();
};

Student::Student()
{
	nim = 0;
	name = "";
}

Student::Student(int iNim)
{
	nim = iNim;
}

