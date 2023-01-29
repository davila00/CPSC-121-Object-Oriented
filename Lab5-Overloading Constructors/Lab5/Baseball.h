/*
Daniel Avila	March 4th 2020	Section 19
Lab 5: Overloaded Classes
Description: In this lab, we implement a Class and with its default constructor, we overload it 3 times
*/
#ifndef BASEBALL_H//start of class
#define BASEBALL_H
#include <iostream>
#include <string>
using namespace std;
//Class for everything related to the umbrella of a baseballplayer(eg. position, bavg, id)
class BaseBallPlayer
{
private:
	string role;//for the postion name
	int ID;//for the number identification
	double BAVG;//for the average between 0-1

public:
	BaseBallPlayer();//default constructor 
	BaseBallPlayer(int ssID, double ssBAVG);//overloaded shortstop constructor
	BaseBallPlayer(double ofBAVG);//overloaded outfielder constructor
	BaseBallPlayer(int bID);//overloaded batter constructor
	void displayBAVG();//for collective and individual batting average
	double getBAVG();//used for the display of all's batting average

};
BaseBallPlayer::BaseBallPlayer()//Default constructor
{
	role = "Catcher";//Default role of catcher
	ID = 999;//Default ID
	BAVG = 0.5;//Default batting average 
	cout << role << " " << ID << " generated!" << endl << endl;//Player and ID are generated
}
BaseBallPlayer::BaseBallPlayer(int ssID, double ssBAVG)//Shortstop constructor
{
	role = "Shortstop";//Role in overloaded constructor 1
	ID = ssID;//ID in overloaded constructor 1
	BAVG = ssBAVG;//BAVG in overloaded constructor 1
	cout << role << " " << ID << " generated!" << endl << endl;//Player and ID are generated
}
BaseBallPlayer::BaseBallPlayer(double ofBAVG)//Outfielder constructor
{
	role = "Outfielder";//Role in overloaded constructor 2
	ID = 999;//ID in overloaded constructor 2
	BAVG = ofBAVG;//BAVG in overloaded constructor 
	cout << role << " " << ID << " generated!" << endl << endl;//Player and ID are generated
}
BaseBallPlayer::BaseBallPlayer(int bID)//Battter constructor
{
	role = "Batter"; //Role in overloaded constructor 3
	ID = bID; //ID in overloaded constructor 3
	BAVG = 0.5; //BAVG in overloaded constructor 3
	cout << role << " " << ID << " generated!" << endl << endl;//Player and ID are generated
}
double BaseBallPlayer::getBAVG()//Gets player batting average
{
	return BAVG;//returns the batting average that was inputted
}
void BaseBallPlayer::displayBAVG()//Displays the battinga average solely and collectively 
{
	cout << role << "'s Batting Average is " << getBAVG() << endl;//iterates through the roles and display's theri average
}
#endif // !BASEBALL_H		end of class