/*
Daniel Avila May 6th, 2019 Section 19
Lab 13: Athlete Salaries
Description: Use of exception handling to verify user input and
Description: runtime polymorphism to ensure virtual abstraction.
*/
#include "Athlete.h"
#include "NBA.h"
#include "NHL.h"
#include "MLB.h"
#include <memory>

int main()
{	//instance of just one Athlete where its object is null because it is
	//dependent on the user's input to make a pointer of a derived class
	shared_ptr<Athlete> unknown = nullptr;

	int sportChoice;//for league choice
	double salary;//income for athlete
	cout << "Which Sport does the athlete play ?" << endl;
	cout << "(1 - 3)" << endl;
	cout << "1 : NBA" << endl;
	cout << "2 : MLB" << endl;
	cout << "3 : NHL" << endl;
	cin >> sportChoice;//user choosing from 1-3
	while (!(sportChoice >= 1 && sportChoice <= 3))
	{//validates the user input to be between 1 and 3
		cout << "Invalid sport option! Try again:" << endl;
		cin >> sportChoice;
	}
	if (sportChoice == 1)
	{//NBA league choice
		cout << "What is the Athlete's Salary?" << endl;
		cin >> salary;//user input of income for player
		unknown = make_shared<NBA>("NBA", salary);
		//the object now makes a pointer using the NBA
		//derived class with the input parameters
	}
	else if (sportChoice == 2)
	{//MLB league choice
		cout << "What is the Athlete's Salary?" << endl;
		cin >> salary;//user input of income for player
		unknown = make_shared<MLB>("MLB", salary);
		//the object now makes a pointer using the MLB
		//derived class with the input parameters
	}
	else if (sportChoice == 3)
	{//NHL league choice
		cout << "What is the Athlete's Salary?" << endl;
		cin >> salary;//user input of income for player
		unknown = make_shared<NHL>("NHL", salary);
		//the object now makes a pointer using the NHL
		//derived class with the input parameters
	}
	unknown->pickLeaguePosition();//object calls class function 
									//for position in that league
	cout << "Athlete Data: " << unknown->getAthleteSport() << " ";
						//gets league (NBA, MLB, NHL) to display
	cout << unknown->getAthletePosition() << endl;
					//gets position specific to the league to display
	unknown->displayLeagueSalaryData();//function compares user
	//input salary to the rest of the league in a percentage

	system("pause>nul");
	return 0;
}