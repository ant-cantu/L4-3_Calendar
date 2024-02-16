//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L4-3	(dayType.h)									* 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose         : header and implementation file containing the		*
//*					  necessary functions to create an object of		*
//*					  dayType. Consiting of setting the day,			*
//*					  printing the day, printing the next day			*
//*					  printing the previous day, adding days,			*
//*					  returning the day.								*
//*                                                                     * 
//* Inputs          : User to enter the information requested by		* 
//*					  the prompt.										*
//*                                                                     * 
//* Outputs         : Outputs the called functions.						*
//*                                                                     * 
//* Calls           :													*
//*					public:												*
//*					  print() const;									*
//*					  nextDay() const;									* 
//*					  prevDay() const;									*
//*					  addDay(int nDays);								*  
//*					  setDay(string d);									*
//*					  getDay() const;									*
//*					  dayType();										*
//*					  dayType(string d);								*	 	
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

using namespace std;

//Header file "dayType.h"
class dayType
{
public:
	void print() const;
	//Function to print the current day.
	//Precondition: setDay(string d); must be ran prior to
	//				running this function.
	//Postcondition:  The current weekday is printed.

	string nextDay() const;
	//Function to return the next day.
	//Precondition: setDay(string d); must be ran priot to
	//				running this function.
	//Postcondition: The next day is returned as a string value.

	string prevDay() const;
	//Function to return the previous day.
	//Precondition: setDay(string d); must be ran priot to
	//				running this function.
	//Postcondition: The previous day is returned as a string value.

	void addDay(int nDays);
	//Function to add nDays amount of days to the currently set day.
	//Precondition: setDay(string d); must be ran priot to
	//				running this function.
	//				nDays must be a positive integer.
	//Postcodintion: nDays is added to the currently set day.
	//				 If days added goes over the 7th day of the
	//				 week, a new week is started.

	void setDay(string d);
	//Function to set the current weekday.
	//Precondition: No precondition.
	//Postcondition: The current day is set. Must set day by name.

	string getDay() const;
	//Function to return the currently set day as a string variable.
	//Precondition: setDay(string d); must be ran priot to
	//				running this function.
	//Postcondition: The current set day is returned as a string variable.

	dayType();
	//Default constructor
	//Sets the default day to Wednesday.
	//Precondition: No precondition.
	//Postcondition: Wednesday is set as the current day.

	dayType(string d);
	//Default constructor
	//Sets the day according to the value of d.
	//Precondition: No precondition.
	//Postcondition: Sets the day according the value of d.

private:
	int dayOfWeek;	//Integer variable to store the current day of the week.

	//String array to store the days of the week.
	string weekDay[7] = { "Sunday", "Monday", "Tuesday", "Wednesday",
						"Thursday", "Friday", "Saturday" };
};

//implementation code for dayType.h
void dayType::print() const
{
	cout << getDay() << endl;
}

string dayType::nextDay() const
{
	switch (dayOfWeek)
	{
	case 0: return "Monday";
	case 1: return "Tuesday";
	case 2: return "Wednesday";
	case 3: return "Thursday";
	case 4: return "Friday";
	case 5: return "Saturday";
	case 6: return "Sunday";
	}
	return "ERROR";
}

string dayType::prevDay() const
{
	switch (dayOfWeek)
	{
	case 0: return "Saturday";
	case 1: return "Sunday";
	case 2: return "Monday";
	case 3: return "Tuesday";
	case 4: return "Wednesday";
	case 5: return "Thursday";
	case 6: return "Friday";
	}
	return "ERROR";
}

void dayType::addDay(int nDays)
{
	while (nDays > 0)
	{
		dayOfWeek++;
		nDays--;
		if (dayOfWeek > 6)
			dayOfWeek = 0;
	}
}

void dayType::setDay(string d)
{
	//Convert to lowercase for simplicity
	for (int i = 0; i < d.length(); i++)
		d[i] = tolower(d[i]);

	if (d == "sunday")
		dayOfWeek = 0;
	else if (d == "monday")
		dayOfWeek = 1;
	else if (d == "tuesday")
		dayOfWeek = 2;
	else if (d == "wednesday")
		dayOfWeek = 3;
	else if (d == "thursday")
		dayOfWeek = 4;
	else if (d == "friday")
		dayOfWeek = 5;
	else if (d == "saturday")
		dayOfWeek = 6;
	else
		dayOfWeek = -1; //Error
}

string dayType::getDay() const
{
	return weekDay[dayOfWeek];
}

dayType::dayType()
{
	cout << "Anthony Cantu, dayType.h - L4-3" << endl;
	setDay("Wednesday");
}

dayType::dayType(string d)
{
	cout << "Anthony Cantu, dayType.h - L4-3" << endl;
	setDay(d);
}


