#include <iostream>
using namespace std;

class Book
{
	string Title;

public:
	Book setTitle(string Title)
	{
		this->Title = Title;
		return *this;
	}
	string getTitle()
	{
		return this->Title;
	}

} book;

