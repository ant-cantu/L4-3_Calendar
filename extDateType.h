//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L4-3	(extDateType.h)								* 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose         : header and implementation file containing the		*
//*					  necessary functions to create an object of		*
//*					  extDateType. Consiting of setting the date and	*
//*					  month and printing different formats of the date.	*
//*                                                                     * 
//* Inputs          : User to enter the information requested by		* 
//*					  the prompt.										*
//*                                                                     * 
//* Outputs         : Outputs the called functions.						*
//*                                                                     * 
//* Calls           :													*
//*					public:												*
//*					  printLongDate();									*
//*					  setDate(int, int, int);							* 
//*					  setMonth(int m);									*
//*					  printLongMonthYear();								*  
//*					  printMonth() const;								*
//*					  extDateType();									*
//*					  extDateType(int, int, int);						* 	
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
#include <string>
#include "dateType.h" 

using namespace std;

//Header file "extDateType.h"
class extDateType : public dateType
{
public:
	void printLongDate();
	//Function to print a long date.
	//Example: August 1, 2023
	//Precondition:	setDay() must be ran prior to running
	//				this function.
	//Postcondition: The long date is printed.

	void setDate(int, int, int);
	//Function to set the month, day, and year.
	//Precondition: No preconditions.
	//Postcondition: dateType::setDate is set.
	//				 setMonth(m) is set.

	void setMonth(int m);
	//Function to set the month.
	//Precondition:	No preconditions.
	//Postcondition: month is set accordingly based on the
	//				 integer value of m.

	void printLongMonthYear();
	//Function to print the long month and year.
	//Example: December 2023
	//Precondition:	setDay() must be ran prior to running
	//				this function.
	//Postcondition: The long month and year is printed.

	string printMonth() const;
	//Function to return the current month as a string variable.
	//Precondition:	setDay() or setMonth() must be set prior to
	//				running this function.
	//Postcondition: The current month is returned as a string variable.

	extDateType();
	//Default constructor
	//Sets the default date to 1, 1, 1900
	//Precondition: No preconditions.
	//Postcondition: setDate(1, 1, 1900);

	extDateType(int, int, int);
	//Default constructor
	//Sets the date according to users values.
	//Precondition: No preconditions.
	//Postcondition: setDate(m, d, y);

private:
	string month;	//String to store the month set.
};

//implementation code for extDateType.h
void extDateType::printLongDate()
{
	cout << month << " " << getDay() << ", " << getYear() << endl;
}

void extDateType::setDate(int m, int d, int y)
{
	do
	{
		if (validDate(m, d, y))
		{
			dateType::setDate(m, d, y);
			setMonth(m);
		}
		else
		{
			if (!cin)
			{
				cin.clear();
				cin.ignore(200, '\n');
			}
			cout << "Invalid date entry! Please try again!" << endl;
			cout << "Enter the date (MM DD YYYY): ";
			cin >> m >> d >> y;
		}
	} while (!validDate(m, d, y));
	
	dateType::setDate(m, d, y);
	setMonth(m);
}

void extDateType::setMonth(int m)
{
	switch (m)
	{
	case 1: month = "January"; break;
	case 2: month = "February"; break;
	case 3: month = "March"; break;
	case 4: month = "April"; break;
	case 5: month = "May"; break;
	case 6: month = "June"; break;
	case 7: month = "July"; break;
	case 8: month = "August"; break;
	case 9: month = "September"; break;
	case 10: month = "October"; break;
	case 11: month = "November"; break;
	case 12: month = "December"; break;
	default:
		do
		{
			if (!cin)
			{
				cin.clear();
				cin.ignore(200, '\n');
			}
			cout << "ERROR: Invalid month entry! Please try again!" << endl;
			cout << "Enter the Month (1 - 12): ";
			cin >> m;
		} while (m < 1 || m > 12);
		setMonth(m);
	}
	dateType::setMonth(m);
}

string extDateType::printMonth() const
{
	return month;
}

void extDateType::printLongMonthYear()
{
	cout << month << " " << getYear() << endl;
}

extDateType::extDateType()
{
	cout << "Anthony Cantu, extDateType.h - L4-3" << endl;
	setDate(1, 1, 1900);
}

extDateType::extDateType(int m, int d, int y)
{
	cout << "Anthony Cantu, extDateType.h - L4-3" << endl;
	setDate(m, d, y);
}