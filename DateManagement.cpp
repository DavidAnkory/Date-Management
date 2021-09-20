/*
David Ankory 206780066
Workshop in C ++
Exercise 3 Question 1
The code performs various operations between dates
*/
#include <iostream>
#include "date.h"
using namespace std;
enum options
{
	update=1, print_first, print_lest, get_day, get_date_bigger, get_date_smaller, isEqual, stop=-1//operations
};
int main()
{
	date a,temp;
	int day, month, year;
	char tav;
	cout << "Enter a date" << endl;
	cin >> day >> tav >> month >> tav >> year;
	a=date(day, month, year);//get the value
	a.print();//print
	cout<<"Enter an action code:"<<endl;
	int choice;
	cin >> choice;
	while (choice!=-1)//if choice =-1 system pous
	{
		switch (choice)
		{
		case update: cout << "Enter a date" << endl; cin >> day >> tav >> month >> tav >> year; a = date(day, month, year); a.print();//Changes the date
			break;
		case print_first:	(++a).print();//print a++
			break;
		case print_lest:	(a++).print();//print ++a
			break;
		case get_day:		cout << "Enter #days" << endl; cin >> day; a += day; a.print();//print the new date
			break;
		case get_date_bigger:	cout << "Enter a date" << endl; cin >> day >> tav >> month >> tav >> year; temp=date(day, month, year); if (a > temp) { cout << ">:true" << endl; }
							else { cout << ">:false" << endl; }//chek if a is bigger
			break;
		case get_date_smaller:    	cout << "Enter a date" << endl; cin >> day >> tav >> month >> tav >> year; temp=date(day, month, year); if (a < temp) { cout << "<:true" << endl; }
							 else { cout << "<:false" << endl; }//chek if a is smaller
			break;
		case isEqual:		cout << "Enter a date" << endl; cin >> day >> tav >> month >> tav >> year; temp=date(day, month, year); if (a == temp) { cout << "==:true" << endl; }
					else { cout << "==:false" << endl; }//chek if a is equal to temp
			break;
		case stop:	system("puse");
			break;
		}
		cout << "Enter an action code:\n";
		cin >> choice;
	}
	return 0;
}
/*
Enter a date
-5/1/2012
Error day
1/1/2012
Enter an action code:
1
Enter a date
5/7/2010
5/7/2010
Enter an action code:
2
6/7/2010
Enter an action code:
3
6/7/2010
Enter an action code:
4
Enter #days
7
14/7/2010
Enter an action code:
5
Enter a date
14/7/2010
>:false
Enter an action code:
7
Enter a date
14/7/2010
==:true
Enter an action code:
-1

C:\Users\ankor\Documents\מדעי המחשב- שנה א\סמסטר ב\סדנה C++\exerice3\exercice3.2\Debug\exercice3.2.exe (process 12988) exited with code 0.
Press any key to close this window . . .
*/