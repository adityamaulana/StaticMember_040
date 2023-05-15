#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int main;
	string name;

public:
	Student();
	Student(int);
	Student(string);
	Student(int iNim, string iName);

void print();
};