// Assignment11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "People.h"

class host
{
public:
	int Age;
	string location = "SweetWater";
	void talk(string words);
	string name = "";

private:
	

};
void host::talk(string words)
{
	cout << name << " says :"<< words << endl;
	return;
}



int main()
{
	//Arnold("Welcome to westworld, where nothing can go wrong");
	//Delores("It dosent look like anything to me");
	
	host Delores;
	host Arnorld;
	host HostTeddy;
	
	Delores.name = "Delores";
	Delores.talk(" It dosent look like anything to me");
	HostTeddy.name = "Teddy";
	HostTeddy.talk(" Howdy");
	Arnorld.name = "Arnorld";
	Arnorld.talk(" Welcome to Westworld");
	
	system("pause");
    return 0;
}

