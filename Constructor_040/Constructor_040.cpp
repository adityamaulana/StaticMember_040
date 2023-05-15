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

Student::Student(string iName)
{
	name = iName;
}

Student::Student(int iNim, string iName)
{
	nim = iNim;
	name = iName;
}

void Student::print()
{
	cout<<endl<< "Nim ="<<nim<<endl;
	cout<< " Name = "<<name<<endl;
}

int main()
{
	Student Mhs1;
	Student Mhs2;
	Student Mhs3("Coki Pardede");
	Student Mhs4("Tretan Muslim");

	Mhs1.print();
	Mhs2.print();
	Mhs3.print();
	Mhs4.print();

	return 0;
}

