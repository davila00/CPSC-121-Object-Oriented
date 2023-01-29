/*
Daniel Avila	March 4th 2020	Section 19
Lab 5: Overloaded Classes
Description: In this lab, we implement a Class and with its default constructor, we overload it 3 times
*/
#include "Baseball.h"//To include the class on the Baseball header

int main()
{
	int id;//For input variable on the overloaded parameters
	double bavg;//For input variable on the overloaded parameters

	cout << "===Welcome to the create your own baseball team app!===" << endl << endl;
	cout << "No input needed for a catcher...using default values..." << endl;
	BaseBallPlayer Catcher;//Creates a Catcher object with default values

	//Calls overloaded constructor with the necessary parameters(1 double, 1 int)
	cout << "A Shortstop requires an ID and Batting Average..." << endl;
	//BaseBallPlayer Shortstop;
	cout << "What is the Shortstops's ID?" << endl;
	cin >> id;
	cout << "What is the Shortstop's Batting Average?" << endl;
	cin >> bavg;
	while (bavg < 0 || bavg > 1)//While loop validates user input between the parameter
	{
		cout << "Invalid Batting Average. Must be between 0-1" << endl;
		cout << "Enter Batting Average." << endl;
		cin >> bavg;//Validation input
	}
	BaseBallPlayer Shortstop(id, bavg);//calls shortstop constructor

	//Calls overloaded constructor with the necessary parameters(1 double)
	cout << "An Outfielder only requires a Batting Average." << endl;
	//BaseBallPlayer Outfielder;//Creates a Outfielder object with default values
	cout << "What is the Outfielder's batting average?" << endl;
	cin >> bavg;//Used to set the Outfielder's Batting Average
	while (bavg < 0 || bavg > 1)//While loop validates user input between the parameter
	{
		cout << "Invalid Batting Average. Must be between 0-1" << endl;
		cout << "Enter Batting Average." << endl;
		cin >> bavg;//Validated input
	}
	BaseBallPlayer Outfielder(bavg);//calls outfielder constructor

	//Calls overloaded constructor with the necessary parameters(1 int)
	cout << "A Batter only requires an ID." << endl;
	//BaseBallPlayer Batter;//Creates a Batter object with default values
	cout << "What is the Batter's ID?" << endl;
	cin >> id;
	BaseBallPlayer Batter(id);//Calls batter constructor
	
	Catcher.displayBAVG();//Displays the final batting average for the catcher
	Shortstop.displayBAVG();//Displays the final batting average for the shortstop
	Outfielder.displayBAVG();//Displays the final batting average for the outfielder
	Batter.displayBAVG();//Displays the final batting average for the batter
	cout << "The team's collective batting average is ";
	cout << (Catcher.getBAVG() + Shortstop.getBAVG() +  //Used to call the individual player's batting average and then
		     Outfielder.getBAVG() + Batter.getBAVG()) / 4; //adds them up and divides all of them by 4 for a collective average 
	system("pause>nul");
	return 0;
}