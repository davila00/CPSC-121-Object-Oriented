#ifndef MLB_H
#define MLB_H
#include "Athlete.h"

class MLB : public Athlete//to inherit from base class
{
public:
	MLB(string sport, double salary) : Athlete(sport, salary)
	{//inherits from base class overloaded constructor

	}
	virtual void pickLeaguePosition()
	{//test for abstraction function
		int positionChoice;//for user input of 1-5
		cout << "What position does the athlete play?" << endl;
		cout << "(1-5)" << endl;
		cout << "1. Pitcher" << endl;
		cout << "2. Catcher" << endl;
		cout << "3. Baseman" << endl;
		cout << "4. Shortstop" << endl;
		cout << "5. Outfielder" << endl;
		cin >> positionChoice;
		try
		{
			if (!(positionChoice >= 1 && positionChoice <= 5))
			{//error string to throw in case it is not between 1-5
				throw string("Invalid input! Setting default value to 1");
			}
			else if (positionChoice == 1)
			{
				position = "Pitcher";
			}
			else if (positionChoice == 2)
			{
				position = "Catcher";
			}
			else if (positionChoice == 3)
			{
				position = "Baseman";
			}
			else if (positionChoice == 4)
			{
				position = "Shortstop";
			}
			else if (positionChoice == 5)
			{
				position = "Outfielder";
			}
		}
		catch (string exceptionString)
		{//catches the string and makes it equal to the first position
			cout << exceptionString << endl;
			position = "Pitcher"; //default position for the MLB class
		}
	}
	virtual void displayLeagueSalaryData()
	{//test for abstraction function
		double leagueAvg = 4170000.00;//average salary for an MLB athlete
		cout << "This Athlete's salary of $" << fixed << setprecision(2) << salary << " compares to ";
		cout << fixed << setprecision(2) << ((salary / leagueAvg) * 100) << "% of the average ";//for a percentage out of 100
		cout << league << " player's salary of $" << fixed << setprecision(2) << leagueAvg << endl;
	}//displays the variables and set to USD standard of cents; compares salary to league average in a percentage
};
#endif // !MLB_H