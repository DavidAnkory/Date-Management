/*
David Ankory 206780066
Workshop in C ++
Exercise 3 Question 1
The h file includes the names of the functions and their definition
*/
#pragma once
#include <iostream>
using namespace std;
class date
{ 
	int day;
	int month;
	int year;
public:
    date(int _day = 1, int _month = 1, int _year = 1970);
    date(const date& _date)
        :day(_date.getday()), month(_date.getmonth()),year(_date.getyear()) {}
    //modify functions
    void setdate(int _day, int _month, int _year); 
    void setmonth(int _month) { month = _month; }
    //view functions
    int getday() const { return day; }//to work with the day
    int getmonth() const { return month; }//to work with the monthe
    int getyear()const { return year; }//to work with the year
    date operator++();//++a
    date operator++(int);//a++
    void operator+=(int);//a+=
    bool operator>(date&);//a>b
    bool operator<(date&);//a<b
    bool operator==(const date& num) const {
        return (day ==num.day && month == num.month&& year==num.year);////chek eqole
    }
    void print();
};

