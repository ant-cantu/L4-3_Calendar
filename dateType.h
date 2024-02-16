//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L4-3	(dateType.h)		                        * 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose         : header and implementation file containing the		*
//*					  necessary functions to create an object of		*
//*					  dateType. Consiting of setting the date,			*
//*					  validating the date. Returns the date,			*
//*					  total days in the month, number of days passed	*
//*					  in the year, number of days left in the year.		*
//*                                                                     * 
//* Inputs          : User to enter the dates requested in prompt		*
//*                                                                     * 
//* Outputs         : Outputs the called functions.						*
//*                                                                     * 
//* Calls           :													*
//*					public:												*
//*					  setDate(int m, int d, int y)				        *
//*					  setMonth(int m);									* 
//*					  setDay(int d);									*
//*					  setYear(int y);									*  
//*					  getMonth() const;									*
//*					  getDay() const;									*
//*					  getYear() const;									*
//*					  getDaysInMonth();									*
//*					  numberOfDaysPassed();								*
//*					  numberOfDaysLeft();								*	
//*					  incrementDate(int nDays);							*
//*					  isLeapYear();										*
//*					  validDate(int, int, int);							*
//*					  dateType(int = 1, int = 1, int = 1900);			*	
//*																		*
//*					private:											*
//*					  getDaysInMonth(int);								*	
//*					  validDate(int);									*
//*					  validDate(int, int);								*		 	
//*                                                                     * 
//* Structure       : BEGIN                                             * 
//*                        Straight line code no sub-processes          * 
//*                   STOP                                              * 
//*                        End of Program                               * 
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Collaboration   : The Goonies										*
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Change Log:                                                         * 
//*                         Revision                                    * 
//*       Date    Changed  Rel Ver Mod Purpose                          * 
//* 12/04/23      acantu 000.000.000 Initial release of program       	* 
//*                                                                     * 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
#pragma once

#include <iostream>

using namespace std;

//Header file "dateType.h"
class dateType
{
public:
	void setDate(int m, int d, int y);
	//Function to set the date.
	//The date is set according to the parameters.
	//Precondition:	The parameters must be filled with valid
	//				inputs.
	//Postcondition: dMonth = m; dDay = d; dYear = y;
	//				 The function checks that the values of
	//				 month, day, and hour are valid, and assigns
	//				 the values to their corresponding variable.
	//				 If the value is invalid, the program will
	//				 prompt the user again for another input.
	
	void setMonth(int m);
	//Function to set the month.
	//The month is set according to the paremeter.
	//Precondition:	The paremeter must be filled with a valid
	//				input.
	//Postcondition: dMonth = m;
	//				 The function checks that the value of m is
	//				 a valid input and assigns it to the dMonth
	//				 variable. If the value is invalid, the program
	//				 will prompt the user again for another input.

	void setDay(int d);
	//Function to set the date.
	//The date is set according to the paremeter.
	//Precondition:	The paremeter must be filled with a valid input.
	//Postcondition: dDay = d;
	//				 The function checks that the value of d is
	//				 a valid input and assigns it to the dDay variable.
	//				 If the value is invalid, the program will prompt
	//				 the user and ask for another input.

	void setYear(int y);
	//Function to set the year.
	//The year is set according to the paremeter.
	//Precondition:	The paremeter must be filled with a valid input.
	//Postcondition: dYear = y;
	//				 The function checks that the value of y is
	//				 a valid input and assigns it to the dYear variable.
	//				 If the value is invalid, the program will prompt
	//				 the user and ask for another input.

	int getMonth() const;
	//Function to return the month.
	//Precondition:	The variable dMonth must be set before calling
	//				this function.
	//Postcondition: The month is returned in the format: MM

	int getDay() const;
	//Function to return the day.
	//Precondition:	The variable dDay must be set before calling
	//				this function.
	//Postcondition: The day is returned in the format: DD

	int getYear() const;
	//Function to return the year.
	//Precondition:	The variable dYear must be set before calling
	//				this function.
	//Postcondition: The year is returned in the format: YYYY

	int getDaysInMonth();
	//Function to return the total amount of days
	//in the current month set by the user.
	//Precondition:	The variable dMonth and dYear must be set.
	//				dYear must be set to check if the current year
	//				is a leap year.
	//Postcondition: The total amount of days in the current month
	//				 is returned.

	int numberOfDaysPassed();
	//Function to return the number of days that
	//have passed in the current year.
	//Precondition:	The variable dMonth and dDay must be set.
	//Postcondition: The total amount of days that have passed
	//				 for the year will be returned as an integer.

	int numberOfDaysLeft();
	//Function to return the number of days left
	//in the current year.
	//Precondition:	The variables dMonth and dDay must be set
	//				as the function calls numberOfDaysPassed()
	//Postcondition: The total amount of days that are left for
	//				 the current year will be returned as an integer.

	void incrementDate(int nDays);
	//Function to increase the date by nDays number of days.
	//Precondition:	dDay variable must be set before use.
	//Postcondition: The variable dDay is increased. If the
	//				 day goes over the max number of days in
	//				 the current month, the month is increased.

	bool isLeapYear();
	//Function to check if the current year is a leap year.
	//Precondition: dYear must be set prior to running this function.
	//Postcondition: A boolean value is returned depending if the 
	//				 the current year is a leap year or not.

	bool validDate(int, int, int); //m,d,y
	//Function to check if the dates entered are valid
	//Precondition: No preconditions
	//Postcondition: If dates are valid, function will
	//				 return true. If they are not valid
	//				 function will return false.

	dateType(int = 1, int = 1, int = 1900);
	//Default constructor
	//Default values d = 1, m = 1, y = 1900
	//Precondition: No precondition
	//Postcondition: Sets the month, date, and year.

private:
	int dMonth; //Variable to hold the month set by the user.
	int dDay;	//Variable to hold the day set by the user.
	int dYear;	//Variable to hold the year set by the user.

	int getDaysInMonth(int);
	//Function to return the total number of days in the
	//currently set month.
	//Precondition:	dMonth must be set priot to running
	//				this function.
	//Postcondition: The total number of days for the current
	//				 month is returned as an integer value.

	bool validDate(int);	//m
	//Function to check if the month entered is valid.
	//Precondition:	No preconditions.
	//Postcondition: If the month entered is valid, function
	//				 will return true. If the month entered
	//				 is invalid, the function will return false.

	bool validDate(int, int);	//m, d
	//Function to check if the month and day entered is valid.
	//Precondition: dYear must be set prior to running this
	//				function.
	//Postcondition: If the month and day entered is valid,
	//				 function will return true. If the values
	//				 entered are invalid, the function will
	//				 retuen false.
};

//implementation code for dateType.h
void dateType::setDate(int m, int d, int y)
{
	do
	{
		if (validDate(m, d, y))
		{
			dMonth = m;
			dDay = d;
			dYear = y;
		}
		else
		{
			if (!cin)
			{
				cin.clear();
				cin.ignore(200, '\n');
			}
			cout << "Invalid date entry! Please try again!" << endl;
			cout << "Enter the date (DD MM YYYY): ";
			cin >> m >> d >> y;
		}
	} while (!validDate(m, d, y));

	dMonth = m;
	dDay = d;
	dYear = y;
}

void dateType::setMonth(int m)
{
	do
	{
		if (validDate(m))
			dMonth = m;
		else
		{
			if (!cin)
			{
				cin.clear();
				cin.ignore(200, '\n');
			}
			cout << "Invalid month entry! Please try again!" << endl;
			cout << "Enter the month (1 - 12): ";
			cin >> m;
		}
	} while (!validDate(m));
	
	dMonth = m;
}

void dateType::setDay(int d)
{
	do
	{
		if (validDate(dMonth, d))
			dDay = d;
		else
		{
			if (!cin)
			{
				cin.clear();
				cin.ignore(200, '\n');
			}
			cout << "Invalid date entry! Please try again!" << endl;
			cout << "Enter the date (1 - " << getDaysInMonth() << "): ";
			cin >> d;
		}
	} while (validDate(dMonth, d));

	dDay = d;
}

void dateType::setYear(int y)
{
	do
	{
		if (y >= 1582 && y <= 9999)
			dYear = y;
		else
		{
			if (!cin)
			{
				cin.clear();
				cin.ignore(200, '\n');
			}
			cout << "Invalid year entry! Please try again!" << endl;
			cout << "Enter the year (>= 1582 & <= 9999): ";
			cin >> y;
		}
	} while (y < 1000 || y > 9999);
	
	dYear = y;
}

int dateType::getMonth() const
{
	return dMonth;
}

int dateType::getDay() const
{
	return dDay;
}

int dateType::getYear() const
{
	return dYear;
}

int dateType::getDaysInMonth()
{
	switch (dMonth)
	{
	case 1: return 31;
	case 2: 
		if (isLeapYear())
			return 29;
		else
			return 28;
	case 3: return 31;
	case 4: return 30;
	case 5: return 31;
	case 6: return 30;
	case 7: return 31;
	case 8: return 31;
	case 9: return 30;
	case 10: return 31;
	case 11: return 30;
	case 12: return 31;
	default: return -1;
	}
}

int dateType::numberOfDaysPassed()
{
	int daysPassed = 0;
	for (int i = 1; i <= 12; i++)
	{
		if (i == dMonth)
			break;

		daysPassed += getDaysInMonth(i);
	}
	daysPassed += dDay;

	return daysPassed;
}

int dateType::numberOfDaysLeft()
{
	return (isLeapYear() ? 366 : 365) - numberOfDaysPassed();
}

void dateType::incrementDate(int nDays)	//Colab with Daniel Balolong
{
	while (nDays > 0)
	{
		int daysLeftInMonth = getDaysInMonth() - dDay;

		//If current day plus days added is greater than total days in month
		if ((dDay + nDays) > getDaysInMonth())
		{
			//Jump to new month
			nDays -= daysLeftInMonth + 1;
			dDay = 1;
			dMonth++;
			if (dMonth > 12)	//Jump to new year
			{
				dYear++;
				dMonth = 1;
			}
		}
		else
		{
			//Add days
			dDay += nDays;
			nDays -= daysLeftInMonth + 1;
		}
	}
}

dateType::dateType(int m, int d, int y)
{
	cout << "Anthony Cantu, dateType.h - L4-3" << endl;
	setDate(m, d, y);
}

bool dateType::isLeapYear()
{
	if (dYear % 4 == 0)
		return true;
	else
		return false;
}

bool dateType::validDate(int m, int d, int y)
{
	if (y < 1582)
		return false;
	
	if (d < 1)
		return false;

	if (m < 1 || m > 12)
		return false;

	switch (m)
	{
	case 1: if (d > 31) return false;
	case 2:
		if (isLeapYear())
		{
			if (d > 29)
				return false;
		}
		else
			if (d > 28)
				return false;
	case 3: if (d > 31) return false;
	case 4: if (d > 30) return false;
	case 5: if (d > 31) return false;
	case 6: if (d > 30) return false;
	case 7: if (d > 31) return false;
	case 8: if (d > 31) return false;
	case 9: if (d > 30) return false;
	case 10:if (d > 31) return false;
	case 11: if (d > 30) return false;
	case 12: if (d > 31) return false;
	//default: return false;
	}
	return true;
}

//Internal use only
int dateType::getDaysInMonth(int m)
{
	switch (m)
	{
	case 1: return 31;
	case 2:
		if (isLeapYear())
			return 29;
		else
			return 28;
	case 3: return 31;
	case 4: return 30;
	case 5: return 31;
	case 6: return 30;
	case 7: return 31;
	case 8: return 31;
	case 9: return 30;
	case 10: return 31;
	case 11: return 30;
	case 12: return 31;
	default: return -1;
	}
}

bool dateType::validDate(int m)
{
	if (m < 1 || m > 12)
		return false;
	else
		return true;
}

bool dateType::validDate(int m, int d)
{
	if (m < 1 || m > 12)
		return false;

	switch (m)
	{
	case 1: if (d > 31) return false;
	case 2:
		if (isLeapYear())
		{
			if (d > 29)
				return false;
		}
		else
			if (d > 28)
				return false;
	case 3: if (d > 31) return false;
	case 4: if (d > 30) return false;
	case 5: if (d > 31) return false;
	case 6: if (d > 30) return false;
	case 7: if (d > 31) return false;
	case 8: if (d > 31) return false;
	case 9: if (d > 30) return false;
	case 10:if (d > 31) return false;
	case 11: if (d > 30) return false;
	case 12: if (d > 31) return false;
		//default: return false;
	}
	return true;
}