///////////////////////////////////////////
//date.h
#pragma once
#include <string>

using namespace std;

class date
{
private:
	string month;
	int day;
	int month1;
	int year;

public:
	int getDay() const { return day; }
	int getMonth1() const { return month1; }
	int getYear() const { return year; }
	string getMonth() const { return month; }

	void setDay(int value);
	void setMonth(int value);
	void setYear(int value);

	void Read();
	void Display();
	bool Init(int day, int mont1, int year);
};

