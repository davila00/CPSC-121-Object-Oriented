#ifndef NHL_H
#define NHL_H
#include "Athlete.h"

class NHL : public Athlete//to inherit from base class
{
public:
	NHL(string sport, double salary) : Athlete(sport, salary)
	{//inherits from base class overloaded constructor

	}
	virtual void pickLeaguePosition()
	{//test for abstraction function
		int positionChoice;//for user input of 1-4
		cout << "What position does the athlete play?" << endl;
		cout << "(1-4)" << endl;
		cout << "1. Center" << endl;
		cout << "2. Winger" << endl;
		cout << "3. Defenseman" << endl;
		cout << "4. Goalie" << endl;
		cin >> positionChoice;
		try//to test valid input by the user by error enforcement
		{
			if (!(positionChoice >= 1 && positionChoice <= 5))
			{//throws the error message for it to catch if it is not 1-5
				throw string("Invalid input! Setting default value to 1");
			}
			else if (positionChoice == 1)
			{
				position = "Center";
			}
			else if (positionChoice == 2)
			{
				position = "Winger";
			}
			else if (positionChoice == 3)
			{
				position = "Defenseman";
			}
			else if (positionChoice == 4)
			{
				position = "Goalie";
			}
		}
		catch (string exceptionString)
		{
			cout << exceptionString << endl;
			position = "Center";//the default position in case it's not 1-5
		}
	}
	virtual void displayLeagueSalaryData()
	{//test for abstraction function
		double leagueAvg = 2620000.00;//average salary for an NHL athlete
		cout << "This Athlete's salary of $" << fixed << setprecision(2) << salary << " compares to ";
		cout << fixed << setprecision(2) << ((salary / leagueAvg) * 100) << "% of the average ";//for a percentage out of 100
		cout << league << " player's salary of $" << fixed << setprecision(2) << leagueAvg << endl;
	}//displays the variables and set to USD standard of cents; compares salary to league average in a percentage
};
#endif // !NHL_H