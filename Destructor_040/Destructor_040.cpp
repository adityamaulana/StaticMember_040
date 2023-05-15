#include <iostream>
using namespace std;

class Number
{
private:
	int *arr;
	int panjang;

public:
	Number(int);
	~Number();

	void printData();
	void fillData();
};