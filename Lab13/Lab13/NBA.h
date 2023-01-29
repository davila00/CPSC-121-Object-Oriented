#ifndef NBA_H
#define NBA_H
#include "Athlete.h"

class NBA : public Athlete//to inherit from base class
{
public:
	NBA(string sport, double salary) : Athlete(sport, salary)
	{//inherits from base class overloaded constructor

	}
	virtual void pickLeaguePosition()
	{//test for abstraction function
		int positionChoice;//for user input of 1-5
		cout << "What position does the athlete play?" << endl;
		cout << "(1-5)" << endl;
		cout << "1. Point Guard" << endl;
		cout << "2. Shooting Guard" << endl;
		cout << "3. Small Forward" << endl;
		cout << "4. Power Forward" << endl;
		cout << "5. Center" << endl;
		cin >> positionChoice;
		try
		{
			if (!(positionChoice >= 1 && positionChoice <= 5))
			{//error string to throw in case it is not between 1-5
				throw string("Invalid input! Setting default value to 1");
			}
			else if (positionChoice == 1)
			{
				position = "Point Guard";
			}
			else if (positionChoice == 2)
			{
				position = "Shooting Guard";
			}
			else if (positionChoice == 3)
			{
				position = "Small Forward";
			}
			else if (positionChoice == 4)
			{
				position = "Power Forward";
			}
			else if (positionChoice == 5)
			{
				position = "Center";
			}
		}
		catch (string exceptionString)
		{//catches the string and makes it equal to the first position
			cout << exceptionString << endl;
			position = "Point Guard";//default position for the NBA class
		}
	}
	virtual void displayLeagueSalaryData()
	{//test for abstraction function
		double leagueAvg = 4580000.00;//average salary for an NBA athlete
		cout << "This Athlete's salary of $" << fixed << setprecision(2) << salary << " compares to ";
		cout << fixed << setprecision(2) << ((salary / leagueAvg) * 100) << "% of the average ";//for a percentage out of 100
		cout << league << " player's salary of $" << fixed << setprecision(2) << leagueAvg << endl;
	}//displays the variables and set to USD standard of cents; compares salary to league average in a percentage
};
#endif // !NBA_H