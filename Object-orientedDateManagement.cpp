/*
David Ankory 206780066
Workshop in C ++
Exercise 3 Question 2
The date.cpp file Includes all the codes of the functions
*/
#include "date.h"
#include <iostream>
using namespace std;
date::date(int _day, int _month, int _year)//defult
{
	day = _day;//get the defult valuy
	month = _month;
	year = _year;
	if (day < 1 || day>30)//Not in range
	{
		cout << "Error day" << endl;
		day = 1;
	}
	if (month < 1 || month>12)//Not in range
	{
		cout << "Error month" << endl;
		month = 1;
	}
	if (year < 1970 || year>2099)//Not in range
	{
		cout << "Error year" << endl;
		year = 1970;
	}
}
void date::setdate(int _day, int _month, int _year)
{
	//get the valu just if they are in the range
	if (_day >= 1 && _day<=30)
	{
		day = _day;
	}
	if (_month >= 1 && _month<=12)
	{
		month = _month;
	}
	if (_year >= 1970 && _year<=2099)
	{
		year = _year;
	}
}

date date::operator++()
{
	operator+=(1);//one more
	return *this;
}

date date::operator++(int)
{
	date temp = *this;
	operator+=(1);//chage the value
	return temp;//return the value befur the change
}

void date::operator+=(int u)
{
	if(this->day + u > 30)//Not in range
	{
		this->month++;
		this->day = (day + u) - 30;//34-30=04
		if (this->day > 30)
		{
			while (this->day > 30)//if is stil hige frome 30
			{
				this->month++;
				this->day = (day) - 30;
			}
		}
		if (this->month > 12)//Not in range
		{
			this->month = 1;//new year
			this->year++;//one more year
			if (this->year > 2099)//not in the range
			{
				//defult
				this->day = 1;
				this->month = 1;
				this->year = 1970;
			}
		}
	}
	else//in the range
	{
		this->day =day+ u;
	}
}

bool date::operator>(date& _date)
{
	if (year > _date.year)//first chek in the year
	{
		return true;
	}
	else if (year == _date.year && month > _date.month)//if they are in the smae year ew chek the monthe
	{
		return true;
	}
	else if (year == _date.year && month == _date.month && day > _date.day)//if the are in the same year and month we chek the day
	{
		return true;
	}
	//if all is bigger return true
	return false;
}

bool date::operator<(date& _date)
{
	if (year < _date.year)//first chek in the year
	{
		return true;
	}
	else if (year == _date.year && month < _date.month)//if they are in the smae year ew chek the monthe
	{
		return true;
	}
	else if (year == _date.year && month == _date.month && day < _date.day)//if the are in the same year and month we chek the day
	{
		return true;
	}
	//if all is bigger return true
	return false;
}

void date::print()//print in the format xx/yy//zzzz
{
	char tav = '/';
	cout << day << tav << month << tav << year << endl;
	/*
	if (day < 10 && month>9)
	{
		cout << '0' << day << tav << month << tav << year << endl;
	}
	else if (month < 10 && day>9)
	{
		cout << day << tav <<'0'<< month << tav << year << endl;
	}
	else if (day < 10 && month < 10)
	{
		cout << '0' << day << tav <<'0'<< month << tav << year << endl;
	}
	else
	{
		cout << day << tav << month << tav << year << endl;
	}
	*/
}
