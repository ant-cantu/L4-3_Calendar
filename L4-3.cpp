//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L4-3						                        * 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose         : Test program to test the headers:                 * 
//*						dateType.h, dayType.h extDateType.h				*
//*						calendarType.h									*
//*                                                                     * 
//* Inputs          : User to enter the dates requested by prompts		*
//*                                                                     * 
//* Outputs         : Outputs the dates set by the user					*
//*					  Outputs the calendars set by the user				*
//*                                                                     * 
//* Calls           : extDateType::setDate()					        *
//*					  extDateType::printLongDate()						* 
//*					  extDateType::getMonth()							*
//*					  extDateType::getDay()								*  
//*					  extDateType::getYear()							*
//*					  extDateType::numberOfDaysPassed()					*
//*					  extDateType::numberOfDaysLeft()					*
//*					  extDateType::incrementDate()						*
//*																		*
//*					  dayType::print()									*	
//*					  dayType::setDay()									*
//*					  dayType::addDay()									*
//*					  dayType::nextDay()								*
//*					  dayType::prevDay()								*	
//*																		*
//*					  calendarType::setYear()							*	
//*					  calendarType::printCalendar()						*
//*					  calendarType::setYear()							*		 	
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
#include <iostream>
#include "dateType.h"
#include "dayType.h"
#include "extDateType.h"
#include "calendarType.h"

using namespace std;

int main()
{
	cout << "Anthony Cantu\t" << "L4-3\t" << "L3-4.exe" << endl << endl;

	//------ dateType.h/extDateType.h test program ------
	extDateType date; //dateType date
	int m, d, y;
	int daysToAdd;

	cout << "Enter the date (MM DD YYYY): ";
	cin >> m >> d >> y;
	date.setDate(m, d, y);

	date.printLongDate(); //Month Date, Year

	cout << date.getMonth() << "-" << date.getDay() << "-" << date.getYear() << endl; //MM-DD-YYYY

	cout << "Days gone in the year: " << date.numberOfDaysPassed() << endl;
	cout << "Days left in the year: " << date.numberOfDaysLeft() << endl;

	cout << "Enter number of days to be added: ";
	cin >> daysToAdd;
	date.incrementDate(daysToAdd);
	cout << "After increment date: "
		<< date.getMonth() << "-" << date.getDay() << "-" << date.getYear();

	cout << endl << endl; //Line Break

	//------ dayType.h test program ------
	dayType day("Wednesday");

	cout << "Create and Test \"dayType\" object initalized to \"Wednesday\":" << endl;
	day.print();
	cout << "Next Day: " << day.nextDay() << endl;
	day.setDay("Sunday");
	cout << "Set Day: ";
	day.print();
	cout << "Previous Day: " << day.prevDay() << endl;
	cout << "Add 12 days to \"dayType\" object" << endl;
	day.addDay(12);
	cout << "After Add days: ";
	day.print();

	cout << endl; //Line Break

	//------ calendarType.h test program ------
	cout << "Create and Test \"calendarType\" object initalized to \"September 2019\":" << endl;
	calendarType calendar(9, 2019);

	cout << endl; //Line Break

	//Test printCalendar by Year
	cout << "Enter the calendar year to print. (YYYY): ";
	cin >> y;
	calendar.setYear(y);

	calendar.printCalendar('Y'); //Y = year

	cout << endl; //Line Break

	cout << "Press any key to Exit.";
	char q;
	cin.ignore(2, '\n');
	cin.get(q);

	return 0;
}