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
};