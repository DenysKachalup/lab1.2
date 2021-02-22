//////////////////////////////////////////
//date.cpp
#include "date.h"
#include<iostream>
#include <Windows.h>

void date::setDay(int value)
{
	day = value;
}
void date::setMonth(int value)
{
	month1 = value;
	switch (value)
	{
	case 1:
		month = "Jan";
		break;
	case 2:
		month = "Feb";
		break;
	case 3:
		month = "Mar";
		break;
	case 4:
		month = "Apr";
		break;
	case 5:
		month = "May";
		break;
	case 6:
		month = "June";
		break;
	case 7:
		month = "Jul";
		break;
	case 8:
		month = "Aug";
		break;
	case 9:
		month = "Sept";
		break;
	case 10:
		month = "Oct";
		break;
	case 11:
		month = "Nov";
		break;
	case 12:
		month = "Dec";
		break;
	}
}
void date::setYear(int value)
{
	year = value;
}
void date::Read()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int day{};
	int month1{};
	int year{};
	do
	{
		cout << "Äåíü (1-31)    "; cin >> day;
		cout << "Ì³ñÿöü (1-12)  "; cin >> month1;
		cout << "Ð³ê            "; cin >> year;
	} while (!Init(day, month1, year));
}
void date::Display()
{
	cout << endl;
	cout << getDay() << "." <<getMonth1()<<"."<< getYear()<<endl;
	cout << getDay() << " " << getMonth() << " " << getYear()<<" Ðîêó"<<endl;
	
}

bool date::Init(int day, int month1, int year)
{
	if ((day >= 1 && day <= 31) && (month1 >= 1 && month1 <= 12) && (year > 1021 && year < 3021))
	{
		setDay(day);
		setMonth(month1);
		setYear(year);
		return true;
	}
	else
	{
		cout << "Äàí³ íåâ³ðí³!!!" << endl;
		return false;
	}
}