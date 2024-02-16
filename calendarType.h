//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L4-3	(calendarType.h)							* 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose         : header and implementation file containing the		*
//*					  necessary functions to create an object of		*
//*					  calendarType. Consiting of setting the year and	*
//*					  month and printing different either a calendar	*
//*					  for the month or entire year.						*
//*                                                                     * 
//* Inputs          : User to enter the information requested by		* 
//*					  the prompt.										*
//*                                                                     * 
//* Outputs         : Outputs the called functions.						*
//*                                                                     * 
//* Calls           :													*
//*					public:												*
//*					  setMonth(int m);									*
//*					  setYear(int y);									*
//*					  getMonth();										*
//*					  getYear();										*
//*					  printCalendar(char t = 'M');						*
//*					  calendarType();									*
//*					  calendarType(int m, int y);						*
//*																		*
//*					private:											*
//*					  firstDayOfMonth();								*
//*					  printTitle();										*
//*					  printDates();										*
//*					  printCalendarYear();								*
//*					  getFirstDayOfMonth();								*
//*																		*
//*                                                                     * 
//* Structure       : BEGIN                                             * 
//*                        Straight line code no sub-processes          * 
//*                   STOP                                              * 
//*                        End of Program                               * 
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Collaboration   : The Goonies										*
//*																		*
//*	Citations		: Equation to find current day of the week:			*
//*				https://www.tondering.dk/claus/cal/chrweek.php#calcdow	*
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Change Log:                                                         * 
//*                         Revision                                    * 
//*       Date    Changed  Rel Ver Mod Purpose                          * 
//* 12/04/23      acantu 000.000.000 Initial release of program       	* 
//*                                                                     * 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#pragma once
#include <iomanip>
#include "dateType.h" 
#include "extDateType.h"
#include "dayType.h"

using namespace std;

//Header file "calendarType.h"
class calendarType
{
public:
	void setMonth(int m);
	//Function to set the month of an extDateType object.
	//Precondition: No preconditions.
	//Postcondition: firstDate.setMonth(m); is called.
	 
	void setYear(int y);
	//Function to set the year of an extDateType object.
	//Precondition: No preconditions.
	//Postcondition: firstDate.setYear(y); is called.

	int getMonth();
	//Function to return an interger value of the current month.
	//Precondition:	setMonth() must be called before calling
	//				this function.
	//Postcondition: The current month is returned as an interger
	//				 value.

	int getYear();
	//Function to return the current year as an integer value.
	//Precondition: setYear() must be called prior to calling
	//				this function.
	//Postcondition: The current year is returned as an integer
	//				 value.

	void printCalendar(char t = 'M'); //t= (M)onth or (Y)ear
	//Function to print a calendar.
	//Precondition: parameter must be set to either 'M' for month
	//				or 'T' for year.
	//				setMonth() & setYear() must be called prior to
	//				calling to this function.
	//Postcondition: t = 'M'
	//					A single month calendar is printed.
	//				 t = 'Y'
	//					An entire year calendar is printed.

	calendarType();
	//Default constructor
	//Sets the month and year to September 2019.
	//Prints the calendar for the set month and year.
	//Precondition: No preconditions
	//Postcondition: setMonth(9);
	//				 setYear(2019);
	//				 printCalendar('M');

	calendarType(int m, int y);
	//Default constructor
	//Sets the month and year according to the parameters recieved.
	//Prints the calendar for the set month and year.
	//Precondtion: No precondition.
	//Postcondition: setMonth(m);
	//				 setYear(y);
	//				 printCalendar('M');

private:
	dayType firstDayOfMonth();
	//Function to return the first day of the month as an object
	//of dayType, which also sets the day.
	//Precondition: setMonth() & setYear() must be called prior
	//				to calling this function.
	//Postcondition: Returns the first day of the month as an
	//				 object of dayType, which also sets the first
	//				 day of the week.

	void printTitle();
	//Function to print the long month year of the set date.
	//Example: December 4, 2023
	//Precondition: setMonth() & setYear() must be called prior
	//				to calling this function.
	//Postcondition: The long month year is printed.

	void printDates();
	//Function to print a single month calendar.
	//Precondition: setMonth() & setYear() must be called prior
	//				to calling this function.
	//Postcondition: Calendar for the set month and year is printed.

	void printCalendarYear();
	//Function to print full year calendar.
	//Precondition: setMonth() & setYear() must be called prior
	//				to calling this function.
	//Postcondition: Full year calendar is printed.

	int getFirstDayOfMonth();
	//Function to calculate the first day of the month.
	//Precondition: setMonth() & setYear() must be called prior
	//				to calling this function.
	//Postcondition: First day of the month is returned as an
	//				 integer value.
	//				 0 = Sunday
	//				 1 = Monday
	//				 2 = Tuesday
	//				 Ect...

	extDateType firstDate;	//Object instance of extDateType
	dayType	firstDay;		//Object instance of dayType
};

//implementation code for calendarType.h
void calendarType::setMonth(int m)
{
	firstDate.setMonth(m);
}

void calendarType::setYear(int y)
{
	firstDate.setYear(y);
}

int calendarType::getMonth()
{
	return firstDate.getMonth();
}

int calendarType::getYear()
{
	return firstDate.getYear();
}

void calendarType::printCalendar(char t)
{
	if (t == 'M')
	{
		printTitle();
		printDates();
	}
	else if (t == 'Y')
	{
		cout << "Print Calendar Year for " << firstDate.getYear() << endl << endl;
		firstDate.setMonth(1);
		printCalendarYear();
	}
}

calendarType::calendarType()
{
	cout << "Anthony Cantu, calendarType.h - L4-3" << endl;
	//Default: September 2019
	setMonth(9);
	setYear(2019);
	printCalendar('M');
}

calendarType::calendarType(int m, int y)
{
	cout << "Anthony Cantu, calendarType.h - L4-3" << endl;
	setMonth(m);
	setYear(y);
	printCalendar('M');
}

//Private definitions
dayType calendarType::firstDayOfMonth()
{
	string day;
	
	switch (getFirstDayOfMonth())
	{
	case 0:
		day = "Sunday";
		break;
	case 1:
		day = "Monday";
		break;
	case 2:
		day = "Tuesday";
		break;
	case 3:
		day = "Wednesday";
		break;
	case 4:
		day = "Thursday";
		break;
	case 5:
		day = "Friday";
		break;
	case 6:
		day = "Saturday";
		break;
	default:
		day = "ERROR";
	}

	return dayType(day);
}

void calendarType::printTitle()
{
	cout << right << setw(21) << " ";
	firstDate.printLongMonthYear();
}

void calendarType::printDates()
{
	string calDays[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	int calDates = 1;	//Starting on 1st day of the month

	cout << setfill(' ');

	//Print week titles
	for (int i = 0; i < 7; i++)
		cout << right << setw(7) <<  calDays[i];

	cout << endl;

	//Loop through 6 week rows
	for (int row = 0; row < 6; row++)
	{
		//Loop through 7 week days
		for (int col = 0; col < 7; col++)
		{
			//Determine first day of month starting point
			if (row == 0 && col < getFirstDayOfMonth())
				cout << right << setw(7) << " ";
			else
			{
				if (calDates > firstDate.getDaysInMonth())
					break;

				cout << right << setw(7) << calDates;
				calDates++;
			}
		}
		cout << endl;	//Line Break
	}
}

void calendarType::printCalendarYear()
{	
	string calDays[7] = { "Su", "Mo", "Tu", "We", "Th", "Fr", "Sa" };
	string monthTitle[12] = { "January", "February", "March", "April", "May", "June", 
		"July", "August", "September", "October", "November", "December" };
	int monthCount = 0;
	int calDates[12];

	cout << setfill(' ');

	//Initialize all starting dates to 1
	for (int i = 0; i < 12; i++)
		calDates[i] = 1;

	//Print the year
	cout << left << setw(30) << " " << firstDate.getYear() << endl;

	//Loop through 12 months 3 at a time (start += 3)
	for (int start = 1; start <= 12; start += 3)
	{
		cout << left << setw(7) << " ";

		//Print the month titles
		for (int j = 0; j < 3; j++)
		{
			cout << setw(23) << monthTitle[monthCount];
			monthCount++;
		}

		cout << endl; //Line Break

		//Print the week titles
		for (int i = 0; i < 3; i++)
		{
			for (int x = 0; x < 7; x++)
			{
				cout << left << setw(3) << calDays[x];
			}
			cout << left << setw(2) << " ";
		}

		cout << endl; //Line Break

		//Loops through 6 week rows
		for (int row = 0; row < 6; row++)
		{
			//Loop through 3 months (start + 2)
			for (int month = start; month <= start + 2; month++)
			{
				firstDate.setMonth(month);
				int startingDay = getFirstDayOfMonth() - 1;
				int daysInMonth = firstDate.getDaysInMonth();

				//Loop through 7 week days
				for (int col = 0; col < 7; col++)
				{
					//Determine first day of month starting point
					if (row == 0 && col < getFirstDayOfMonth())
						cout << left << setw(3) << " ";
					else
					{
						//If it goes past last day of month print blank space
						if (calDates[month - 1] > firstDate.getDaysInMonth())
							cout << left << setw(3) << " ";
						else
						{
							cout << left << setw(3) << calDates[month - 1];
							calDates[month - 1]++;
						}
					}
				}
				cout << left << setw(2) << " "; //Space between months
			}
			cout << endl; //Line Break
		}
	}
}

int calendarType::getFirstDayOfMonth()
{
	//Equation source: https://www.tondering.dk/claus/cal/chrweek.php#calcdow

	int a, y, m, d;

	a = (14 - firstDate.getMonth()) / 12;

	y = firstDate.getYear() - a;
	m = firstDate.getMonth() + (12 * a) - 2;

	d = (1 + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

	return d;
}