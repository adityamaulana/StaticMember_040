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

Number::~Number()
{
	cout<<endl;
	printData();
	delete[]arr;

	cout<<"Array Address Has Been Released"<<endl;
}