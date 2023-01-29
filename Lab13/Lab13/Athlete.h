#ifndef ATHLETE_H
#define ATHLETE_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Athlete
{
protected:
	double salary;
	string position;
	string league;
public:
	Athlete(string sport, double sal)
	{
		salary = sal;//parameter set to protected variable
		league = sport;//parameter set to protected variable
	}
	virtual void pickLeaguePosition() = 0;//test for abstraction function
	virtual void displayLeagueSalaryData() = 0;//test for abstraction function
	string getAthletePosition() 
	{
		return position;//returns position for specific league
	}
	string getAthleteSport() 
	{
		return league;//returns the league (NBA, MLB, NHL)
	}
};
#endif // !ATHLETE_H
