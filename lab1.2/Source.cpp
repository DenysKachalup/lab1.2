/////////////////////////////////////////////////
//Source.cpp
#include <iostream>
#include "date.h"

using namespace std;

date makedate(int day, int month1, int year)
{
	date g;
	if (g.Init(day, month1, year)) 
		cout << "��� ���!!!" << endl;
	else
		cout << "��� �����!!!" << endl;
	
	return g;

}
int main()
{
	date g;
	g.Read();
	g.Display();
	
	int day, month1, year;

	cout << "���� (1-31)    "; cin >> day;
	cout << "̳���� (1-12)  "; cin >> month1;
	cout << "г�            "; cin >> year;
	makedate(day, month1, year);

	return 0;
}