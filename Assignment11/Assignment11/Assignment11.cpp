// Assignment11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "People.h"

class stuff
{
public:
	int number;
	string name;
	void dostuff();
};
void stuff::dostuff()
{
	cout << "stuff" << endl;
}


int main()
{
	Arnold("Welcome to westworld, where nothing can go wrong");
	Delores("It dosent look like anything to me");
	
	stuff book;
	book.name = "The art of war";
	book.dostuff();
	cout << book.name << endl;
	system("pause");
    return 0;
}

