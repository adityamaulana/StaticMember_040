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

int main() 

{
	Student Mhs1("Deddy Mahendra Desta");
	Student Mhs2("Vincent Ryan Rompies");

	Student::setNim(9);

	Student Mhs3("Coki Pardede");
	Student Mhs4("Tretan Muslim");

	Mhs1.printAll();
	Mhs2.printAll();
	Mhs3.printAll();
	Mhs4.printAll();

	cout<<"Access from outside of the object = "<<Student::getNim()<<endl;

	return 0;
}