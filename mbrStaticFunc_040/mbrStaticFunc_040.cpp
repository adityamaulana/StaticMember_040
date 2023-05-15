#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	static int nim;

public:
	int id;
	string name;

	void setId();
	void printAll();

	static void setNim(int pNim)
	{
		nim = pNim;
	}

	static int getNim()
	{
		return nim;
	}

	Student(string pname):name(pname){setId();}
};

int Student::nim=0;

void Student::setId()
{
	id = ++nim;
}

void Student::printAll()
{
	cout<<"ID = "<<id<<endl;
	cout<<"Name = "<<name<<endl;

	cout<<endl;
}