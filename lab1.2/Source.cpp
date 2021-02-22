/////////////////////////////////////////////////
//Source.cpp
#include <iostream>
#include "date.h"

using namespace std;

date makedate(int day, int month1, int year)
{
	date g;
	if (g.Init(day, month1, year)) 
		cout << "Δΰν³ β³πν³!!!" << endl;
	else
		cout << "Δΰν³ νεβ³πν³!!!" << endl;
	
	return g;

}
int main()
{
	date g;
	g.Read();
	g.Display();
	
	int day, month1, year;

	cout << "Δενό (1-31)    "; cin >> day;
	cout << "Μ³ρÿφό (1-12)  "; cin >> month1;
	cout << "Π³κ            "; cin >> year;
	makedate(day, month1, year);

	return 0;
}