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

Number::Number(int i)
{
	panjang = i;
	arr = new int [i];

	fillData();
}